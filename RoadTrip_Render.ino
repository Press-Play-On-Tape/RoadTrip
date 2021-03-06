#include <Arduboy2.h>

void renderHud() {


    // Gearbox ..

    switch (car.getTransmissionType()) {

        case TransmissionType::Manual:
            {
                uint8_t frame = arduboy.getFrameCount(8) / 2;
                Sprites::drawPlusMask(5, 1, Images::Gearbox, 0);

                switch (car.getGear()) {

                    case 0:
                        Sprites::drawPlusMask(11 + ((frame % 3) - 1), 7 + ((frame % 3) - 1), Images::Gearbox_Knob, 0);
                        break;

                    default: // Gears 1 ... 5
                        Sprites::drawPlusMask(pgm_read_byte(&Constants::GearboxX[car.getGear()]), (car.getGear() % 2) ? 1 : 13, Images::Gearbox_Knob, 0);
                        break;
                }
            }
            break;

        default: // TransmissionType::Auto
        
            Sprites::drawPlusMask(1, 0, Images::AutoUpper, 0); // Upper half of automatic gears (masked)
            Sprites::drawOverwrite(1, 8, Images::AutoLower, 0);// Lower half of automatic gears
            Sprites::drawOverwrite(18, 6, Images::AutoNumbers, car.getGear() - 1);
            break;

    }


    // Render Tacho ..

    {
        uint8_t tacho = car.getTacho();

        Sprites::drawOverwrite(28, 1, Images::Tacho, 0); // Render Tachometer gauge
        arduboy.drawFastHLine(28, 9, 27, BLACK); // Lower horizontal line of frame

        if (tacho == 1) {
            // Flash a solid bar to warn when under revving
            if (arduboy.getFrameCountHalf(32)) {
                arduboy.drawRect(30, 3, 2, 5, BLACK);
            }

        }
        else {

            for (uint8_t i = 0, x = 30; i < tacho; i++, x = x + 3) {
                switch (i) {
                    case 0 ... 5:
                        arduboy.drawFastVLine(x, 3, 5, BLACK); // Render low revs line
                        break;
                    default:
                        arduboy.drawRect(x, 3, 2, 5, BLACK); // Render high revs bar
                        break;
                }

            } 

        }

    }


    // Render distance travelled (score)..

    {
        uint8_t digits[5] = {};
        extractDigits(digits, gamePlayVars.distance / 10);
        
        for (uint8_t i = 0, x2 = 84 ; i < 5; ++i, x2 -= 6) {
            Sprites::drawOverwrite(x2, 1, Images::numbers_white, digits[i]);
        }

        Sprites::drawOverwrite(90, 1, Images::numbers_black, gamePlayVars.distance % 10);
        arduboy.drawFastHLine(60, 9, 37, BLACK); // Lower horizontal line of frame

        if (gamePlayVars.getTimeOfDay() != TimeOfDay::Day) {
            arduboy.drawFastVLine(96, 2, 7, WHITE); // Highlight right vertical line of frame
        }

    }



    // Render car counter ..

    Sprites::drawPlusMask(104, 1, Images::CarCounter, 0);

    #ifdef SOUNDS

        if (gamePlayVars.carsPassed > 0 && (gamePlayVars.timeOfDay > 3000) && arduboy.getFrameCount(32) == 0) {

            sound.tones(Sounds::Alert);

        }

    #endif

    if ((gamePlayVars.carsPassed > 0 && gamePlayVars.timeOfDay > 3000 && arduboy.getFrameCountHalf(32)) || gamePlayVars.timeOfDay <= 3000) {

		uint8_t digits[3] = {};
		extractDigits(digits, gamePlayVars.carsPassed);
		
		for (uint8_t i = 0, x2 = 118 ; i < 3; ++i, x2 -= 6) {
			Sprites::drawOverwrite(x2, 3, Images::numbers_white, digits[i]);
		}

	}

}

