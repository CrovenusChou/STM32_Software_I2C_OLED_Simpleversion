#ifndef __MY_OLED_H
#define __MY_OLED_H

#include "main.h"

/*========根据实际引脚修改========*/
#define OLED_SCL_PORT    GPIOB
#define OLED_SCL_PIN       GPIO_PIN_3
#define OLED_SDA_PORT   GPIOB
#define OLED_SDA_PIN       GPIO_PIN_4



/*========OLED I2C 设备地址========*/
#define OLED_I2C_ADDRESS     0x78

/*========函数申明========*/
void OLED_Init(void);
void OLED_Clear(void);
void OLED_ShowChar(uint8_t x , uin8_t page ,char ch);
void OLED_ShowString(uint8_t x , uint8_t page , char *str);

#endif / *__MY_OLED_H*/
