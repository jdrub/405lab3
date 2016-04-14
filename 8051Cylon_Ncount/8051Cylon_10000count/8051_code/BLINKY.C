//Blinky.c wmh 2015-02-18 : generates 'Cylon' scan on port P1. Set delaycount (below) =3 for Xilinx simulation, =10,000 to run on FPGA
//	- program outputs on port P1 and use registers R5 (=j) and R6:R7 (=i) (see BLINKY.LST)
//  - conversion of .hex to .memh format for initializing ROM definition in LUT_ROM3Kx8v01.v is performed by hex2readmemh.exe
//    (see entry in Project > Options for Target > User) 
//	- todo -- update some registers in an .asm
// > Project > Options changes:
// 		Target : Oregano Systems 8051 core
//		checked 'Use Onchip ROM (0x0-0xFFF)'   

/* BLINKY.C - LED Flasher for the Keil MCBx51 Evaluation Board with 80C51 device*/
                  
#include <REG51F.H>

// When you have enabled the option Stop Program Execution with Serial
// Interrupt, the Monitor-51 uses the serial interrupt of the UART.
// It is therefore required to reserve the memory locations for the interrupt
// vector.  You can do this by adding one of the following code lines:

// char code reserve [3] _at_ 0x23;   // when using on-chip UART for communication
// char code reserve [3] _at_  0x3;   // when using off-chip UART for communication

#define DELAYCOUNT	10000				//for hardware this was 10000; for simulation make it 3

//void wait (void)  {	/* wait function */
//  while(P0 == 1);                                   /* only to delay for LED flashes */
//}

void main (void)  {
//	unsigned char k = P2;
//	P1 = k;
//  unsigned int i;                     /* Delay var */
//  unsigned char j;                    /* LED var */

//  while (1) {                         /* Loop forever */
//    for (j=0x01; j< 0x80; j<<=1)  {   /* Blink LED 0, 1, 2, 3, 4, 5, 6 */
//      P1 = j;                         /* Output to LED Port */
//      for (i = 0; i < DELAYCOUNT; i++)  {  /* Delay for 10000 Counts */
//       wait ();                       /* call wait function */
//      }
//    }
//		
//			wait();
//		
//    for (j=0x80; j> 0x01; j>>=1)  {   /* Blink LED 6, 5, 4, 3, 2, 1 */
//      P1 = j;                         /* Output to LED Port */
//      for (i = 0; i < DELAYCOUNT; i++)  {  /* Delay for 10000 Counts */
//       wait ();                       /* call wait function */
//      }
//    }
//  }

P3 = P0;
P1 = P2;
P2 = 0;

}
