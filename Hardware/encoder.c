#include "encoder.h"

float Get_Encoder_countA = 0;
float Get_Encoder_countB = 0;

/*
		E1A E1B: Get_Encoder_countA
		Pin: A09 A08
		E2A E2B: Get_Encoder_countB  
		Pin: B07 B08
*/

void encoder_Init(void)
{
	NVIC_ClearPendingIRQ(Encoder_left_INT_IRQN);
	NVIC_ClearPendingIRQ(Encoder_right_INT_IRQN);
	NVIC_EnableIRQ(Encoder_left_INT_IRQN);
	NVIC_EnableIRQ(Encoder_right_INT_IRQN);
}

/*******************************************************
函数功能：外部中断模拟编码器信号
入口函数：无
返回  值：无
***********************************************************/

void GROUP1_IRQHandler(void)
{
	uint32_t gpioA = DL_GPIO_getEnabledInterruptStatus(GPIOA, Encoder_left_E1A_PIN | Encoder_left_E1B_PIN );
	uint32_t gpioB = DL_GPIO_getEnabledInterruptStatus(GPIOB, Encoder_right_E2A_PIN | Encoder_right_E2B_PIN);

	// A缂栫爜鍣�
	if ((gpioA & Encoder_left_E1A_PIN) == Encoder_left_E1A_PIN)
	{
		if (!DL_GPIO_readPins(Encoder_left_PORT, Encoder_left_E1B_PIN))
		{
				Get_Encoder_countA--;
		}
		else
		{
				Get_Encoder_countA++;
		}
		DL_GPIO_clearInterruptStatus(Encoder_left_PORT, Encoder_left_E1A_PIN);
	}
	
	else if ((gpioA & Encoder_left_E1B_PIN) == Encoder_left_E1B_PIN)
	{
		if (!DL_GPIO_readPins(Encoder_left_PORT, Encoder_left_E1A_PIN))
		{
				Get_Encoder_countA++;
		}
		else
		{
				Get_Encoder_countA--;
		}
		DL_GPIO_clearInterruptStatus(Encoder_left_PORT,Encoder_left_E1B_PIN);
	}
	
	// B缂栫爜鍣�
	if ((gpioB & Encoder_right_E2A_PIN) == Encoder_right_E2A_PIN)
	{
		if (!DL_GPIO_readPins(Encoder_right_PORT, Encoder_right_E2B_PIN))
		{
				Get_Encoder_countB--;
		}
		else
		{
				Get_Encoder_countB++;
		}
		DL_GPIO_clearInterruptStatus(Encoder_right_PORT, Encoder_right_E2A_PIN);
	}
	else if ((gpioB & Encoder_right_E2B_PIN) == Encoder_right_E2B_PIN)
	{
		if (!DL_GPIO_readPins(Encoder_right_PORT, Encoder_right_E2A_PIN))
		{
				Get_Encoder_countB++;
		}
		else
		{
				Get_Encoder_countB--;
		}
		DL_GPIO_clearInterruptStatus(Encoder_right_PORT, Encoder_right_E2B_PIN);
	}
}



