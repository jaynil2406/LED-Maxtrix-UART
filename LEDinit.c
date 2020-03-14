#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "LEDinit.h"
void initHw()
{
    // Configure HW to work with 16 MHz XTAL, PLL enabled, sysdivider of 5, creating system clock of 40 MHz
    SYSCTL_RCC_R = SYSCTL_RCC_XTAL_16MHZ | SYSCTL_RCC_OSCSRC_MAIN | SYSCTL_RCC_USESYSDIV | (4 << SYSCTL_RCC_SYSDIV_S);

    // Set GPIO ports to use APB (not needed since default configuration -- for clarity)
    SYSCTL_GPIOHBCTL_R = 0;

    // Enable GPIO port F peripherals
    SYSCTL_RCGC2_R |= SYSCTL_RCGC2_GPIOF | SYSCTL_RCGC2_GPIOE | SYSCTL_RCGC2_GPIOA |SYSCTL_RCGC2_GPIOC |SYSCTL_RCGC2_GPIOD|SYSCTL_RCGC2_GPIOB ;

    // Configure LED and pushbutton pins
    GPIO_PORTF_LOCK_R = 0x4C4F434B;
    GPIO_PORTF_CR_R |=  PF0_MASK ;
    GPIO_PORTF_DIR_R = PF0_MASK |PF1_MASK|PF2_MASK |PF3_MASK|PF4_MASK ;// bits 1 and 3 are outputs, other pins are inputs
    GPIO_PORTF_DR2R_R =  PF0_MASK |PF1_MASK|PF2_MASK |PF3_MASK|PF4_MASK  ;// set drive strength to 2mA (not needed since default configuration -- for clarity)
    GPIO_PORTF_DEN_R =  PF0_MASK |PF1_MASK|PF2_MASK |PF3_MASK|PF4_MASK  ;  // enable LEDs and pushbuttons
    GPIO_PORTF_PUR_R =  PF0_MASK |PF1_MASK|PF2_MASK |PF3_MASK|PF4_MASK ; // enable internal pull-up for push button
    GPIO_PORTF_LOCK_R =0;

    GPIO_PORTE_DIR_R =  PE0_MASK |PE1_MASK|PE2_MASK |PE3_MASK|PE4_MASK |PE5_MASK;// bits 1 and 3 are outputs, other pins are inputs
    GPIO_PORTE_DR8R_R =  PE0_MASK |PE1_MASK|PE2_MASK |PE3_MASK|PE4_MASK |PE5_MASK;// set drive strength to 2mA (not needed since default configuration -- for clarity)
    GPIO_PORTE_DEN_R =  PE0_MASK |PE1_MASK|PE2_MASK |PE3_MASK|PE4_MASK |PE5_MASK;  // enable LEDs and pushbuttons
    GPIO_PORTE_PUR_R =  PE0_MASK |PE1_MASK|PE2_MASK |PE3_MASK|PE4_MASK |PE5_MASK; // enable internal pull-up for push button


    GPIO_PORTA_DIR_R = PA2_MASK | PA3_MASK |PA4_MASK|PA5_MASK|PA6_MASK|PA7_MASK ;// bits 1 and 3 are outputs, other pins are inputs
      GPIO_PORTA_DR8R_R = PA2_MASK | PA3_MASK |PA4_MASK|PA5_MASK|PA6_MASK|PA7_MASK ;// set drive strength to 2mA (not needed since default configuration -- for clarity)
      GPIO_PORTA_DEN_R =PA2_MASK | PA3_MASK |PA4_MASK|PA5_MASK|PA6_MASK|PA7_MASK;  // enable LEDs and pushbuttons
      GPIO_PORTA_PUR_R = PA2_MASK | PA3_MASK |PA4_MASK|PA5_MASK|PA6_MASK|PA7_MASK ; // enable internal pull-up for push button


      GPIO_PORTB_DIR_R = PB0_MASK | PB1_MASK | PB2_MASK | PB3_MASK | PB4_MASK | PB5_MASK | PB6_MASK | PB7_MASK ;// bits 1 and 3 are outputs, other pins are inputs
           GPIO_PORTB_DR8R_R =PB0_MASK | PB1_MASK | PB2_MASK | PB3_MASK | PB4_MASK | PB5_MASK | PB6_MASK | PB7_MASK ;// set drive strength to 2mA (not needed since default configuration -- for clarity)
           GPIO_PORTB_DEN_R =PB0_MASK | PB1_MASK | PB2_MASK | PB3_MASK | PB4_MASK | PB5_MASK | PB6_MASK | PB7_MASK ;  // enable LEDs and pushbuttons
           GPIO_PORTB_PUR_R = PB0_MASK | PB1_MASK | PB2_MASK | PB3_MASK | PB4_MASK | PB5_MASK | PB6_MASK | PB7_MASK  ; // enable internal pull-up for push button



           GPIO_PORTC_DIR_R =  PC4_MASK | PC5_MASK | PC6_MASK | PC7_MASK ;// bits 1 and 3 are outputs, other pins are inputs
                GPIO_PORTC_DR8R_R =PC4_MASK | PC5_MASK | PC6_MASK | PC7_MASK ;// set drive strength to 2mA (not needed since default configuration -- for clarity)
                GPIO_PORTC_DEN_R =PC4_MASK | PC5_MASK | PC6_MASK | PC7_MASK ;  // enable LEDs and pushbuttons
                GPIO_PORTC_PUR_R = PC4_MASK | PC5_MASK | PC6_MASK | PC7_MASK ; // enable internal pull-up for push button


                GPIO_PORTD_LOCK_R = 0x4C4F434B;
                GPIO_PORTD_CR_R |= PD7_MASK;
                GPIO_PORTD_DIR_R = PD0_MASK | PD1_MASK | PD2_MASK | PD3_MASK  | PD6_MASK | PD7_MASK ;// bits 1 and 3 are outputs, other pins are inputs
                     GPIO_PORTD_DR8R_R = PD0_MASK | PD1_MASK | PD2_MASK | PD3_MASK  | PD6_MASK | PD7_MASK ;// set drive strength to 2mA (not needed since default configuration -- for clarity)
                     GPIO_PORTD_DEN_R = PD0_MASK | PD1_MASK | PD2_MASK | PD3_MASK  | PD6_MASK | PD7_MASK ;  // enable LEDs and pushbuttons
                     GPIO_PORTD_PUR_R = PD0_MASK | PD1_MASK | PD2_MASK | PD3_MASK  | PD6_MASK | PD7_MASK  ; // enable internal pull-up for push button
                     GPIO_PORTD_LOCK_R =0;
          }
