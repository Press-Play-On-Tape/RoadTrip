#pragma once

const uint8_t PROGMEM GameOverBanner[] = {
#ifndef DEBUG
128, 24,
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x82, 0x42, 0xa2, 0xa2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xa2, 0x42, 0x82, 0x02, 0x02, 0xc2, 0x22, 0xd2, 0xd2, 0xd2, 0x22, 0xc2, 0x02, 0xc2, 0x22, 0xd2, 0xd2, 0xd2, 0x22, 0xc2, 0x02, 0xc2, 0x22, 0xd2, 0xd2, 0xd2, 0x22, 0x22, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0x22, 0xc2, 0x02, 0x02, 0x02, 0x02, 0x82, 0x42, 0xa2, 0xa2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xa2, 0xa2, 0x42, 0xa2, 0x52, 0xd2, 0xa2, 0x42, 0x82, 0x02, 0x82, 0x42, 0xa2, 0xd2, 0x52, 0x22, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0x22, 0x22, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xa2, 0x42, 0x82, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x81, 0x3e, 0xbf, 0x83, 0x3c, 0x7e, 0x4e, 0x36, 0x36, 0xb5, 0xb3, 0xb5, 0x0a, 0x39, 0x87, 0xb8, 0x3f, 0x27, 0x20, 0x27, 0x3f, 0xb8, 0x87, 0x3f, 0x00, 0xbf, 0xbf, 0x03, 0x3f, 0xb8, 0x87, 0xb8, 0x3f, 0x03, 0xbf, 0xbf, 0x00, 0x00, 0xbf, 0xbf, 0x18, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0xa5, 0x18, 0x00, 0x00, 0x00, 0x7e, 0x81, 0x3e, 0xbf, 0x81, 0x7e, 0x42, 0x42, 0x42, 0x7e, 0x81, 0xbf, 0x3e, 0x81, 0x7c, 0x63, 0x9f, 0x3c, 0xb3, 0x8c, 0xb3, 0x3c, 0x9f, 0x63, 0xfc, 0x00, 0xbf, 0xbf, 0x18, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0xe7, 0x00, 0xbf, 0xbf, 0x18, 0xda, 0x5a, 0xba, 0x3a, 0xad, 0x8f, 0x37, 0xc8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x41, 0x42, 0x44, 0x44, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x44, 0x44, 0x44, 0x4a, 0x4a, 0x44, 0x42, 0x41, 0x41, 0x41, 0x42, 0x44, 0x4a, 0x4a, 0x44, 0x4a, 0x4a, 0x44, 0x42, 0x44, 0x4a, 0x44, 0x42, 0x44, 0x4a, 0x4a, 0x44, 0x44, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x44, 0x43, 0x40, 0x40, 0x40, 0x40, 0x41, 0x42, 0x44, 0x44, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x44, 0x44, 0x42, 0x41, 0x40, 0x40, 0x43, 0x44, 0x4a, 0x4a, 0x4a, 0x44, 0x43, 0x40, 0x43, 0x44, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x44, 0x44, 0x4a, 0x4a, 0x44, 0x43, 0x40, 0x41, 0x42, 0x44, 0x4a, 0x4a, 0x4a, 0x45, 0x42, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
#else
1, 1, 1
#endif
};


