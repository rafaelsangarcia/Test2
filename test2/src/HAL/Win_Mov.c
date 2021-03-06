/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: version $
 * $Author: Rafael Sanchez $
 * $Author: Rodrigo Mortera $
 * $Date: 24/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    In this Win_Mov.c file, there are the function Timer, validation_10ms,
		validation_500ms, Manual_up and Manual_down.
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  Author         	   |        Version     | Descritpion											*/
/*----------------------------------------------------------------------------*/
/*    Rafael Sanchez   |     e22ee1c (v2)   |   Create the functions          */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */

#include "HAL/Win_Mov.h"
#include "MAL/GPIO_init.h"

/*============================================================================*/
/* Constants and types  */
/*============================================================================*/
/* Variables */
//int lpit0_ch1_flag_counter = 0;
//int lpit0_ch0_flag_counter = 0;
//int switch_flag = -1;
/*============================================================================*/
/* Private functions prototypes */
//void primary_function();
/*============================================================================*/
/* Inline functions */
/*============================================================================*/
/* Private functions */
// void primary_function(){
// 	WDOG_disable();
// 	PORT_init();
// 	SOSC_init_8MHz(); /* Initialize system oscillator for 8 MHz xtal */
// 	SPLL_init_160MHz(); /* Initialize sysclk to 160 MHz with 8 MHz SOSC */
// 	NormalRUNmode_80MHz();
// 	LPIT0_init();
// }
/*============================================================================*/

/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
// uint8 algreqg_olp_CheckOLPAllow(uint8 ReqestedAction_u8,       /**< the requested action to be performed (e.g. unlock) */
//                                 uint16 RequestedComponent_u16  /**< the mask of the doors which motors to be activated (e.g. front doors) */
//                                 )
// {
// 	return 0;
// }


/* Exported functions */
// void timer () {
// 	while (0 == (LPIT0->MSR & LPIT_MSR_TIF1_MASK)) {}
// 	(lpit0_ch1_flag_counter)++;
// 	LPIT0->MSR |= LPIT_MSR_TIF1_MASK;
// }

// int validation_10ms() {
// 	if (lpit0_ch1_flag_counter >= 10) {
// 		return 1;
// 	}
// 	else {
// 		return 0;
// 	}
// }

// int validation_500ms() {
// 	if (lpit0_ch1_flag_counter >= 500) {
// 		return 1;
// 	}
// 	else {
// 		return 0;
// 	}
// }

// void Manual_up() {
// 	PTD->PCOR |= 1<< BlueLed;//Blue led on
// 	PTD->PSOR |= 1<< GreenLed; /* Green Led off */
// 	if (switch_flag<9) {
// 		(switch_flag)++;
// 		}
// 	switch (switch_flag) {
// 		case 0:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTC->PSOR |= 1<<LedBar_1;
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 1:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PSOR |= 1<<LedBar_2; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 2:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PSOR |= 1<<LedBar_3; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 3:
//
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PSOR |= 1<<LedBar_4; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 4:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PSOR |= 1<<LedBar_5; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 5:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTC->PSOR |= 1<<LedBar_6; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 6:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTC->PSOR |= 1<<LedBar_7; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 7:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTE->PSOR |= 1<<LedBar_8; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 8:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTE->PSOR |= 1<<LedBar_9; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 9:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTD->PSOR |= 1<<0; /* Toggle output on port D0 (blue LED) */
// 			PTE->PSOR |= 1<<LedBar_10; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
// 		}
// }
//
// void Manual_down() {
// 	PTD->PSOR |= 1<<BlueLed;//Blue led off
// 	PTD->PCOR |= 1<<GreenLed; /*Green Led On*/
// 	switch (switch_flag) {
// 		case 9:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTE->PCOR |= 1<<LedBar_10; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 8:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTE->PCOR |= 1<<LedBar_9; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 7:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTE->PCOR |= 1<<LedBar_8; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 6:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTC->PCOR |= 1<<LedBar_7; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 5:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTC->PCOR |= 1<<LedBar_6; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 4:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PCOR |= 1<<LedBar_5; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 3:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PCOR |= 1<<LedBar_4; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 2:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PCOR |= 1<<LedBar_3; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 1:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			PTB->PCOR |= 1<<LedBar_2; /* Toggle output on port D0 (blue LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			break;
//
// 		case 0:
// 			while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
// 			lpit0_ch0_flag_counter++; /* Increment LPIT0 timeout counter */
// 			//PTD->PSOR |= 1<<16; /* Toggle output on port D16 (green LED) */
// 			PTC->PCOR |= 1<<LedBar_1; /* Toggle output on port D16 (green LED) */
// 			LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
// 			switch_flag=-1;
// 			break;
//
// 		default:
// 			break;
// 	}
// 	if (switch_flag>0){
// 		switch_flag--;
// 	}
// }

