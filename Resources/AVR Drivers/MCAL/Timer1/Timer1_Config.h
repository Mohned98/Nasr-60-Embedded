
#ifndef MCAL_TIMER1_TIMER1_CONFIG_H_
#define MCAL_TIMER1_TIMER1_CONFIG_H_

#include "Timer1_Private.h"

/*
 * choose from:
 *   TIMER1_PRESCALER_1
 *   TIMER1_PRESCALER_8
 *   TIMER1_PRESCALER_64
 *   TIMER1_PRESCALER_256
 *   TIMER1_PRESCALER_1024
 *   TIMER1_PRESCALER_EXTCLK_FALLEDGE
 *   TIMER1_PRESCALER_EXTCLK_RAISEDGE
 */
#define TIMER_1_PRESCALER     TIMER1_PRESCALER_64

/*
 *   choose from :
 *   TIMER1_NORMAL_MODE
 *   TIMER1_CTC_MODE
 *   TIMER1_FASTPWM_MODE
 */
#define TIMER_1_MODE  TIMER1_FASTPWM_MODE

/*
 * choose from :
 *  Non PWM:
 *   TIMER1_OC1A_DISCONNECTED
 *   TIMER1_OC1A_TOGGLE
 *   TIMER1_OC1A_CLEAR
 *   TIMER1_OC1A_SET
 *  PWM:
 *   TIMER1_OC1A_PWM_NON_INVERTING
 *   TIMER1_OC1A_PWM_INVERTING
 */
#define TIMER_1_OC1A_MODE  TIMER1_OC1A_PWM_NON_INVERTING

/*
 * choose from :
 *  Non PWM:
 *   TIMER1_OC1B_DISCONNECTED
 *   TIMER1_OC1B_TOGGLE
 *   TIMER1_OC1B_CLEAR
 *   TIMER1_OC1B_SET
 *  PWM:
 *   TIMER1_OC1B_PWM_NON_INVERTING
 *   TIMER1_OC1B_PWM_INVERTING
 */
#define TIMER_1_OC1B_MODE  TIMER1_OC1B_PWM_NON_INVERTING

#define TIMER_1_OC1B_FREQ 50

#endif /* MCAL_TIMER1_TIMER1_CONFIG_H_ */