const uint8_t PROGMEM StartOfDay[] = {
    90, 8, // 90x8px images

    // Frame 0 - Upper section
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓ Image  ░░░░▓▓▓▓ +Mask  ▓▓░▓····  Sprite 
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x90, 0xF8,  // ░▓▓░▓▓▓▓        ░░░░░▓▓▓        ░▓▓░▓···        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x90, 0xF8,  // ░▓▓░▓▓▓▓        ░░░░░▓▓▓        ░▓▓░▓···        
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x30, 0xF8,  // ▓▓░░▓▓▓▓        ░░░░░▓▓▓        ▓▓░░▓···        
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓        ░░░░▓▓▓▓        ▓▓░▓····        
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓        ░░░░▓▓▓▓        ▓▓░▓····        
    0xD0, 0xF8,  // ░░▓░▓▓▓▓        ░░░░░▓▓▓        ░░▓░▓···        
    0xD0, 0xF8,  // ░░▓░▓▓▓▓        ░░░░░▓▓▓        ░░▓░▓···        
    0x90, 0xFC,  // ░▓▓░▓▓▓▓        ░░░░░░▓▓        ░▓▓░▓▓··        
    0x0C, 0xFE,  // ▓▓▓▓░░▓▓        ░░░░░░░▓        ▓▓▓▓░░▓·        
    0x82, 0xFF,  // ░▓▓▓▓▓░▓        ░░░░░░░░        ░▓▓▓▓▓░▓        
    0xC2, 0xFF,  // ░░▓▓▓▓░▓        ░░░░░░░░        ░░▓▓▓▓░▓        
    0x0C, 0xFE,  // ▓▓▓▓░░▓▓        ░░░░░░░▓        ▓▓▓▓░░▓·        
    0x30, 0xFC,  // ▓▓░░▓▓▓▓        ░░░░░░▓▓        ▓▓░░▓▓··        
    0xC0, 0xF0,  // ░░▓▓▓▓▓▓        ░░░░▓▓▓▓        ░░▓▓····        
    0x00, 0xC0,  // ▓▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ▓▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x80, 0xC0,  // ░▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ░▓······        
    0x00, 0xC0,  // ▓▓▓▓▓▓▓▓        ░░▓▓▓▓▓▓        ▓▓······        
    0xC0, 0xF0,  // ░░▓▓▓▓▓▓        ░░░░▓▓▓▓        ░░▓▓····        
    0x30, 0xFC,  // ▓▓░░▓▓▓▓        ░░░░░░▓▓        ▓▓░░▓▓··        
    0x0C, 0xFE,  // ▓▓▓▓░░▓▓        ░░░░░░░▓        ▓▓▓▓░░▓·        
    0xC2, 0xFF,  // ░░▓▓▓▓░▓        ░░░░░░░░        ░░▓▓▓▓░▓        
    0x82, 0xFF,  // ░▓▓▓▓▓░▓        ░░░░░░░░        ░▓▓▓▓▓░▓        
    0x0C, 0xFE,  // ▓▓▓▓░░▓▓        ░░░░░░░▓        ▓▓▓▓░░▓·        
    0x90, 0xFC,  // ░▓▓░▓▓▓▓        ░░░░░░▓▓        ░▓▓░▓▓··        
    0xD0, 0xF8,  // ░░▓░▓▓▓▓        ░░░░░▓▓▓        ░░▓░▓···        
    0xD0, 0xF8,  // ░░▓░▓▓▓▓        ░░░░░▓▓▓        ░░▓░▓···        
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓        ░░░░▓▓▓▓        ▓▓░▓····        
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓        ░░░░▓▓▓▓        ▓▓░▓····        
    0x30, 0xF8,  // ▓▓░░▓▓▓▓        ░░░░░▓▓▓        ▓▓░░▓···        
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x90, 0xF8,  // ░▓▓░▓▓▓▓        ░░░░░▓▓▓        ░▓▓░▓···        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x28, 0xFC,  // ▓▓░▓░▓▓▓        ░░░░░░▓▓        ▓▓░▓░▓··        
    0x90, 0xF8,  // ░▓▓░▓▓▓▓        ░░░░░▓▓▓        ░▓▓░▓···        
    0x10, 0xF8,  // ▓▓▓░▓▓▓▓        ░░░░░▓▓▓        ▓▓▓░▓···        
    0x20, 0xF0,  // ▓▓░▓▓▓▓▓        ░░░░▓▓▓▓        ▓▓░▓····        

    // Frame 1 - Lower section
    0x00, 0x03,  // ▓▓▓▓▓▓▓▓ Image  ▓▓▓▓▓▓░░ +Mask  ······▓▓ Sprite 
    0x03, 0x07,  // ▓▓▓▓▓▓░░        ▓▓▓▓▓░░░        ·····▓░░        
    0x04, 0x0F,  // ▓▓▓▓▓░▓▓        ▓▓▓▓░░░░        ····▓░▓▓        
    0x04, 0x0F,  // ▓▓▓▓▓░▓▓        ▓▓▓▓░░░░        ····▓░▓▓        
    0x02, 0x07,  // ▓▓▓▓▓▓░▓        ▓▓▓▓▓░░░        ·····▓░▓        
    0x02, 0x07,  // ▓▓▓▓▓▓░▓        ▓▓▓▓▓░░░        ·····▓░▓        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x0F,  // ▓▓▓▓▓▓▓░        ▓▓▓▓░░░░        ····▓▓▓░        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x01, 0x1F,  // ▓▓▓▓▓▓▓░        ▓▓▓░░░░░        ···▓▓▓▓░        
    0x0E, 0x3F,  // ▓▓▓▓░░░▓        ▓▓░░░░░░        ··▓▓░░░▓        
    0x30, 0xFF,  // ▓▓░░▓▓▓▓        ░░░░░░░░        ▓▓░░▓▓▓▓        
    0xC1, 0xFF,  // ░░▓▓▓▓▓░        ░░░░░░░░        ░░▓▓▓▓▓░        
    0x0E, 0xFF,  // ▓▓▓▓░░░▓        ░░░░░░░░        ▓▓▓▓░░░▓        
    0x30, 0xFF,  // ▓▓░░▓▓▓▓        ░░░░░░░░        ▓▓░░▓▓▓▓        
    0xC8, 0xFF,  // ░░▓▓░▓▓▓        ░░░░░░░░        ░░▓▓░▓▓▓        
    0x08, 0xDF,  // ▓▓▓▓░▓▓▓        ░░▓░░░░░        ▓▓·▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x08, 0xDF,  // ▓▓▓▓░▓▓▓        ░░▓░░░░░        ▓▓·▓░▓▓▓        
    0xC8, 0xFF,  // ░░▓▓░▓▓▓        ░░░░░░░░        ░░▓▓░▓▓▓        
    0x30, 0xFF,  // ▓▓░░▓▓▓▓        ░░░░░░░░        ▓▓░░▓▓▓▓        
    0x0E, 0xFF,  // ▓▓▓▓░░░▓        ░░░░░░░░        ▓▓▓▓░░░▓        
    0xC1, 0xFF,  // ░░▓▓▓▓▓░        ░░░░░░░░        ░░▓▓▓▓▓░        
    0x30, 0xFF,  // ▓▓░░▓▓▓▓        ░░░░░░░░        ▓▓░░▓▓▓▓        
    0x0E, 0x3F,  // ▓▓▓▓░░░▓        ▓▓░░░░░░        ··▓▓░░░▓        
    0x01, 0x1F,  // ▓▓▓▓▓▓▓░        ▓▓▓░░░░░        ···▓▓▓▓░        
    0x08, 0x1F,  // ▓▓▓▓░▓▓▓        ▓▓▓░░░░░        ···▓░▓▓▓        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x09, 0x1F,  // ▓▓▓▓░▓▓░        ▓▓▓░░░░░        ···▓░▓▓░        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x0A, 0x1F,  // ▓▓▓▓░▓░▓        ▓▓▓░░░░░        ···▓░▓░▓        
    0x01, 0x0F,  // ▓▓▓▓▓▓▓░        ▓▓▓▓░░░░        ····▓▓▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x02, 0x07,  // ▓▓▓▓▓▓░▓        ▓▓▓▓▓░░░        ·····▓░▓        
    0x02, 0x07,  // ▓▓▓▓▓▓░▓        ▓▓▓▓▓░░░        ·····▓░▓        
    0x04, 0x0F,  // ▓▓▓▓▓░▓▓        ▓▓▓▓░░░░        ····▓░▓▓        
    0x04, 0x0F,  // ▓▓▓▓▓░▓▓        ▓▓▓▓░░░░        ····▓░▓▓        
    0x03, 0x07,  // ▓▓▓▓▓▓░░        ▓▓▓▓▓░░░        ·····▓░░        
    0x00, 0x03   // ▓▓▓▓▓▓▓▓        ▓▓▓▓▓▓░░        ······▓▓        
};