// void clear_GPIO() {
// 	PTD->PSOR |= 1<<BlueLed; /*  turning off BLUE LED */
// 	PTD->PSOR |= 1<<RedLed; /* turning off RED LED */
// 	PTD->PSOR |= 1<<GreenLed; /* turning off GREEN LED */
// 	PTC->PCOR |= 1<<LedBar_1;/*Turning off the Port 7*/
// 	PTC->PCOR |= 1<<LedBar_2;
// 	PTC->PCOR |= 1<<LedBar_3;
// 	PTB->PCOR |= 1<<LedBar_4;
// 	PTB->PCOR |= 1<<LedBar_5;
// 	PTB->PCOR |= 1<<LedBar_6;
// 	PTB->PCOR |= 1<<LedBar_7;
// 	PTE->PCOR |= 1<<LedBar_8;
// 	PTE->PCOR |= 1<<LedBar_9;
// 	PTE->PCOR |= 1<<LedBar_10;
// }


// void init_primary_function(){
// 	primary_function();
// }
void Toggle_BlueLed(int status){
	if (status == 1) {
		PTD->PCOR |= 1<< BlueLed;
	}
	else {
		PTD->PSOR |= 1<< BlueLed;
	}
}

//test
void Toggle_GreenLed(int status){
	if (status == 1) {
		PTD->PCOR |= 1<< GreenLed;
	}
	else {
		PTD->PSOR |= 1<< GreenLed;
	}
}
void Toggle_RedLed(int status){
	if (status == 1) {
		PTD->PCOR |= 1<< RedLed;
	}
	else {
		PTD->PSOR |= 1<< RedLed;
	}
}
void Toggle_LedBar_1(int status){
	if (status == 1){
		PTC->PSOR |= 1<<LedBar_1;
	}
	else {
		PTC->PCOR |= 1<<LedBar_1;
	}
}
void Toggle_LedBar_2(int status){
	if (status == 1){
		PTB->PSOR |= 1<<LedBar_2;
	}
	else {
		PTB->PCOR |= 1<<LedBar_2;
	}
}
void Toggle_LedBar_3(int status){
	if (status == 1){
		PTB->PSOR |= 1<<LedBar_3;
	}
	else {
		PTB->PCOR |= 1<<LedBar_3;
	}
}
void Toggle_LedBar_4(int status){
	if (status == 1){
		PTB->PSOR |= 1<<LedBar_4;
	}
	else {
		PTB->PCOR |= 1<<LedBar_4;
	}
}
void Toggle_LedBar_5(int status){
	if (status == 1){
		PTB->PSOR |= 1<<LedBar_5;
	}
	else {
		PTB->PCOR |= 1<<LedBar_5;
	}
}
void Toggle_LedBar_6(int status){
	if (status == 1){
		PTC->PSOR |= 1<<LedBar_6;
	}
	else {
		PTC->PCOR |= 1<<LedBar_6;
	}
}
void Toggle_LedBar_7(int status){
	if (status == 1){
		PTC->PSOR |= 1<<LedBar_7;
	}
	else {
		PTC->PCOR |= 1<<LedBar_7;
	}
}
void Toggle_LedBar_8(int status){
	if (status == 1){
		PTE->PSOR |= 1<<LedBar_8;
	}
	else {
		PTE->PCOR |= 1<<LedBar_8;
	}
}
void Toggle_LedBar_9(int status){
	if (status == 1){
		PTE->PSOR |= 1<<LedBar_9;
	}
	else {
		PTE->PCOR |= 1<<LedBar_9;
	}
}
void Toggle_LedBar_10(int status){
	if (status == 1){
		PTE->PSOR |= 1<<LedBar_10;
	}
	else {
		PTE->PCOR |= 1<<LedBar_10;
	}
}
int Validate_UpButton(){
	if(PTC->PDIR & (1<<UpButton)){
			return 1;
		}
		else{
			return 0;
		}
}
int Validate_DownButton(){
	if(PTC->PDIR & (1<<DownButton)){
			return 1;
		}
		else{
			return 0;
		}
}

int Validate_Antipinch(){
	if(PTE->PDIR & (1<<Antipinch)){
				return 1;
			}
			else{
				return 0;
			}
}
/*============================================================================*/
 /* Notice: the file ends with a blank new line to avoid compiler warnings */