void renderPlayerCar() {


    // Calculate an index for the wheel graphic using the speed ..

    uint8_t index = 0;
    uint8_t carSpeed = car.getSpeed_Display();

    switch (carSpeed) {

        case 0 ... 1:
            index = 1;
            break;

        case 2 ... 14:
            index = 9 - (carSpeed / 2);
            break;

        default:
            index = 2;
            break;

    }

    index = arduboy.getFrameCountHalf(index);
  
    
    // Set car X to camera X (as car is always in the middle of screen) ..

    car.setX(cameraPos.getX());
    car.setY(world.roadHeightAt(car.getZ()));



    // Render the car ..

    #ifndef DEBUG_COLLISIONS

        Sprites::drawPlusMask(46, 64 - Constants::PlayerCarHeightPX, Images::Player, index);

    #else

        Vec3 leftTopCorner = car.clone();
        leftTopCorner.setX(leftTopCorner.getX() - (Constants::PlayerCarWidthUnits / 2));
        leftTopCorner.setZ(leftTopCorner.getZ() + Constants::PlayerCarLengthUnits);

        Vec3 rightTopCorner = car.clone();
        rightTopCorner.setX(rightTopCorner.getX() + (Constants::PlayerCarWidthUnits / 2));
        rightTopCorner.setZ(rightTopCorner.getZ() + Constants::PlayerCarLengthUnits);
        
        Vec3 leftBottomCorner = car.clone();
        leftBottomCorner.setX(leftBottomCorner.getX() - (Constants::PlayerCarWidthUnits / 2));

        Vec3 rightBottomCorner = car.clone();
        rightBottomCorner.setX(rightBottomCorner.getX() + (Constants::PlayerCarWidthUnits / 2));
        
        Vec3 leftTopCornerPersepective = world.perspective(leftTopCorner, cameraPos);
        Vec3 rightTopCornerPersepective = world.perspective(rightTopCorner, cameraPos);
        Vec3 leftBottomCornerPersepective = world.perspective(leftBottomCorner, cameraPos);
        Vec3 rightBottomCornerPersepective = world.perspective(rightBottomCorner, cameraPos);

        arduboy.drawLine(leftTopCornerPersepective.getX(), leftTopCornerPersepective.getY(), rightTopCornerPersepective.getX(), rightTopCornerPersepective.getY());
        arduboy.drawLine(rightTopCornerPersepective.getX(), rightTopCornerPersepective.getY(), rightBottomCornerPersepective.getX(), rightBottomCornerPersepective.getY());
        arduboy.drawLine(rightBottomCornerPersepective.getX(), rightBottomCornerPersepective.getY(), leftBottomCornerPersepective.getX(), leftBottomCornerPersepective.getY());
        arduboy.drawLine(leftBottomCornerPersepective.getX(), leftBottomCornerPersepective.getY(), leftTopCornerPersepective.getX(), leftTopCornerPersepective.getY());

    #endif


    // Render brake cloud if braking ..

    if (gamePlayVars.brakeCount > 0) {

        gamePlayVars.brakeCount--;

        uint8_t idx = (gamePlayVars.brakeCount / 2) % 3;

        if (gamePlayVars.brakeSide != Direction::Right)     Sprites::drawPlusMask(40, 58, Images::Dirt_Cloud_Left, idx);
        if (gamePlayVars.brakeSide != Direction::Left)      Sprites::drawPlusMask(71, 58, Images::Dirt_Cloud_Right, idx);

    }

}


void drawFastDottedLine(int16_t startPos, int16_t endPos, int16_t y, bool &color) {

    uint16_t rowOffset = (y / 8) * 128;
    uint8_t mask = 1 << (y % 8);

    for (int16_t x = startPos; x < endPos; ++x) {

        if (x >= 0 && x < WIDTH && y >=0 && y < HEIGHT) {
            if (color)
                arduboy.sBuffer[rowOffset + x] |= mask;
            else 
                arduboy.sBuffer[rowOffset + x] &= ~mask;

        }

        color = !color;

    }

}


void drawFastSolidLine(int16_t startPos, int16_t endPos, int16_t y, bool color) {

    uint16_t rowOffset = (y / 8) * 128;
    uint8_t mask = 1 << (y % 8);

    for (int16_t x = startPos; x < endPos; ++x) {

        if (x >= 0 && x < WIDTH && y >=0 && y < HEIGHT) {
            if (color)
                arduboy.sBuffer[rowOffset + x] |= mask;
            else 
                arduboy.sBuffer[rowOffset + x] &= ~mask;

        }

    }

}

void renderRoadEdge_Black(int16_t &startPos, int16_t endPos, int16_t y, bool &color) {

    drawFastSolidLine(startPos, endPos + 1, y, BLACK);
    startPos = endPos + 1;

}

void renderRoadEdge_Dark(int16_t &startPos, int16_t endPos, int16_t y, bool &color) {

    drawFastDottedLine(startPos, endPos + 1, y, color);
    startPos = endPos + 1;

}