const uint8_t PROGMEM StartOfDay_Mid[] = {
    92, 8, // 92x8px image

    0x1C,  // ▓▓▓░░░▓▓
    0xE3,  // ░░░▓▓▓░░
    0x11,  // ▓▓▓░▓▓▓░
    0x31,  // ▓▓░░▓▓▓░
    0x3A,  // ▓▓░░░▓░▓
    0xD0,  // ░░▓░▓▓▓▓
    0xC3,  // ░░▓▓▓▓░░
    0x23,  // ▓▓░▓▓▓░░
    0x23,  // ▓▓░▓▓▓░░
    0x32,  // ▓▓░░▓▓░▓
    0x30,  // ▓▓░░▓▓▓▓
    0x46,  // ▓░▓▓▓░░▓
    0x06,  // ▓▓▓▓▓░░▓
    0xCE,  // ░░▓▓░░░▓
    0xC0,  // ░░▓▓▓▓▓▓
    0x89,  // ░▓▓▓░▓▓░
    0x38,  // ▓▓░░░▓▓▓
    0x1C,  // ▓▓▓░░░▓▓
    0x19,  // ▓▓▓░░▓▓░
    0x60,  // ▓░░▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0xB0,  // ░▓░░▓▓▓▓
    0x81,  // ░▓▓▓▓▓▓░
    0x0E,  // ▓▓▓▓░░░▓
    0x30,  // ▓▓░░▓▓▓▓
    0xC0,  // ░░▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0xC0,  // ░░▓▓▓▓▓▓
    0x30,  // ▓▓░░▓▓▓▓
    0x0E,  // ▓▓▓▓░░░▓
    0x81,  // ░▓▓▓▓▓▓░
    0xB0,  // ░▓░░▓▓▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x60,  // ▓░░▓▓▓▓▓
    0x19,  // ▓▓▓░░▓▓░
    0x1C,  // ▓▓▓░░░▓▓
    0x38,  // ▓▓░░░▓▓▓
    0x89,  // ░▓▓▓░▓▓░
    0xC0,  // ░░▓▓▓▓▓▓
    0xCE,  // ░░▓▓░░░▓
    0x06,  // ▓▓▓▓▓░░▓
    0x46,  // ▓░▓▓▓░░▓
    0x30,  // ▓▓░░▓▓▓▓
    0x32,  // ▓▓░░▓▓░▓
    0x23,  // ▓▓░▓▓▓░░
    0x23,  // ▓▓░▓▓▓░░
    0xC3,  // ░░▓▓▓▓░░
    0xD0,  // ░░▓░▓▓▓▓
    0x3A,  // ▓▓░░░▓░▓
    0x31,  // ▓▓░░▓▓▓░
    0x11,  // ▓▓▓░▓▓▓░
    0xE3,  // ░░░▓▓▓░░
    0x1C   // ▓▓▓░░░▓▓
};

