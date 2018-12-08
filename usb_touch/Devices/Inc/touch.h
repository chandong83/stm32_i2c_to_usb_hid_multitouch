/*
 * touch.h
 *
 *  Created on: 2018. 12. 7.
 *      Author: chand
 */

#ifndef INC_TOUCH_H_
#define INC_TOUCH_H_

extern void initTouch();
extern void toucuProc();
extern void input_sync();
extern uint8_t *getTouchPtr();
extern uint8_t *getTouchQualityKeyPtr();
#endif /* INC_TOUCH_H_ */