void renderRoadEdge_Light(int16_t &startPos, int16_t endPos, int16_t y) {

    drawFastSolidLine(startPos, endPos + 1, y, WHITE);
    startPos = endPos + 1;

}

void renderRoad_Black(int16_t &startPos, int16_t endPos, int16_t y, bool &color) {

    drawFastSolidLine(startPos, endPos, y, BLACK);
    startPos = endPos;

}

void renderRoad_Dither_Dark(int16_t &startPos, int16_t endPos, int16_t y, bool &dither, bool &color) {

    if (dither) {
        drawFastDottedLine(startPos, endPos, y, color);
        startPos = endPos; 
    }
    else {
        drawFastSolidLine(startPos, endPos, y, BLACK);
        startPos = endPos;
    }

}

void renderRoad_Dither_Light(int16_t &startPos, int16_t endPos, int16_t y, bool &color) {

    drawFastDottedLine(startPos, endPos, y, color);
    startPos = endPos; 

}

void renderDayBanner() {

    uint8_t x = 53;

    if (gamePlayVars.showDayBannerCount > 0) {

        // Render 'New Day' banner from multiple image slices
        Sprites::drawPlusMask(16,    8+5, Images::StartOfDay_Side, 0);
        Sprites::drawPlusMask(16+91, 8+5, Images::StartOfDay_Side, 0);
        
        Sprites::drawPlusMask(16+3,  8, Images::StartOfDay, 0);
        Sprites::drawPlusMask(16+3,  8+16, Images::StartOfDay, 1);
        Sprites::drawOverwrite(16+2, 8+8, Images::StartOfDay_Mid, 0);
                
        Sprites::drawPlusMask(16+27, 8+24, Images::StartOfDay_Base, 0);
        Sprites::drawPlusMask(16+65, 8+24, Images::StartOfDay_Base, 0);


        if (gamePlayVars.days > 10) {
            x = x - 2;
        }
        Sprites::drawOverwrite(x, 18, Images::Day, 0);
        x = x + 18;

        {
            uint8_t newDay = gamePlayVars.days;
            if (newDay >= 100)  {
                Sprites::drawOverwrite(x, 18, Images::Font4x6, ((newDay / 100) + 26));
                newDay = newDay - ((newDay / 100) * 100);
                x = x + 5;
            }
            if (newDay >= 10)   {
                Sprites::drawOverwrite(x, 18, Images::Font4x6, ((newDay / 10) + 26));
                newDay = newDay % 10;
                x = x + 5;
            }
            Sprites::drawOverwrite(x, 18, Images::Font4x6, newDay + 26);
        }

    }

}

void renderGameOver() { // 0  to 108

    Sprites::drawPlusMask(WIDTH - gameOverVars.offset, 13, Images::GameOver_00, 0);
    Sprites::drawPlusMask(-59 + gameOverVars.offset, 37, Images::GameOver_01, 0);

}

void renderLights() {

    uint8_t x = 0;

    if (gamePlayVars.showDayBannerCount > 0) {

        Sprites::drawExternalMask(3, 18, Images::Lights, Images::Lights_Mask, 0, 0);

        switch (gamePlayVars.showDayBannerCount) {
        // NewDayBannerDelay count down from 130...

            // Get Ready...
            case 110:
                arduboy.setRGBled(32, 0, 0); // Red
                #ifdef SOUNDS
                    sound.tones(Sounds::Lights_Short);
                #endif
                /*-fallthrough*/
            case 81 ... 109:
                arduboy.fillRect(11, 24, 3, 3, WHITE); // Illuminate light 1 (top)
                break;

            // Get Set...
            case 80:
                arduboy.setRGBled(24, 24, 0); // Amber
                #ifdef SOUNDS
                    sound.tones(Sounds::Lights_Short);
                #endif
                /*-fallthrough*/
            case 51 ... 79:
                arduboy.fillRect(11, 30, 3, 3, WHITE); // Illuminate light 2 (middle)
                break;

            // Go! ...
            case 50:
                arduboy.setRGBled(0, 48, 0); // Green
                #ifdef SOUNDS
                    sound.tones(Sounds::Lights_Long);
                #endif
                /*-fallthrough*/
            case 20 ... 49:
                arduboy.fillRect(11, 36, 3, 3, WHITE); // Illuminate light 3 (bottom)
                break;
                
            case 0 ... 19:
                arduboy.setRGBled(0, 0, 0);
                arduboy.fillRect(11, 36, 3, 3, WHITE); // Illuminate light 3 (bottom)
                break;

            default:
                break;

        }

    }

}