const uint8_t PROGMEM StartOfDay_Side[] = {
    5, 8, // 5x8px image

    0x00, 0x1C,  // ▓▓▓▓▓▓▓▓ Image  ▓▓▓░░░▓▓ +Mask  ···▓▓▓·· Sprite 
    0x1C, 0xFE,  // ▓▓▓░░░▓▓        ░░░░░░░▓        ▓▓▓░░░▓·        
    0xE2, 0xFF,  // ░░░▓▓▓░▓        ░░░░░░░░        ░░░▓▓▓░▓        
    0x1C, 0xFE,  // ▓▓▓░░░▓▓        ░░░░░░░▓        ▓▓▓░░░▓·        
    0x00, 0x1C   // ▓▓▓▓▓▓▓▓        ▓▓▓░░░▓▓        ···▓▓▓··        
};

const uint8_t PROGMEM StartOfDay_Base[] = {
    4, 8, // 4x2px image

    0x00, 0x01,  // ▓▓▓▓▓▓▓▓        ▓▓▓▓▓▓▓░        ·······▓        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x01, 0x03,  // ▓▓▓▓▓▓▓░        ▓▓▓▓▓▓░░        ······▓░        
    0x00, 0x01   // ▓▓▓▓▓▓▓▓        ▓▓▓▓▓▓▓░        ·······▓        
};

const uint8_t PROGMEM Day[] = {
    14, 8, // 14x7px image
    
    0x3F,  // ▓▓░░░░░░
    0x21,  // ▓▓░▓▓▓▓░
    0x21,  // ▓▓░▓▓▓▓░
    0x1E,  // ▓▓▓░░░░▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x10,  // ▓▓▓░▓▓▓▓
    0x2A,  // ▓▓░▓░▓░▓
    0x2A,  // ▓▓░▓░▓░▓
    0x3C,  // ▓▓░░░░▓▓
    0x00,  // ▓▓▓▓▓▓▓▓
    0x4E,  // ▓░▓▓░░░▓
    0x50,  // ▓░▓░▓▓▓▓
    0x50,  // ▓░▓░▓▓▓▓
    0x3E   // ▓▓░░░░░▓
};

const uint8_t PROGMEM Lights[] = {
19, 26,
0x70, 0x88, 0x28, 0x6e, 0xe2, 0x1a, 0xfb, 0x29, 0x55, 0x15, 0x15, 0x29, 0xfa, 0x1a, 0xe2, 0x6c, 0x28, 0x88, 0x70, 
0x1c, 0xa2, 0xcb, 0x9a, 0x38, 0xc7, 0xff, 0x8a, 0x14, 0x04, 0x04, 0x8a, 0xff, 0xc7, 0x38, 0x9a, 0xcb, 0xa2, 0x1c, 
0x07, 0x08, 0x12, 0xe6, 0x0e, 0x71, 0xff, 0xe2, 0xc9, 0xc1, 0xc1, 0xe2, 0xff, 0x71, 0x0e, 0xe6, 0x12, 0x08, 0x07, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM Lights_Mask[] = {
0x70, 0xf8, 0xf8, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0x70, 
0x1c, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0x1c, 
0x07, 0x0f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x07, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
};
