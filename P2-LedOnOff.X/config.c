// Archivo: config.c
#include <xc.h>

// FOSC
#pragma config FOSFPR = FRC             // Oscillator (Internal Fast RC)
#pragma config FCKSMEN = CSW_FSCM_OFF   // Clock Switching and Monitor Disabled

// FWDT
#pragma config FWPSB = WDTPSB_16        // WDT Prescaler B (1:16)
#pragma config FWPSA = WDTPSA_512       // WDT Prescaler A (1:512)
#pragma config WDT = WDT_ON             // Watchdog Timer Enabled

// FBORPOR
#pragma config FPWRT = PWRT_64          // POR Timer 64ms
#pragma config BODENV = BORV20          // Brown Out Voltage Reserved
#pragma config BOREN = PBOR_ON          // PBOR Enabled
#pragma config MCLRE = MCLR_EN          // Master Clear Enabled

// FGS
#pragma config GWRP = GWRP_OFF          // General Code Segment Write Protect Disabled
#pragma config GCP = CODE_PROT_OFF      // General Segment Code Protection Disabled

// FICD
#pragma config ICS = ICS_PGD            // Debugger uses PGC/PGD

