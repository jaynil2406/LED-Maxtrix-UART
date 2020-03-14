/*
 * LEDinit.h
 *
 *  Created on: 14-Mar-2020
 *      Author: jaynilbarca
 */

#ifndef LEDINIT_H_
#define LEDINIT_H_

#define BLUE_LED0      (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 2*4)))
#define L30      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 2*4)))
#define L28      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 3*4)))
#define L26      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 4*4)))
#define L15      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 5*4)))
#define L16      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 6*4)))
#define L17      (*((volatile uint32_t *)(0x42000000 + (0x400043FC-0x40000000)*32 + 7*4)))

#define L12   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 0*4)))
#define L8   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 1*4)))
#define L18   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 2*4)))
#define L25   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 3*4)))
#define L14   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 4*4)))
#define L6   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 5*4)))
#define L24   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 6*4)))
#define L22   (*((volatile uint32_t *)(0x42000000 + (0x400053FC-0x40000000)*32 + 7*4)))


#define L27   (*((volatile uint32_t *)(0x42000000 + (0x400063FC-0x40000000)*32 + 4*4)))
#define L29   (*((volatile uint32_t *)(0x42000000 + (0x400063FC-0x40000000)*32 + 5*4)))
#define L31   (*((volatile uint32_t *)(0x42000000 + (0x400063FC-0x40000000)*32 + 6*4)))
#define L32   (*((volatile uint32_t *)(0x42000000 + (0x400063FC-0x40000000)*32 + 7*4)))

#define L1   (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 0*4)))
#define L2   (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 1*4)))
#define L3   (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 2*4)))
#define L5    (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 3*4)))
#define L33   (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 6*4)))
#define L34   (*((volatile uint32_t *)(0x42000000 + (0x400073FC-0x40000000)*32 + 7*4)))

#define L19   (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 0*4)))
#define L7   (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 1*4)))
#define L9   (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 2*4)))
#define L11   (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 3*4)))
#define L10   (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 4*4)))
#define L4  (*((volatile uint32_t *)(0x42000000 + (0x400243FC-0x40000000)*32 + 5*4)))

#define L20   (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 0*4)))
#define L13   (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 1*4)))
#define L21   (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 2*4)))
#define L23   (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 3*4)))
#define L35   (*((volatile uint32_t *)(0x42000000 + (0x400253FC-0x40000000)*32 + 4*4)))


#define PA2_MASK 4
#define PA3_MASK 8
#define PA4_MASK 16
#define PA5_MASK 32
#define PA6_MASK 64
#define PA7_MASK 128


#define PB0_MASK 1
#define PB1_MASK 2
#define PB2_MASK 4
#define PB3_MASK 8
#define PB4_MASK 16
#define PB5_MASK 32
#define PB6_MASK 64
#define PB7_MASK 128


#define PC4_MASK 16
#define PC5_MASK 32
#define PC6_MASK 64
#define PC7_MASK 128

#define PD0_MASK 1
#define PD1_MASK 2
#define PD2_MASK 4
#define PD3_MASK 8
#define PD6_MASK 64
#define PD7_MASK 128

#define PE0_MASK 1
#define PE1_MASK 2
#define PE2_MASK 4
#define PE3_MASK 8
#define PE4_MASK 16
#define PE5_MASK 32


#define PF0_MASK 1
#define PF1_MASK 2
#define PF2_MASK 4
#define PF3_MASK 8
#define PF4_MASK 16

void initHw();



#endif /* LEDINIT_H_ */
