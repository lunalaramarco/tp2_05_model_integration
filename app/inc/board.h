/*
 * Copyright (c) 2023 Juan Manuel Cruz <jcruz@fi.uba.ar>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * @file   : board.h
 * @date   : Set 26, 2023
 * @author : Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>
 * @version	v1.0.0
 */

#ifndef BOARD_INC_BOARD_H_
#define BOARD_INC_BOARD_H_

/********************** CPP guard ********************************************/
#ifdef __cplusplus
extern "C" {
#endif

/********************** inclusions *******************************************/

/********************** macros ***********************************************/
#define NUCLEO_F103RC		(0)
#define NUCLEO_F401RE		(1)
#define NUCLEO_F446RE		(2)
#define NUCLEO_F429ZI		(3)
#define NUCLEO_F439ZI		(4)
#define NUCLEO_F413ZH		(5)
#define STM32F429I_DISCO1	(6)

#define BOARD (NUCLEO_F103RC)

/* STM32 Nucleo Boards - 64 Pins */
#if ((BOARD == NUCLEO_F103RC) || (BOARD == NUCLEO_F401RE) || (BOARD == NUCLEO_F446RE))

#define BTN_A_PIN		B1_Pin
#define BTN_A_PORT		B1_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_RESET
#define BTN_A_HOVER		GPIO_PIN_SET

#define BTN_D2_PIN		D2_Pin
#define BTN_D2_PORT		GPIOA
#define BTN_D2_PRESSED	GPIO_PIN_RESET
#define BTN_D2_HOVER	GPIO_PIN_SET

#define BTN_D7_PIN		D7_Pin
#define BTN_D7_PORT		GPIOA
#define BTN_D7_PRESSED	GPIO_PIN_RESET
#define BTN_D7_HOVER	GPIO_PIN_SET

#define BTN_D8_PIN		D8_Pin
#define BTN_D8_PORT		GPIOA
#define BTN_D8_PRESSED	GPIO_PIN_RESET
#define BTN_D8_HOVER	GPIO_PIN_SET

#define BTN_D4_PIN		D4_Pin
#define BTN_D4_PORT		GPIOB
#define BTN_D4_PRESSED	GPIO_PIN_RESET
#define BTN_D4_HOVER	GPIO_PIN_SET

#define BTN_D5_PIN		D5_Pin
#define BTN_D5_PORT		GPIOB
#define BTN_D5_PRESSED	GPIO_PIN_RESET
#define BTN_D5_HOVER	GPIO_PIN_SET

#define BTN_D6_PIN		D6_Pin
#define BTN_D6_PORT		GPIOB
#define BTN_D6_PRESSED	GPIO_PIN_RESET
#define BTN_D6_HOVER	GPIO_PIN_SET

#define LED_A_PIN		LD2_Pin
#define LED_A_PORT		LD2_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#define LED_D9_PIN		D9_Pin
#define LED_D9_PORT		GPIOC
#define LED_D9_ON		GPIO_PIN_RESET
#define LED_D9_OFF		GPIO_PIN_SET

#define LED_D10_PIN		D10_Pin
#define LED_D10_PORT	GPIOB
#define LED_D10_ON		GPIO_PIN_RESET
#define LED_D10_OFF		GPIO_PIN_SET

#define LED_D11_PIN		D11_Pin
#define LED_D11_PORT	GPIOA
#define LED_D11_ON		GPIO_PIN_RESET
#define LED_D11_OFF		GPIO_PIN_SET

#define LED_D12_PIN		D12_Pin
#define LED_D12_PORT	GPIOA
#define LED_D12_ON		GPIO_PIN_RESET
#define LED_D12_OFF		GPIO_PIN_SET

#endif/* STM32 Nucleo Boards - 144 Pins */

#if ((BOARD == NUCLEO_F429ZI) || (BOARD == NUCLEO_F439ZI) || (BOARD == NUCLEO_F413ZH))

#define BTN_A_PIN		USER_Btn_Pin
#define BTN_A_PORT		USER_Btn_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_SET
#define BTN_A_HOVER		GPIO_PIN_RESET

#define LED_A_PIN		LD1_Pin
#define LED_A_PORT		LD1_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#endif

/* STM32 Discovery Kits */
#if (BOARD == STM32F429I_DISCO1)

#define BTN_A_PIN		B1_Pin
#define BTN_A_PORT		B1_GPIO_Port
#define BTN_A_PRESSED	GPIO_PIN_SET
#define BTN_A_HOVER		GPIO_PIN_RESET

#define LED_A_PIN		LD3_Pin
#define LED_A_PORT		LD3_GPIO_Port
#define LED_A_ON		GPIO_PIN_SET
#define LED_A_OFF		GPIO_PIN_RESET

#endif

/********************** typedef **********************************************/

/********************** external data declaration ****************************/

/********************** external functions declaration ***********************/

/********************** End of CPP guard *************************************/
#ifdef __cplusplus
}
#endif

#endif /* BOARD_INC_BOARD_H_ */

/********************** end of file ******************************************/
