/*
 * stringReplacement.c
 *
 *  Created on: Mar 6, 2020
 *      Author: JaYniL~LM10
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "uart0.h"
#include "stringReplacement.h"
#include "tm4c123gh6pm.h"



void string_copy( const char source_string[] ,  char destination_string[])
{
    int b=0;
    while(source_string[b] != '\0')
    {
        destination_string[b] = source_string[b];
        b++;
    }

    destination_string[b] = '\0';
}

char* itoa(int variable)
{


    vari num;
    int length=0,l1,j=10,l3=0;

    for(l1=1;l1<=20;l1++)
    {
        if(l1==1)
        {
            num.indi[l1] = variable%j;
        }
        else
        {
        num.indi[l1] = variable%j;
        num.indi[l1] = (num.indi[l1] - num.indi[l1-1])/(j/10);
        }
        length++;
        if(variable/j=='\0')
            break;
        j*=10;

    }
   // printf("\nLEngth: %d",length);
    for(l3=1;l3<=length;l3++)
    {
        if((length==1) && (num.indi[0]==0))
        {
          //  printf("Zero Condition");
            string[l3] = 48;
            break;
        }
      //   printf("\nSwitch:%d",num.indi[l3]);
        switch (num.indi[l3])
        {

            case 0:
                string[length-l3] = 48;
                break;
            case 1:
                string[length-l3] = 49;
                break;
            case 2:
                string[length-l3] = 50;
                break;
            case 3:
                string[length-l3] = 51;
                break;
            case 4:
                string[length-l3] = 52;
                break;
            case 5:
                string[length-l3] = 53;
                break;
            case 6:
                string[length-l3] = 54;
                break;
            case 7:
                string[length-l3] = 55;
                break;
            case 8:
                string[length-l3] = 56;
                break;
            case 9:
                string[length-l3] = 57;
                break;


        }

    }


    return string;
}

