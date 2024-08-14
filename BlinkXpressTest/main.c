 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
? [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include <xc.h>

/*
    Main application that tests the MPLAB XPRESS Evaluation Board with a simple blinky example. 
    PIC16F18855
*/

void delay_ms(unsigned int milliseconds);


int main(void)
{
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 


    while(1)
    {
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RA2_SetLow();
        IO_RA3_SetLow();
        delay_ms(100); 

        // Turn on RA1 and turn off others
        IO_RA0_SetLow();
        IO_RA1_SetHigh();
        IO_RA2_SetLow();
        IO_RA3_SetLow();
        delay_ms(100);

        // Turn on RA2 and turn off others
        IO_RA0_SetLow();
        IO_RA1_SetLow();
        IO_RA2_SetHigh();
        IO_RA3_SetLow();
        delay_ms(100);

        // Turn on RA3 and turn off others
        IO_RA0_SetLow();
        IO_RA1_SetLow();
        IO_RA2_SetLow();
        IO_RA3_SetHigh();
        delay_ms(100);

        // Turn on RA2 and turn off others (reverse direction)
        IO_RA0_SetLow();
        IO_RA1_SetLow();
        IO_RA2_SetHigh();
        IO_RA3_SetLow();
        delay_ms(100);

        // Turn on RA1 and turn off others (reverse direction)
        IO_RA0_SetLow();
        IO_RA1_SetHigh();
        IO_RA2_SetLow();
        IO_RA3_SetLow();
        delay_ms(100); 
    }  
 }   
// Simple delay function
void delay_ms(unsigned int milliseconds) {
    while (milliseconds--) {
        __delay_ms(1); 
    } 
}