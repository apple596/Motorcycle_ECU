/*
 * Engine_Speed_Output.c
 *
 *  Created on: 2023年4月4日
 *      Author: mzy2364
 */



/*******************************************************************************
* include files                                                 
*******************************************************************************/
#include "Engine_Speed_Output.h"
#include "ftm.h"
#include "gpio.h"
/*******************************************************************************
* Defines                                                                
*******************************************************************************/

/*******************************************************************************
* Macros                                                                
*******************************************************************************/

/*******************************************************************************
* Global Constant definition                         
*******************************************************************************/

/*******************************************************************************
* Local Constant definition                         
*******************************************************************************/

/*******************************************************************************
* Global Variables definition                         
*******************************************************************************/

/*******************************************************************************
* Local Variables definition                         
*******************************************************************************/

/*******************************************************************************
* Local Functions prototypes                         
*******************************************************************************/
static void ftm2_isr(void);

/*******************************************************************************
*  Global Functions Body                                   
*******************************************************************************/

/**
  * @brief 转速信号输出初始化
  * @param void
  * @retval	void
  * @note
  */
void engine_speed_output_init(void)
{
	CONFIG_PIN_AS_GPIO(ENG_SPD_OUT_PORT,ENG_SPD_OUT_PIN,OUTPUT);
	OUTPUT_SET(ENG_SPD_OUT_PORT,ENG_SPD_OUT_PIN);
}

/**
  * @brief 转速信号输出脉冲开始
  * @param void
  * @retval	void
  * @note
  */
void engine_speed_output_pulse_start(void)
{
	OUTPUT_CLEAR(ENG_SPD_OUT_PORT,ENG_SPD_OUT_PIN);
}

/**
  * @brief 转速信号输出脉冲结束
  * @param void
  * @retval	void
  * @note
  */
void engine_speed_output_pulse_end(void)
{
	OUTPUT_SET(ENG_SPD_OUT_PORT,ENG_SPD_OUT_PIN);
}


