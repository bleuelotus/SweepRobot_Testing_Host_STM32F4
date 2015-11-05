#ifndef __BSP_DRIVER_TFTLCD_H
#define __BSP_DRIVER_TFTLCD_H

#include "stm32f4xx_hal.h"
#include <stdlib.h>
#include "font.h"
#include "gpio.h"

typedef struct{
  u16   width;
  u16   height;
  u16   id;
  u8    dir;
  u16	wramcmd;
  u16   setxcmd;
  u16   setycmd;
}TFTLcdPara_TypeDef_t;

extern TFTLcdPara_TypeDef_t tftLcdPara;

extern u16 POINT_COLOR;
extern u16 BACK_COLOR;	    

typedef struct
{
  vu16 LCD_REG;
  vu16 LCD_RAM;
}Lcd_TypeDef_t;



#endif