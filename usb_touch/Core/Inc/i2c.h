#ifndef __I2C_H__
#define __I2C_H__

extern void initI2C();
extern uint8_t readI2C(uint8_t id,uint8_t addr,uint8_t *databuf,uint16_t number);
extern uint8_t writeI2C(uint8_t id,uint8_t addr,uint8_t *databuf,uint16_t number);
#endif
