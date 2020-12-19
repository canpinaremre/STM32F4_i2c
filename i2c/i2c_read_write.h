/*
 * @Author: canpinaremre
 * Purpose: To read and write 8bits on I2C by using HAL Library
 * Language:  C
 */


#include "stm32f4xx_hal.h"
#include "main.h"

#define I2C_TRANSMIT_TIMEOUT 10
#define I2C_RECEIVE_TIMEOUT 10

uint8_t buffer[9];

uint8_t write8(I2C_HandleTypeDef *huart,uint8_t device,uint8_t reg,uint8_t val);
uint8_t read8(I2C_HandleTypeDef *huart,uint8_t device,uint8_t reg);
