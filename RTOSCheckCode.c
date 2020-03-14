// Stop Go C Example (Basic)
// Jason Losh

//-----------------------------------------------------------------------------
// Hardware Target
//-----------------------------------------------------------------------------

// Target Platform: EK-TM4C123GXL Evaluation Board
// Target uC:       TM4C123GH6PM
// System Clock:    40 MHz

// Hardware configuration:
// Red LED:
//   PF1 drives an NPN transistor that powers the red LED
// Green LED:
//   PF3 drives an NPN transistor that powers the green LED
// Pushbutton:
//   SW1 pulls pin PF4 low (internal pull-up is used)

//-----------------------------------------------------------------------------
// Device includes, defines, and assembler directives
//-----------------------------------------------------------------------------

#include <stdint.h>
#include <stdbool.h>
#include "uart0.h"
#include "wait.h"
#include "getString.h"
#include "names.h"
#include "LEDinit.h"
#include "stringReplacement.h"
#include<ctype.h>
#include "tm4c123gh6pm.h"

char checking;


int main(void)
{

    // Initialize hardware
    initHw();
    initUart0();
    putsUart0("Checking the UART0 Function");
while(1)
{
putsUart0("\r\n");
    checking = getcUart0();

    if(checking == 'a')
    {
        alloff();
        a();
    }
    else if(checking == 'b') {alloff();b();} else if(checking == 'c') {alloff();c();} else if(checking == 'd') {alloff();b();}
    else if(checking == 'e') {alloff();e();} else if(checking == 'f') {alloff();f();} else if(checking == 'g') {alloff();g();}
    else if(checking == 'h') {alloff();h();} else if(checking == 'i') {alloff();i();} else if(checking == 'j') {alloff();j();}
    else if(checking == 'k') {alloff();k();} else if(checking == 'l') {alloff();l();} else if(checking == 'm') {alloff();m();}
    else if(checking == 'n') {alloff();n();} else if(checking == 'o') {alloff();o();} else if(checking == 'p') {alloff();p();}
    else if(checking == 'q') {alloff();q();} else if(checking == 'r') {alloff();r();} else if(checking == 's') {alloff();s();}
    else if(checking == 't') {alloff();t();} else if(checking == 'u') {alloff();u();} else if(checking == 'v') {alloff();v();}
    else if(checking == 'w') {alloff();w();} else if(checking == 'x') {alloff();x();} else if(checking == 'y') {alloff();y();}
    else if(checking == 'z') {alloff();z();}



//waitMicrosecond(5000000);

}


}

