;==========================================================================
;  PIC30F4013 Standard Assembly Include File
; 
;  (c) Copyright 2023 Microchip Technology, All rights reserved
;  Part support version 2.10.A(27-Mar-2023)
; 
 ; This software is developed by Microchip Technology Inc. and its
 ; subsidiaries ("Microchip").
 ; 
 ; Redistribution and use in source and binary forms, with or without
 ; modification, are permitted provided that the following conditions are 
 ; met:
 ; 
 ; 1.      Redistributions of source code must retain the above copyright
 ;         notice, this list of conditions and the following disclaimer.
 ; 2.      Redistributions in binary form must reproduce the above 
 ;         copyright notice, this list of conditions and the following 
 ;         disclaimer in the documentation and/or other materials provided 
 ;         with the distribution. Publication is not required when
 ;         this file is used in an embedded application.
 ; 3.      Microchip's name may not be used to endorse or promote products
 ;         derived from this software without specific prior written 
 ;         permission.
 ; 
 ; THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 ; WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 ; MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 ; SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 ; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 ; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 ; OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 ; WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 ; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ; ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ; 
 ;

.ifndef __30F4013_INC
.equ __30F4013_INC,1
.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC30F4013 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p30F4013
;       2. Placing a ".equ" directive before the ".include":
;               .equ __30F4013, 1
;               .include "p30F4013.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __30F4013
   .ERROR "Include file does not match processor setting."
.ENDIF


;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Equates (Low Byte, High Byte) -----------------------------

        .extern WREG0
        .equiv  WREG0L, _WREG0
        .equiv  WREG0H, _WREG0+1

        .extern WREG1
        .equiv  WREG1L, _WREG1
        .equiv  WREG1H, _WREG1+1

        .extern WREG2
        .equiv  WREG2L, _WREG2
        .equiv  WREG2H, _WREG2+1

        .extern WREG3
        .equiv  WREG3L, _WREG3
        .equiv  WREG3H, _WREG3+1

        .extern WREG4
        .equiv  WREG4L, _WREG4
        .equiv  WREG4H, _WREG4+1

        .extern WREG5
        .equiv  WREG5L, _WREG5
        .equiv  WREG5H, _WREG5+1

        .extern WREG6
        .equiv  WREG6L, _WREG6
        .equiv  WREG6H, _WREG6+1

        .extern WREG7
        .equiv  WREG7L, _WREG7
        .equiv  WREG7H, _WREG7+1

        .extern WREG8
        .equiv  WREG8L, _WREG8
        .equiv  WREG8H, _WREG8+1

        .extern WREG9
        .equiv  WREG9L, _WREG9
        .equiv  WREG9H, _WREG9+1

        .extern WREG10
        .equiv  WREG10L, _WREG10
        .equiv  WREG10H, _WREG10+1

        .extern WREG11
        .equiv  WREG11L, _WREG11
        .equiv  WREG11H, _WREG11+1

        .extern WREG12
        .equiv  WREG12L, _WREG12
        .equiv  WREG12H, _WREG12+1

        .extern WREG13
        .equiv  WREG13L, _WREG13
        .equiv  WREG13H, _WREG13+1

        .extern WREG14
        .equiv  WREG14L, _WREG14
        .equiv  WREG14H, _WREG14+1

        .extern WREG15
        .equiv  WREG15L, _WREG15
        .equiv  WREG15H, _WREG15+1

        .extern SPLIM
        .equiv  SPLIML, _SPLIM
        .equiv  SPLIMH, _SPLIM+1

        .extern ACCAL
        .equiv  ACCALL, _ACCAL
        .equiv  ACCALH, _ACCAL+1

        .extern ACCAH
        .equiv  ACCAHL, _ACCAH
        .equiv  ACCAHH, _ACCAH+1

        .extern ACCAU
        .equiv  ACCAUL, _ACCAU
        .equiv  ACCAUH, _ACCAU+1

        .extern ACCBL
        .equiv  ACCBLL, _ACCBL
        .equiv  ACCBLH, _ACCBL+1

        .extern ACCBH
        .equiv  ACCBHL, _ACCBH
        .equiv  ACCBHH, _ACCBH+1

        .extern ACCBU
        .equiv  ACCBUL, _ACCBU
        .equiv  ACCBUH, _ACCBU+1

        .extern PCL
        .equiv  PCLL, _PCL
        .equiv  PCLH, _PCL+1

        .extern PCH
        .equiv  PCHL, _PCH
        .equiv  PCHH, _PCH+1

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern PSVPAG
        .equiv  PSVPAGL, _PSVPAG
        .equiv  PSVPAGH, _PSVPAG+1

        .extern RCOUNT
        .equiv  RCOUNTL, _RCOUNT
        .equiv  RCOUNTH, _RCOUNT+1

        .extern DCOUNT
        .equiv  DCOUNTL, _DCOUNT
        .equiv  DCOUNTH, _DCOUNT+1

        .extern DOSTARTL
        .equiv  DOSTARTLL, _DOSTARTL
        .equiv  DOSTARTLH, _DOSTARTL+1

        .extern DOSTARTH
        .equiv  DOSTARTHL, _DOSTARTH
        .equiv  DOSTARTHH, _DOSTARTH+1

        .extern DOENDL
        .equiv  DOENDLL, _DOENDL
        .equiv  DOENDLH, _DOENDL+1

        .extern DOENDH
        .equiv  DOENDHL, _DOENDH
        .equiv  DOENDHH, _DOENDH+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern MODCON
        .equiv  MODCONL, _MODCON
        .equiv  MODCONH, _MODCON+1

        .extern XMODSRT
        .equiv  XMODSRTL, _XMODSRT
        .equiv  XMODSRTH, _XMODSRT+1

        .extern XMODEND
        .equiv  XMODENDL, _XMODEND
        .equiv  XMODENDH, _XMODEND+1

        .extern YMODSRT
        .equiv  YMODSRTL, _YMODSRT
        .equiv  YMODSRTH, _YMODSRT+1

        .extern YMODEND
        .equiv  YMODENDL, _YMODEND
        .equiv  YMODENDH, _YMODEND+1

        .extern XBREV
        .equiv  XBREVL, _XBREV
        .equiv  XBREVH, _XBREV+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern IFS0
        .equiv  IFS0L, _IFS0
        .equiv  IFS0H, _IFS0+1

        .extern IFS1
        .equiv  IFS1L, _IFS1
        .equiv  IFS1H, _IFS1+1

        .extern IFS2
        .equiv  IFS2L, _IFS2
        .equiv  IFS2H, _IFS2+1

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC2
        .equiv  IEC2L, _IEC2
        .equiv  IEC2H, _IEC2+1

        .extern IPC0
        .equiv  IPC0L, _IPC0
        .equiv  IPC0H, _IPC0+1

        .extern IPC1
        .equiv  IPC1L, _IPC1
        .equiv  IPC1H, _IPC1+1

        .extern IPC2
        .equiv  IPC2L, _IPC2
        .equiv  IPC2H, _IPC2+1

        .extern IPC3
        .equiv  IPC3L, _IPC3
        .equiv  IPC3H, _IPC3+1

        .extern IPC4
        .equiv  IPC4L, _IPC4
        .equiv  IPC4H, _IPC4+1

        .extern IPC5
        .equiv  IPC5L, _IPC5
        .equiv  IPC5H, _IPC5+1

        .extern IPC6
        .equiv  IPC6L, _IPC6
        .equiv  IPC6H, _IPC6+1

        .extern IPC10
        .equiv  IPC10L, _IPC10
        .equiv  IPC10H, _IPC10+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

        .extern TMR1
        .equiv  TMR1L, _TMR1
        .equiv  TMR1H, _TMR1+1

        .extern PR1
        .equiv  PR1L, _PR1
        .equiv  PR1H, _PR1+1

        .extern T1CON
        .equiv  T1CONL, _T1CON
        .equiv  T1CONH, _T1CON+1

        .extern TMR2
        .equiv  TMR2L, _TMR2
        .equiv  TMR2H, _TMR2+1

        .extern TMR3HLD
        .equiv  TMR3HLDL, _TMR3HLD
        .equiv  TMR3HLDH, _TMR3HLD+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern PR3
        .equiv  PR3L, _PR3
        .equiv  PR3H, _PR3+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern TMR4
        .equiv  TMR4L, _TMR4
        .equiv  TMR4H, _TMR4+1

        .extern TMR5HLD
        .equiv  TMR5HLDL, _TMR5HLD
        .equiv  TMR5HLDH, _TMR5HLD+1

        .extern TMR5
        .equiv  TMR5L, _TMR5
        .equiv  TMR5H, _TMR5+1

        .extern PR4
        .equiv  PR4L, _PR4
        .equiv  PR4H, _PR4+1

        .extern PR5
        .equiv  PR5L, _PR5
        .equiv  PR5H, _PR5+1

        .extern T4CON
        .equiv  T4CONL, _T4CON
        .equiv  T4CONH, _T4CON+1

        .extern T5CON
        .equiv  T5CONL, _T5CON
        .equiv  T5CONH, _T5CON+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1CON
        .equiv  IC1CONL, _IC1CON
        .equiv  IC1CONH, _IC1CON+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2CON
        .equiv  IC2CONL, _IC2CON
        .equiv  IC2CONH, _IC2CON+1

        .extern IC7BUF
        .equiv  IC7BUFL, _IC7BUF
        .equiv  IC7BUFH, _IC7BUF+1

        .extern IC7CON
        .equiv  IC7CONL, _IC7CON
        .equiv  IC7CONH, _IC7CON+1

        .extern IC8BUF
        .equiv  IC8BUFL, _IC8BUF
        .equiv  IC8BUFH, _IC8BUF+1

        .extern IC8CON
        .equiv  IC8CONL, _IC8CON
        .equiv  IC8CONH, _IC8CON+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1CON
        .equiv  OC1CONL, _OC1CON
        .equiv  OC1CONH, _OC1CON+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2CON
        .equiv  OC2CONL, _OC2CON
        .equiv  OC2CONH, _OC2CON+1

        .extern OC3RS
        .equiv  OC3RSL, _OC3RS
        .equiv  OC3RSH, _OC3RS+1

        .extern OC3R
        .equiv  OC3RL, _OC3R
        .equiv  OC3RH, _OC3R+1

        .extern OC3CON
        .equiv  OC3CONL, _OC3CON
        .equiv  OC3CONH, _OC3CON+1

        .extern OC4RS
        .equiv  OC4RSL, _OC4RS
        .equiv  OC4RSH, _OC4RS+1

        .extern OC4R
        .equiv  OC4RL, _OC4R
        .equiv  OC4RH, _OC4R+1

        .extern OC4CON
        .equiv  OC4CONL, _OC4CON
        .equiv  OC4CONH, _OC4CON+1

        .extern I2CRCV
        .equiv  I2CRCVL, _I2CRCV
        .equiv  I2CRCVH, _I2CRCV+1

        .extern I2CTRN
        .equiv  I2CTRNL, _I2CTRN
        .equiv  I2CTRNH, _I2CTRN+1

        .extern I2CBRG
        .equiv  I2CBRGL, _I2CBRG
        .equiv  I2CBRGH, _I2CBRG+1

        .extern I2CCON
        .equiv  I2CCONL, _I2CCON
        .equiv  I2CCONH, _I2CCON+1

        .extern I2CSTAT
        .equiv  I2CSTATL, _I2CSTAT
        .equiv  I2CSTATH, _I2CSTAT+1

        .extern I2CADD
        .equiv  I2CADDL, _I2CADD
        .equiv  I2CADDH, _I2CADD+1

        .extern U1MODE
        .equiv  U1MODEL, _U1MODE
        .equiv  U1MODEH, _U1MODE+1

        .extern U1STA
        .equiv  U1STAL, _U1STA
        .equiv  U1STAH, _U1STA+1

        .extern U1TXREG
        .equiv  U1TXREGL, _U1TXREG
        .equiv  U1TXREGH, _U1TXREG+1

        .extern U1RXREG
        .equiv  U1RXREGL, _U1RXREG
        .equiv  U1RXREGH, _U1RXREG+1

        .extern U1BRG
        .equiv  U1BRGL, _U1BRG
        .equiv  U1BRGH, _U1BRG+1

        .extern U2MODE
        .equiv  U2MODEL, _U2MODE
        .equiv  U2MODEH, _U2MODE+1

        .extern U2STA
        .equiv  U2STAL, _U2STA
        .equiv  U2STAH, _U2STA+1

        .extern U2TXREG
        .equiv  U2TXREGL, _U2TXREG
        .equiv  U2TXREGH, _U2TXREG+1

        .extern U2RXREG
        .equiv  U2RXREGL, _U2RXREG
        .equiv  U2RXREGH, _U2RXREG+1

        .extern U2BRG
        .equiv  U2BRGL, _U2BRG
        .equiv  U2BRGH, _U2BRG+1

        .extern SPI1STAT
        .equiv  SPI1STATL, _SPI1STAT
        .equiv  SPI1STATH, _SPI1STAT+1

        .extern SPI1CON
        .equiv  SPI1CONL, _SPI1CON
        .equiv  SPI1CONH, _SPI1CON+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern DCICON1
        .equiv  DCICON1L, _DCICON1
        .equiv  DCICON1H, _DCICON1+1

        .extern DCICON2
        .equiv  DCICON2L, _DCICON2
        .equiv  DCICON2H, _DCICON2+1

        .extern DCICON3
        .equiv  DCICON3L, _DCICON3
        .equiv  DCICON3H, _DCICON3+1

        .extern DCISTAT
        .equiv  DCISTATL, _DCISTAT
        .equiv  DCISTATH, _DCISTAT+1

        .extern TSCON
        .equiv  TSCONL, _TSCON
        .equiv  TSCONH, _TSCON+1

        .extern RSCON
        .equiv  RSCONL, _RSCON
        .equiv  RSCONH, _RSCON+1

        .extern RXBUF0
        .equiv  RXBUF0L, _RXBUF0
        .equiv  RXBUF0H, _RXBUF0+1

        .extern RXBUF1
        .equiv  RXBUF1L, _RXBUF1
        .equiv  RXBUF1H, _RXBUF1+1

        .extern RXBUF2
        .equiv  RXBUF2L, _RXBUF2
        .equiv  RXBUF2H, _RXBUF2+1

        .extern RXBUF3
        .equiv  RXBUF3L, _RXBUF3
        .equiv  RXBUF3H, _RXBUF3+1

        .extern TXBUF0
        .equiv  TXBUF0L, _TXBUF0
        .equiv  TXBUF0H, _TXBUF0+1

        .extern TXBUF1
        .equiv  TXBUF1L, _TXBUF1
        .equiv  TXBUF1H, _TXBUF1+1

        .extern TXBUF2
        .equiv  TXBUF2L, _TXBUF2
        .equiv  TXBUF2H, _TXBUF2+1

        .extern TXBUF3
        .equiv  TXBUF3L, _TXBUF3
        .equiv  TXBUF3H, _TXBUF3+1

        .extern ADCBUF0
        .equiv  ADCBUF0L, _ADCBUF0
        .equiv  ADCBUF0H, _ADCBUF0+1

        .extern ADCBUF1
        .equiv  ADCBUF1L, _ADCBUF1
        .equiv  ADCBUF1H, _ADCBUF1+1

        .extern ADCBUF2
        .equiv  ADCBUF2L, _ADCBUF2
        .equiv  ADCBUF2H, _ADCBUF2+1

        .extern ADCBUF3
        .equiv  ADCBUF3L, _ADCBUF3
        .equiv  ADCBUF3H, _ADCBUF3+1

        .extern ADCBUF4
        .equiv  ADCBUF4L, _ADCBUF4
        .equiv  ADCBUF4H, _ADCBUF4+1

        .extern ADCBUF5
        .equiv  ADCBUF5L, _ADCBUF5
        .equiv  ADCBUF5H, _ADCBUF5+1

        .extern ADCBUF6
        .equiv  ADCBUF6L, _ADCBUF6
        .equiv  ADCBUF6H, _ADCBUF6+1

        .extern ADCBUF7
        .equiv  ADCBUF7L, _ADCBUF7
        .equiv  ADCBUF7H, _ADCBUF7+1

        .extern ADCBUF8
        .equiv  ADCBUF8L, _ADCBUF8
        .equiv  ADCBUF8H, _ADCBUF8+1

        .extern ADCBUF9
        .equiv  ADCBUF9L, _ADCBUF9
        .equiv  ADCBUF9H, _ADCBUF9+1

        .extern ADCBUFA
        .equiv  ADCBUFAL, _ADCBUFA
        .equiv  ADCBUFAH, _ADCBUFA+1

        .extern ADCBUFB
        .equiv  ADCBUFBL, _ADCBUFB
        .equiv  ADCBUFBH, _ADCBUFB+1

        .extern ADCBUFC
        .equiv  ADCBUFCL, _ADCBUFC
        .equiv  ADCBUFCH, _ADCBUFC+1

        .extern ADCBUFD
        .equiv  ADCBUFDL, _ADCBUFD
        .equiv  ADCBUFDH, _ADCBUFD+1

        .extern ADCBUFE
        .equiv  ADCBUFEL, _ADCBUFE
        .equiv  ADCBUFEH, _ADCBUFE+1

        .extern ADCBUFF
        .equiv  ADCBUFFL, _ADCBUFF
        .equiv  ADCBUFFH, _ADCBUFF+1

        .extern ADCON1
        .equiv  ADCON1L, _ADCON1
        .equiv  ADCON1H, _ADCON1+1

        .extern ADCON2
        .equiv  ADCON2L, _ADCON2
        .equiv  ADCON2H, _ADCON2+1

        .extern ADCON3
        .equiv  ADCON3L, _ADCON3
        .equiv  ADCON3H, _ADCON3+1

        .extern ADCHS
        .equiv  ADCHSL, _ADCHS
        .equiv  ADCHSH, _ADCHS+1

        .extern ADPCFG
        .equiv  ADPCFGL, _ADPCFG
        .equiv  ADPCFGH, _ADPCFG+1

        .extern ADCSSL
        .equiv  ADCSSLL, _ADCSSL
        .equiv  ADCSSLH, _ADCSSL+1

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern TRISC
        .equiv  TRISCL, _TRISC
        .equiv  TRISCH, _TRISC+1

        .extern PORTC
        .equiv  PORTCL, _PORTC
        .equiv  PORTCH, _PORTC+1

        .extern LATC
        .equiv  LATCL, _LATC
        .equiv  LATCH, _LATC+1

        .extern TRISD
        .equiv  TRISDL, _TRISD
        .equiv  TRISDH, _TRISD+1

        .extern PORTD
        .equiv  PORTDL, _PORTD
        .equiv  PORTDH, _PORTD+1

        .extern LATD
        .equiv  LATDL, _LATD
        .equiv  LATDH, _LATD+1

        .extern TRISF
        .equiv  TRISFL, _TRISF
        .equiv  TRISFH, _TRISF+1

        .extern PORTF
        .equiv  PORTFL, _PORTF
        .equiv  PORTFH, _PORTF+1

        .extern LATF
        .equiv  LATFL, _LATF
        .equiv  LATFH, _LATF+1

        .extern C1RXF0SID
        .equiv  C1RXF0SIDL, _C1RXF0SID
        .equiv  C1RXF0SIDH, _C1RXF0SID+1

        .extern C1RXF0EIDH
        .equiv  C1RXF0EIDHL, _C1RXF0EIDH
        .equiv  C1RXF0EIDHH, _C1RXF0EIDH+1

        .extern C1RXF0EIDL
        .equiv  C1RXF0EIDLL, _C1RXF0EIDL
        .equiv  C1RXF0EIDLH, _C1RXF0EIDL+1

        .extern C1RXF1SID
        .equiv  C1RXF1SIDL, _C1RXF1SID
        .equiv  C1RXF1SIDH, _C1RXF1SID+1

        .extern C1RXF1EIDH
        .equiv  C1RXF1EIDHL, _C1RXF1EIDH
        .equiv  C1RXF1EIDHH, _C1RXF1EIDH+1

        .extern C1RXF1EIDL
        .equiv  C1RXF1EIDLL, _C1RXF1EIDL
        .equiv  C1RXF1EIDLH, _C1RXF1EIDL+1

        .extern C1RXF2SID
        .equiv  C1RXF2SIDL, _C1RXF2SID
        .equiv  C1RXF2SIDH, _C1RXF2SID+1

        .extern C1RXF2EIDH
        .equiv  C1RXF2EIDHL, _C1RXF2EIDH
        .equiv  C1RXF2EIDHH, _C1RXF2EIDH+1

        .extern C1RXF2EIDL
        .equiv  C1RXF2EIDLL, _C1RXF2EIDL
        .equiv  C1RXF2EIDLH, _C1RXF2EIDL+1

        .extern C1RXF3SID
        .equiv  C1RXF3SIDL, _C1RXF3SID
        .equiv  C1RXF3SIDH, _C1RXF3SID+1

        .extern C1RXF3EIDH
        .equiv  C1RXF3EIDHL, _C1RXF3EIDH
        .equiv  C1RXF3EIDHH, _C1RXF3EIDH+1

        .extern C1RXF3EIDL
        .equiv  C1RXF3EIDLL, _C1RXF3EIDL
        .equiv  C1RXF3EIDLH, _C1RXF3EIDL+1

        .extern C1RXF4SID
        .equiv  C1RXF4SIDL, _C1RXF4SID
        .equiv  C1RXF4SIDH, _C1RXF4SID+1

        .extern C1RXF4EIDH
        .equiv  C1RXF4EIDHL, _C1RXF4EIDH
        .equiv  C1RXF4EIDHH, _C1RXF4EIDH+1

        .extern C1RXF4EIDL
        .equiv  C1RXF4EIDLL, _C1RXF4EIDL
        .equiv  C1RXF4EIDLH, _C1RXF4EIDL+1

        .extern C1RXF5SID
        .equiv  C1RXF5SIDL, _C1RXF5SID
        .equiv  C1RXF5SIDH, _C1RXF5SID+1

        .extern C1RXF5EIDH
        .equiv  C1RXF5EIDHL, _C1RXF5EIDH
        .equiv  C1RXF5EIDHH, _C1RXF5EIDH+1

        .extern C1RXF5EIDL
        .equiv  C1RXF5EIDLL, _C1RXF5EIDL
        .equiv  C1RXF5EIDLH, _C1RXF5EIDL+1

        .extern C1RXM0SID
        .equiv  C1RXM0SIDL, _C1RXM0SID
        .equiv  C1RXM0SIDH, _C1RXM0SID+1

        .extern C1RXM0EIDH
        .equiv  C1RXM0EIDHL, _C1RXM0EIDH
        .equiv  C1RXM0EIDHH, _C1RXM0EIDH+1

        .extern C1RXM0EIDL
        .equiv  C1RXM0EIDLL, _C1RXM0EIDL
        .equiv  C1RXM0EIDLH, _C1RXM0EIDL+1

        .extern C1RXM1SID
        .equiv  C1RXM1SIDL, _C1RXM1SID
        .equiv  C1RXM1SIDH, _C1RXM1SID+1

        .extern C1RXM1EIDH
        .equiv  C1RXM1EIDHL, _C1RXM1EIDH
        .equiv  C1RXM1EIDHH, _C1RXM1EIDH+1

        .extern C1RXM1EIDL
        .equiv  C1RXM1EIDLL, _C1RXM1EIDL
        .equiv  C1RXM1EIDLH, _C1RXM1EIDL+1

        .extern C1TX2SID
        .equiv  C1TX2SIDL, _C1TX2SID
        .equiv  C1TX2SIDH, _C1TX2SID+1

        .extern C1TX2EID
        .equiv  C1TX2EIDL, _C1TX2EID
        .equiv  C1TX2EIDH, _C1TX2EID+1

        .extern C1TX2DLC
        .equiv  C1TX2DLCL, _C1TX2DLC
        .equiv  C1TX2DLCH, _C1TX2DLC+1

        .extern C1TX2B1
        .equiv  C1TX2B1L, _C1TX2B1
        .equiv  C1TX2B1H, _C1TX2B1+1

        .extern C1TX2B2
        .equiv  C1TX2B2L, _C1TX2B2
        .equiv  C1TX2B2H, _C1TX2B2+1

        .extern C1TX2B3
        .equiv  C1TX2B3L, _C1TX2B3
        .equiv  C1TX2B3H, _C1TX2B3+1

        .extern C1TX2B4
        .equiv  C1TX2B4L, _C1TX2B4
        .equiv  C1TX2B4H, _C1TX2B4+1

        .extern C1TX2CON
        .equiv  C1TX2CONL, _C1TX2CON
        .equiv  C1TX2CONH, _C1TX2CON+1

        .extern C1TX1SID
        .equiv  C1TX1SIDL, _C1TX1SID
        .equiv  C1TX1SIDH, _C1TX1SID+1

        .extern C1TX1EID
        .equiv  C1TX1EIDL, _C1TX1EID
        .equiv  C1TX1EIDH, _C1TX1EID+1

        .extern C1TX1DLC
        .equiv  C1TX1DLCL, _C1TX1DLC
        .equiv  C1TX1DLCH, _C1TX1DLC+1

        .extern C1TX1B1
        .equiv  C1TX1B1L, _C1TX1B1
        .equiv  C1TX1B1H, _C1TX1B1+1

        .extern C1TX1B2
        .equiv  C1TX1B2L, _C1TX1B2
        .equiv  C1TX1B2H, _C1TX1B2+1

        .extern C1TX1B3
        .equiv  C1TX1B3L, _C1TX1B3
        .equiv  C1TX1B3H, _C1TX1B3+1

        .extern C1TX1B4
        .equiv  C1TX1B4L, _C1TX1B4
        .equiv  C1TX1B4H, _C1TX1B4+1

        .extern C1TX1CON
        .equiv  C1TX1CONL, _C1TX1CON
        .equiv  C1TX1CONH, _C1TX1CON+1

        .extern C1TX0SID
        .equiv  C1TX0SIDL, _C1TX0SID
        .equiv  C1TX0SIDH, _C1TX0SID+1

        .extern C1TX0EID
        .equiv  C1TX0EIDL, _C1TX0EID
        .equiv  C1TX0EIDH, _C1TX0EID+1

        .extern C1TX0DLC
        .equiv  C1TX0DLCL, _C1TX0DLC
        .equiv  C1TX0DLCH, _C1TX0DLC+1

        .extern C1TX0B1
        .equiv  C1TX0B1L, _C1TX0B1
        .equiv  C1TX0B1H, _C1TX0B1+1

        .extern C1TX0B2
        .equiv  C1TX0B2L, _C1TX0B2
        .equiv  C1TX0B2H, _C1TX0B2+1

        .extern C1TX0B3
        .equiv  C1TX0B3L, _C1TX0B3
        .equiv  C1TX0B3H, _C1TX0B3+1

        .extern C1TX0B4
        .equiv  C1TX0B4L, _C1TX0B4
        .equiv  C1TX0B4H, _C1TX0B4+1

        .extern C1TX0CON
        .equiv  C1TX0CONL, _C1TX0CON
        .equiv  C1TX0CONH, _C1TX0CON+1

        .extern C1RX1SID
        .equiv  C1RX1SIDL, _C1RX1SID
        .equiv  C1RX1SIDH, _C1RX1SID+1

        .extern C1RX1EID
        .equiv  C1RX1EIDL, _C1RX1EID
        .equiv  C1RX1EIDH, _C1RX1EID+1

        .extern C1RX1DLC
        .equiv  C1RX1DLCL, _C1RX1DLC
        .equiv  C1RX1DLCH, _C1RX1DLC+1

        .extern C1RX1B1
        .equiv  C1RX1B1L, _C1RX1B1
        .equiv  C1RX1B1H, _C1RX1B1+1

        .extern C1RX1B2
        .equiv  C1RX1B2L, _C1RX1B2
        .equiv  C1RX1B2H, _C1RX1B2+1

        .extern C1RX1B3
        .equiv  C1RX1B3L, _C1RX1B3
        .equiv  C1RX1B3H, _C1RX1B3+1

        .extern C1RX1B4
        .equiv  C1RX1B4L, _C1RX1B4
        .equiv  C1RX1B4H, _C1RX1B4+1

        .extern C1RX1CON
        .equiv  C1RX1CONL, _C1RX1CON
        .equiv  C1RX1CONH, _C1RX1CON+1

        .extern C1RX0SID
        .equiv  C1RX0SIDL, _C1RX0SID
        .equiv  C1RX0SIDH, _C1RX0SID+1

        .extern C1RX0EID
        .equiv  C1RX0EIDL, _C1RX0EID
        .equiv  C1RX0EIDH, _C1RX0EID+1

        .extern C1RX0DLC
        .equiv  C1RX0DLCL, _C1RX0DLC
        .equiv  C1RX0DLCH, _C1RX0DLC+1

        .extern C1RX0B1
        .equiv  C1RX0B1L, _C1RX0B1
        .equiv  C1RX0B1H, _C1RX0B1+1

        .extern C1RX0B2
        .equiv  C1RX0B2L, _C1RX0B2
        .equiv  C1RX0B2H, _C1RX0B2+1

        .extern C1RX0B3
        .equiv  C1RX0B3L, _C1RX0B3
        .equiv  C1RX0B3H, _C1RX0B3+1

        .extern C1RX0B4
        .equiv  C1RX0B4L, _C1RX0B4
        .equiv  C1RX0B4H, _C1RX0B4+1

        .extern C1RX0CON
        .equiv  C1RX0CONL, _C1RX0CON
        .equiv  C1RX0CONH, _C1RX0CON+1

        .extern C1CTRL
        .equiv  C1CTRLL, _C1CTRL
        .equiv  C1CTRLH, _C1CTRL+1

        .extern C1CFG1
        .equiv  C1CFG1L, _C1CFG1
        .equiv  C1CFG1H, _C1CFG1+1

        .extern C1CFG2
        .equiv  C1CFG2L, _C1CFG2
        .equiv  C1CFG2H, _C1CFG2+1

        .extern C1INTF
        .equiv  C1INTFL, _C1INTF
        .equiv  C1INTFH, _C1INTF+1

        .extern C1INTE
        .equiv  C1INTEL, _C1INTE
        .equiv  C1INTEH, _C1INTE+1

        .extern C1EC
        .equiv  C1ECL, _C1EC
        .equiv  C1ECH, _C1EC+1

        .extern C1RERRCNT
        .equiv  C1RERRCNTL, _C1RERRCNT
        .equiv  C1RERRCNTH, _C1RERRCNT+1

        .extern C1TERRCNT
        .equiv  C1TERRCNTL, _C1TERRCNT
        .equiv  C1TERRCNTH, _C1TERRCNT+1

        .extern RCON
        .equiv  RCONL, _RCON
        .equiv  RCONH, _RCON+1

        .extern OSCCON

        .extern OSCCONL
        .equiv  OSCCONLL, _OSCCONL
        .equiv  OSCCONLH, _OSCCONL+1

        .extern OSCCONH
        .equiv  OSCCONHL, _OSCCONH
        .equiv  OSCCONHH, _OSCCONH+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMADR
        .equiv  NVMADRL, _NVMADR
        .equiv  NVMADRH, _NVMADR+1

        .extern NVMADRU
        .equiv  NVMADRUL, _NVMADRU
        .equiv  NVMADRUH, _NVMADRU+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern PMD1
        .equiv  PMD1L, _PMD1
        .equiv  PMD1H, _PMD1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

;----- SR Bits -----------------------------------------------------
        .equiv  SR_C, 0x0000
        .equiv  SR_C_WIDTH, 0x0001
        .equiv  SR_C_MASK, 0x0001
        .equiv  C, 0x0000

        .equiv  SR_Z, 0x0001
        .equiv  SR_Z_WIDTH, 0x0001
        .equiv  SR_Z_MASK, 0x0002
        .equiv  Z, 0x0001

        .equiv  SR_OV, 0x0002
        .equiv  SR_OV_WIDTH, 0x0001
        .equiv  SR_OV_MASK, 0x0004
        .equiv  OV, 0x0002

        .equiv  SR_N, 0x0003
        .equiv  SR_N_WIDTH, 0x0001
        .equiv  SR_N_MASK, 0x0008
        .equiv  N, 0x0003

        .equiv  SR_RA, 0x0004
        .equiv  SR_RA_WIDTH, 0x0001
        .equiv  SR_RA_MASK, 0x0010
        .equiv  RA, 0x0004

        .equiv  SR_IPL, 0x0005
        .equiv  SR_IPL_WIDTH, 0x0003
        .equiv  SR_IPL_MASK, 0x00E0

        .equiv  SR_DC, 0x0008
        .equiv  SR_DC_WIDTH, 0x0001
        .equiv  SR_DC_MASK, 0x0100
        .equiv  DC, 0x0008

        .equiv  SR_DA, 0x0009
        .equiv  SR_DA_WIDTH, 0x0001
        .equiv  SR_DA_MASK, 0x0200
        .equiv  DA, 0x0009

        .equiv  SR_SAB, 0x000A
        .equiv  SR_SAB_WIDTH, 0x0001
        .equiv  SR_SAB_MASK, 0x0400
        .equiv  SAB, 0x000A

        .equiv  SR_OAB, 0x000B
        .equiv  SR_OAB_WIDTH, 0x0001
        .equiv  SR_OAB_MASK, 0x0800
        .equiv  OAB, 0x000B

        .equiv  SR_SB, 0x000C
        .equiv  SR_SB_WIDTH, 0x0001
        .equiv  SR_SB_MASK, 0x1000
        .equiv  SB, 0x000C

        .equiv  SR_SA, 0x000D
        .equiv  SR_SA_WIDTH, 0x0001
        .equiv  SR_SA_MASK, 0x2000
        .equiv  SA, 0x000D

        .equiv  SR_OB, 0x000E
        .equiv  SR_OB_WIDTH, 0x0001
        .equiv  SR_OB_MASK, 0x4000
        .equiv  OB, 0x000E

        .equiv  SR_OA, 0x000F
        .equiv  SR_OA_WIDTH, 0x0001
        .equiv  SR_OA_MASK, 0x8000
        .equiv  OA, 0x000F

        .equiv  SR_IPL0, 0x0005
        .equiv  SR_IPL0_WIDTH, 0x0001
        .equiv  SR_IPL0_MASK, 0x0020
        .equiv  IPL0, 0x0005

        .equiv  SR_IPL1, 0x0006
        .equiv  SR_IPL1_WIDTH, 0x0001
        .equiv  SR_IPL1_MASK, 0x0040
        .equiv  IPL1, 0x0006

        .equiv  SR_IPL2, 0x0007
        .equiv  SR_IPL2_WIDTH, 0x0001
        .equiv  SR_IPL2_MASK, 0x0080
        .equiv  IPL2, 0x0007

;----- CORCON Bits -----------------------------------------------------
        .equiv  CORCON_IF, 0x0000
        .equiv  CORCON_IF_WIDTH, 0x0001
        .equiv  CORCON_IF_MASK, 0x0001
        .equiv  IF, 0x0000

        .equiv  CORCON_RND, 0x0001
        .equiv  CORCON_RND_WIDTH, 0x0001
        .equiv  CORCON_RND_MASK, 0x0002
        .equiv  RND, 0x0001

        .equiv  CORCON_PSV, 0x0002
        .equiv  CORCON_PSV_WIDTH, 0x0001
        .equiv  CORCON_PSV_MASK, 0x0004
        .equiv  PSV, 0x0002

        .equiv  CORCON_IPL3, 0x0003
        .equiv  CORCON_IPL3_WIDTH, 0x0001
        .equiv  CORCON_IPL3_MASK, 0x0008
        .equiv  IPL3, 0x0003

        .equiv  CORCON_ACCSAT, 0x0004
        .equiv  CORCON_ACCSAT_WIDTH, 0x0001
        .equiv  CORCON_ACCSAT_MASK, 0x0010
        .equiv  ACCSAT, 0x0004

        .equiv  CORCON_SATDW, 0x0005
        .equiv  CORCON_SATDW_WIDTH, 0x0001
        .equiv  CORCON_SATDW_MASK, 0x0020
        .equiv  SATDW, 0x0005

        .equiv  CORCON_SATB, 0x0006
        .equiv  CORCON_SATB_WIDTH, 0x0001
        .equiv  CORCON_SATB_MASK, 0x0040
        .equiv  SATB, 0x0006

        .equiv  CORCON_SATA, 0x0007
        .equiv  CORCON_SATA_WIDTH, 0x0001
        .equiv  CORCON_SATA_MASK, 0x0080
        .equiv  SATA, 0x0007

        .equiv  CORCON_DL, 0x0008
        .equiv  CORCON_DL_WIDTH, 0x0003
        .equiv  CORCON_DL_MASK, 0x0700

        .equiv  CORCON_EDT, 0x000B
        .equiv  CORCON_EDT_WIDTH, 0x0001
        .equiv  CORCON_EDT_MASK, 0x0800
        .equiv  EDT, 0x000B

        .equiv  CORCON_US, 0x000C
        .equiv  CORCON_US_WIDTH, 0x0001
        .equiv  CORCON_US_MASK, 0x1000
        .equiv  US, 0x000C

        .equiv  CORCON_DL0, 0x0008
        .equiv  CORCON_DL0_WIDTH, 0x0001
        .equiv  CORCON_DL0_MASK, 0x0100
        .equiv  DL0, 0x0008

        .equiv  CORCON_DL1, 0x0009
        .equiv  CORCON_DL1_WIDTH, 0x0001
        .equiv  CORCON_DL1_MASK, 0x0200
        .equiv  DL1, 0x0009

        .equiv  CORCON_DL2, 0x000A
        .equiv  CORCON_DL2_WIDTH, 0x0001
        .equiv  CORCON_DL2_MASK, 0x0400
        .equiv  DL2, 0x000A

;----- MODCON Bits -----------------------------------------------------
        .equiv  MODCON_XWM, 0x0000
        .equiv  MODCON_XWM_WIDTH, 0x0004
        .equiv  MODCON_XWM_MASK, 0x000F

        .equiv  MODCON_YWM, 0x0004
        .equiv  MODCON_YWM_WIDTH, 0x0004
        .equiv  MODCON_YWM_MASK, 0x00F0

        .equiv  MODCON_BWM, 0x0008
        .equiv  MODCON_BWM_WIDTH, 0x0004
        .equiv  MODCON_BWM_MASK, 0x0F00

        .equiv  MODCON_YMODEN, 0x000E
        .equiv  MODCON_YMODEN_WIDTH, 0x0001
        .equiv  MODCON_YMODEN_MASK, 0x4000
        .equiv  YMODEN, 0x000E

        .equiv  MODCON_XMODEN, 0x000F
        .equiv  MODCON_XMODEN_WIDTH, 0x0001
        .equiv  MODCON_XMODEN_MASK, 0x8000
        .equiv  XMODEN, 0x000F

        .equiv  MODCON_XWM0, 0x0000
        .equiv  MODCON_XWM0_WIDTH, 0x0001
        .equiv  MODCON_XWM0_MASK, 0x0001
        .equiv  XWM0, 0x0000

        .equiv  MODCON_XWM1, 0x0001
        .equiv  MODCON_XWM1_WIDTH, 0x0001
        .equiv  MODCON_XWM1_MASK, 0x0002
        .equiv  XWM1, 0x0001

        .equiv  MODCON_XWM2, 0x0002
        .equiv  MODCON_XWM2_WIDTH, 0x0001
        .equiv  MODCON_XWM2_MASK, 0x0004
        .equiv  XWM2, 0x0002

        .equiv  MODCON_XWM3, 0x0003
        .equiv  MODCON_XWM3_WIDTH, 0x0001
        .equiv  MODCON_XWM3_MASK, 0x0008
        .equiv  XWM3, 0x0003

        .equiv  MODCON_YWM0, 0x0004
        .equiv  MODCON_YWM0_WIDTH, 0x0001
        .equiv  MODCON_YWM0_MASK, 0x0010
        .equiv  YWM0, 0x0004

        .equiv  MODCON_YWM1, 0x0005
        .equiv  MODCON_YWM1_WIDTH, 0x0001
        .equiv  MODCON_YWM1_MASK, 0x0020
        .equiv  YWM1, 0x0005

        .equiv  MODCON_YWM2, 0x0006
        .equiv  MODCON_YWM2_WIDTH, 0x0001
        .equiv  MODCON_YWM2_MASK, 0x0040
        .equiv  YWM2, 0x0006

        .equiv  MODCON_YWM3, 0x0007
        .equiv  MODCON_YWM3_WIDTH, 0x0001
        .equiv  MODCON_YWM3_MASK, 0x0080
        .equiv  YWM3, 0x0007

        .equiv  MODCON_BWM0, 0x0008
        .equiv  MODCON_BWM0_WIDTH, 0x0001
        .equiv  MODCON_BWM0_MASK, 0x0100
        .equiv  BWM0, 0x0008

        .equiv  MODCON_BWM1, 0x0009
        .equiv  MODCON_BWM1_WIDTH, 0x0001
        .equiv  MODCON_BWM1_MASK, 0x0200
        .equiv  BWM1, 0x0009

        .equiv  MODCON_BWM2, 0x000A
        .equiv  MODCON_BWM2_WIDTH, 0x0001
        .equiv  MODCON_BWM2_MASK, 0x0400
        .equiv  BWM2, 0x000A

        .equiv  MODCON_BWM3, 0x000B
        .equiv  MODCON_BWM3_WIDTH, 0x0001
        .equiv  MODCON_BWM3_MASK, 0x0800
        .equiv  BWM3, 0x000B

;----- XBREV Bits -----------------------------------------------------
        .equiv  XBREV_XB, 0x0000
        .equiv  XBREV_XB_WIDTH, 0x000F
        .equiv  XBREV_XB_MASK, 0x7FFF

        .equiv  XBREV_BREN, 0x000F
        .equiv  XBREV_BREN_WIDTH, 0x0001
        .equiv  XBREV_BREN_MASK, 0x8000
        .equiv  BREN, 0x000F

        .equiv  XBREV_XB0, 0x0000
        .equiv  XBREV_XB0_WIDTH, 0x0001
        .equiv  XBREV_XB0_MASK, 0x0001
        .equiv  XB0, 0x0000

        .equiv  XBREV_XB1, 0x0001
        .equiv  XBREV_XB1_WIDTH, 0x0001
        .equiv  XBREV_XB1_MASK, 0x0002
        .equiv  XB1, 0x0001

        .equiv  XBREV_XB2, 0x0002
        .equiv  XBREV_XB2_WIDTH, 0x0001
        .equiv  XBREV_XB2_MASK, 0x0004
        .equiv  XB2, 0x0002

        .equiv  XBREV_XB3, 0x0003
        .equiv  XBREV_XB3_WIDTH, 0x0001
        .equiv  XBREV_XB3_MASK, 0x0008
        .equiv  XB3, 0x0003

        .equiv  XBREV_XB4, 0x0004
        .equiv  XBREV_XB4_WIDTH, 0x0001
        .equiv  XBREV_XB4_MASK, 0x0010
        .equiv  XB4, 0x0004

        .equiv  XBREV_XB5, 0x0005
        .equiv  XBREV_XB5_WIDTH, 0x0001
        .equiv  XBREV_XB5_MASK, 0x0020
        .equiv  XB5, 0x0005

        .equiv  XBREV_XB6, 0x0006
        .equiv  XBREV_XB6_WIDTH, 0x0001
        .equiv  XBREV_XB6_MASK, 0x0040
        .equiv  XB6, 0x0006

        .equiv  XBREV_XB7, 0x0007
        .equiv  XBREV_XB7_WIDTH, 0x0001
        .equiv  XBREV_XB7_MASK, 0x0080
        .equiv  XB7, 0x0007

        .equiv  XBREV_XB8, 0x0008
        .equiv  XBREV_XB8_WIDTH, 0x0001
        .equiv  XBREV_XB8_MASK, 0x0100
        .equiv  XB8, 0x0008

        .equiv  XBREV_XB9, 0x0009
        .equiv  XBREV_XB9_WIDTH, 0x0001
        .equiv  XBREV_XB9_MASK, 0x0200
        .equiv  XB9, 0x0009

        .equiv  XBREV_XB10, 0x000A
        .equiv  XBREV_XB10_WIDTH, 0x0001
        .equiv  XBREV_XB10_MASK, 0x0400
        .equiv  XB10, 0x000A

        .equiv  XBREV_XB11, 0x000B
        .equiv  XBREV_XB11_WIDTH, 0x0001
        .equiv  XBREV_XB11_MASK, 0x0800
        .equiv  XB11, 0x000B

        .equiv  XBREV_XB12, 0x000C
        .equiv  XBREV_XB12_WIDTH, 0x0001
        .equiv  XBREV_XB12_MASK, 0x1000
        .equiv  XB12, 0x000C

        .equiv  XBREV_XB13, 0x000D
        .equiv  XBREV_XB13_WIDTH, 0x0001
        .equiv  XBREV_XB13_MASK, 0x2000
        .equiv  XB13, 0x000D

        .equiv  XBREV_XB14, 0x000E
        .equiv  XBREV_XB14_WIDTH, 0x0001
        .equiv  XBREV_XB14_MASK, 0x4000
        .equiv  XB14, 0x000E

;----- DISICNT Bits -----------------------------------------------------
        .equiv  DISICNT, 0x0000
        .equiv  DISICNT_WIDTH, 0x000E
        .equiv  DISICNT_MASK, 0x3FFF

;----- INTCON1 Bits -----------------------------------------------------
        .equiv  INTCON1_OSCFAIL, 0x0001
        .equiv  INTCON1_OSCFAIL_WIDTH, 0x0001
        .equiv  INTCON1_OSCFAIL_MASK, 0x0002
        .equiv  OSCFAIL, 0x0001

        .equiv  INTCON1_STKERR, 0x0002
        .equiv  INTCON1_STKERR_WIDTH, 0x0001
        .equiv  INTCON1_STKERR_MASK, 0x0004
        .equiv  STKERR, 0x0002

        .equiv  INTCON1_ADDRERR, 0x0003
        .equiv  INTCON1_ADDRERR_WIDTH, 0x0001
        .equiv  INTCON1_ADDRERR_MASK, 0x0008
        .equiv  ADDRERR, 0x0003

        .equiv  INTCON1_MATHERR, 0x0004
        .equiv  INTCON1_MATHERR_WIDTH, 0x0001
        .equiv  INTCON1_MATHERR_MASK, 0x0010
        .equiv  MATHERR, 0x0004

        .equiv  INTCON1_COVTE, 0x0008
        .equiv  INTCON1_COVTE_WIDTH, 0x0001
        .equiv  INTCON1_COVTE_MASK, 0x0100
        .equiv  COVTE, 0x0008

        .equiv  INTCON1_OVBTE, 0x0009
        .equiv  INTCON1_OVBTE_WIDTH, 0x0001
        .equiv  INTCON1_OVBTE_MASK, 0x0200
        .equiv  OVBTE, 0x0009

        .equiv  INTCON1_OVATE, 0x000A
        .equiv  INTCON1_OVATE_WIDTH, 0x0001
        .equiv  INTCON1_OVATE_MASK, 0x0400
        .equiv  OVATE, 0x000A

        .equiv  INTCON1_NSTDIS, 0x000F
        .equiv  INTCON1_NSTDIS_WIDTH, 0x0001
        .equiv  INTCON1_NSTDIS_MASK, 0x8000
        .equiv  NSTDIS, 0x000F

;----- INTCON2 Bits -----------------------------------------------------
        .equiv  INTCON2_INT0EP, 0x0000
        .equiv  INTCON2_INT0EP_WIDTH, 0x0001
        .equiv  INTCON2_INT0EP_MASK, 0x0001
        .equiv  INT0EP, 0x0000

        .equiv  INTCON2_INT1EP, 0x0001
        .equiv  INTCON2_INT1EP_WIDTH, 0x0001
        .equiv  INTCON2_INT1EP_MASK, 0x0002
        .equiv  INT1EP, 0x0001

        .equiv  INTCON2_INT2EP, 0x0002
        .equiv  INTCON2_INT2EP_WIDTH, 0x0001
        .equiv  INTCON2_INT2EP_MASK, 0x0004
        .equiv  INT2EP, 0x0002

        .equiv  INTCON2_DISI, 0x000E
        .equiv  INTCON2_DISI_WIDTH, 0x0001
        .equiv  INTCON2_DISI_MASK, 0x4000
        .equiv  DISI, 0x000E

        .equiv  INTCON2_ALTIVT, 0x000F
        .equiv  INTCON2_ALTIVT_WIDTH, 0x0001
        .equiv  INTCON2_ALTIVT_MASK, 0x8000
        .equiv  ALTIVT, 0x000F

;----- IFS0 Bits -----------------------------------------------------
        .equiv  IFS0_INT0IF, 0x0000
        .equiv  IFS0_INT0IF_WIDTH, 0x0001
        .equiv  IFS0_INT0IF_MASK, 0x0001
        .equiv  INT0IF, 0x0000

        .equiv  IFS0_IC1IF, 0x0001
        .equiv  IFS0_IC1IF_WIDTH, 0x0001
        .equiv  IFS0_IC1IF_MASK, 0x0002
        .equiv  IC1IF, 0x0001

        .equiv  IFS0_OC1IF, 0x0002
        .equiv  IFS0_OC1IF_WIDTH, 0x0001
        .equiv  IFS0_OC1IF_MASK, 0x0004
        .equiv  OC1IF, 0x0002

        .equiv  IFS0_T1IF, 0x0003
        .equiv  IFS0_T1IF_WIDTH, 0x0001
        .equiv  IFS0_T1IF_MASK, 0x0008
        .equiv  T1IF, 0x0003

        .equiv  IFS0_IC2IF, 0x0004
        .equiv  IFS0_IC2IF_WIDTH, 0x0001
        .equiv  IFS0_IC2IF_MASK, 0x0010
        .equiv  IC2IF, 0x0004

        .equiv  IFS0_OC2IF, 0x0005
        .equiv  IFS0_OC2IF_WIDTH, 0x0001
        .equiv  IFS0_OC2IF_MASK, 0x0020
        .equiv  OC2IF, 0x0005

        .equiv  IFS0_T2IF, 0x0006
        .equiv  IFS0_T2IF_WIDTH, 0x0001
        .equiv  IFS0_T2IF_MASK, 0x0040
        .equiv  T2IF, 0x0006

        .equiv  IFS0_T3IF, 0x0007
        .equiv  IFS0_T3IF_WIDTH, 0x0001
        .equiv  IFS0_T3IF_MASK, 0x0080
        .equiv  T3IF, 0x0007

        .equiv  IFS0_SPI1IF, 0x0008
        .equiv  IFS0_SPI1IF_WIDTH, 0x0001
        .equiv  IFS0_SPI1IF_MASK, 0x0100
        .equiv  SPI1IF, 0x0008

        .equiv  IFS0_U1RXIF, 0x0009
        .equiv  IFS0_U1RXIF_WIDTH, 0x0001
        .equiv  IFS0_U1RXIF_MASK, 0x0200
        .equiv  U1RXIF, 0x0009

        .equiv  IFS0_U1TXIF, 0x000A
        .equiv  IFS0_U1TXIF_WIDTH, 0x0001
        .equiv  IFS0_U1TXIF_MASK, 0x0400
        .equiv  U1TXIF, 0x000A

        .equiv  IFS0_ADIF, 0x000B
        .equiv  IFS0_ADIF_WIDTH, 0x0001
        .equiv  IFS0_ADIF_MASK, 0x0800
        .equiv  ADIF, 0x000B

        .equiv  IFS0_NVMIF, 0x000C
        .equiv  IFS0_NVMIF_WIDTH, 0x0001
        .equiv  IFS0_NVMIF_MASK, 0x1000
        .equiv  NVMIF, 0x000C

        .equiv  IFS0_SI2CIF, 0x000D
        .equiv  IFS0_SI2CIF_WIDTH, 0x0001
        .equiv  IFS0_SI2CIF_MASK, 0x2000
        .equiv  SI2CIF, 0x000D

        .equiv  IFS0_MI2CIF, 0x000E
        .equiv  IFS0_MI2CIF_WIDTH, 0x0001
        .equiv  IFS0_MI2CIF_MASK, 0x4000
        .equiv  MI2CIF, 0x000E

        .equiv  IFS0_CNIF, 0x000F
        .equiv  IFS0_CNIF_WIDTH, 0x0001
        .equiv  IFS0_CNIF_MASK, 0x8000
        .equiv  CNIF, 0x000F

;----- IFS1 Bits -----------------------------------------------------
        .equiv  IFS1_INT1IF, 0x0000
        .equiv  IFS1_INT1IF_WIDTH, 0x0001
        .equiv  IFS1_INT1IF_MASK, 0x0001
        .equiv  INT1IF, 0x0000

        .equiv  IFS1_IC7IF, 0x0001
        .equiv  IFS1_IC7IF_WIDTH, 0x0001
        .equiv  IFS1_IC7IF_MASK, 0x0002
        .equiv  IC7IF, 0x0001

        .equiv  IFS1_IC8IF, 0x0002
        .equiv  IFS1_IC8IF_WIDTH, 0x0001
        .equiv  IFS1_IC8IF_MASK, 0x0004
        .equiv  IC8IF, 0x0002

        .equiv  IFS1_OC3IF, 0x0003
        .equiv  IFS1_OC3IF_WIDTH, 0x0001
        .equiv  IFS1_OC3IF_MASK, 0x0008
        .equiv  OC3IF, 0x0003

        .equiv  IFS1_OC4IF, 0x0004
        .equiv  IFS1_OC4IF_WIDTH, 0x0001
        .equiv  IFS1_OC4IF_MASK, 0x0010
        .equiv  OC4IF, 0x0004

        .equiv  IFS1_T4IF, 0x0005
        .equiv  IFS1_T4IF_WIDTH, 0x0001
        .equiv  IFS1_T4IF_MASK, 0x0020
        .equiv  T4IF, 0x0005

        .equiv  IFS1_T5IF, 0x0006
        .equiv  IFS1_T5IF_WIDTH, 0x0001
        .equiv  IFS1_T5IF_MASK, 0x0040
        .equiv  T5IF, 0x0006

        .equiv  IFS1_INT2IF, 0x0007
        .equiv  IFS1_INT2IF_WIDTH, 0x0001
        .equiv  IFS1_INT2IF_MASK, 0x0080
        .equiv  INT2IF, 0x0007

        .equiv  IFS1_U2RXIF, 0x0008
        .equiv  IFS1_U2RXIF_WIDTH, 0x0001
        .equiv  IFS1_U2RXIF_MASK, 0x0100
        .equiv  U2RXIF, 0x0008

        .equiv  IFS1_U2TXIF, 0x0009
        .equiv  IFS1_U2TXIF_WIDTH, 0x0001
        .equiv  IFS1_U2TXIF_MASK, 0x0200
        .equiv  U2TXIF, 0x0009

        .equiv  IFS1_C1IF, 0x000B
        .equiv  IFS1_C1IF_WIDTH, 0x0001
        .equiv  IFS1_C1IF_MASK, 0x0800
        .equiv  C1IF, 0x000B

;----- IFS2 Bits -----------------------------------------------------
        .equiv  IFS2_DCIIF, 0x0009
        .equiv  IFS2_DCIIF_WIDTH, 0x0001
        .equiv  IFS2_DCIIF_MASK, 0x0200
        .equiv  DCIIF, 0x0009

        .equiv  IFS2_LVDIF, 0x000A
        .equiv  IFS2_LVDIF_WIDTH, 0x0001
        .equiv  IFS2_LVDIF_MASK, 0x0400
        .equiv  LVDIF, 0x000A

;----- IEC0 Bits -----------------------------------------------------
        .equiv  IEC0_INT0IE, 0x0000
        .equiv  IEC0_INT0IE_WIDTH, 0x0001
        .equiv  IEC0_INT0IE_MASK, 0x0001
        .equiv  INT0IE, 0x0000

        .equiv  IEC0_IC1IE, 0x0001
        .equiv  IEC0_IC1IE_WIDTH, 0x0001
        .equiv  IEC0_IC1IE_MASK, 0x0002
        .equiv  IC1IE, 0x0001

        .equiv  IEC0_OC1IE, 0x0002
        .equiv  IEC0_OC1IE_WIDTH, 0x0001
        .equiv  IEC0_OC1IE_MASK, 0x0004
        .equiv  OC1IE, 0x0002

        .equiv  IEC0_T1IE, 0x0003
        .equiv  IEC0_T1IE_WIDTH, 0x0001
        .equiv  IEC0_T1IE_MASK, 0x0008
        .equiv  T1IE, 0x0003

        .equiv  IEC0_IC2IE, 0x0004
        .equiv  IEC0_IC2IE_WIDTH, 0x0001
        .equiv  IEC0_IC2IE_MASK, 0x0010
        .equiv  IC2IE, 0x0004

        .equiv  IEC0_OC2IE, 0x0005
        .equiv  IEC0_OC2IE_WIDTH, 0x0001
        .equiv  IEC0_OC2IE_MASK, 0x0020
        .equiv  OC2IE, 0x0005

        .equiv  IEC0_T2IE, 0x0006
        .equiv  IEC0_T2IE_WIDTH, 0x0001
        .equiv  IEC0_T2IE_MASK, 0x0040
        .equiv  T2IE, 0x0006

        .equiv  IEC0_T3IE, 0x0007
        .equiv  IEC0_T3IE_WIDTH, 0x0001
        .equiv  IEC0_T3IE_MASK, 0x0080
        .equiv  T3IE, 0x0007

        .equiv  IEC0_SPI1IE, 0x0008
        .equiv  IEC0_SPI1IE_WIDTH, 0x0001
        .equiv  IEC0_SPI1IE_MASK, 0x0100
        .equiv  SPI1IE, 0x0008

        .equiv  IEC0_U1RXIE, 0x0009
        .equiv  IEC0_U1RXIE_WIDTH, 0x0001
        .equiv  IEC0_U1RXIE_MASK, 0x0200
        .equiv  U1RXIE, 0x0009

        .equiv  IEC0_U1TXIE, 0x000A
        .equiv  IEC0_U1TXIE_WIDTH, 0x0001
        .equiv  IEC0_U1TXIE_MASK, 0x0400
        .equiv  U1TXIE, 0x000A

        .equiv  IEC0_ADIE, 0x000B
        .equiv  IEC0_ADIE_WIDTH, 0x0001
        .equiv  IEC0_ADIE_MASK, 0x0800
        .equiv  ADIE, 0x000B

        .equiv  IEC0_NVMIE, 0x000C
        .equiv  IEC0_NVMIE_WIDTH, 0x0001
        .equiv  IEC0_NVMIE_MASK, 0x1000
        .equiv  NVMIE, 0x000C

        .equiv  IEC0_SI2CIE, 0x000D
        .equiv  IEC0_SI2CIE_WIDTH, 0x0001
        .equiv  IEC0_SI2CIE_MASK, 0x2000
        .equiv  SI2CIE, 0x000D

        .equiv  IEC0_MI2CIE, 0x000E
        .equiv  IEC0_MI2CIE_WIDTH, 0x0001
        .equiv  IEC0_MI2CIE_MASK, 0x4000
        .equiv  MI2CIE, 0x000E

        .equiv  IEC0_CNIE, 0x000F
        .equiv  IEC0_CNIE_WIDTH, 0x0001
        .equiv  IEC0_CNIE_MASK, 0x8000
        .equiv  CNIE, 0x000F

;----- IEC1 Bits -----------------------------------------------------
        .equiv  IEC1_INT1IE, 0x0000
        .equiv  IEC1_INT1IE_WIDTH, 0x0001
        .equiv  IEC1_INT1IE_MASK, 0x0001
        .equiv  INT1IE, 0x0000

        .equiv  IEC1_IC7IE, 0x0001
        .equiv  IEC1_IC7IE_WIDTH, 0x0001
        .equiv  IEC1_IC7IE_MASK, 0x0002
        .equiv  IC7IE, 0x0001

        .equiv  IEC1_IC8IE, 0x0002
        .equiv  IEC1_IC8IE_WIDTH, 0x0001
        .equiv  IEC1_IC8IE_MASK, 0x0004
        .equiv  IC8IE, 0x0002

        .equiv  IEC1_OC3IE, 0x0003
        .equiv  IEC1_OC3IE_WIDTH, 0x0001
        .equiv  IEC1_OC3IE_MASK, 0x0008
        .equiv  OC3IE, 0x0003

        .equiv  IEC1_OC4IE, 0x0004
        .equiv  IEC1_OC4IE_WIDTH, 0x0001
        .equiv  IEC1_OC4IE_MASK, 0x0010
        .equiv  OC4IE, 0x0004

        .equiv  IEC1_T4IE, 0x0005
        .equiv  IEC1_T4IE_WIDTH, 0x0001
        .equiv  IEC1_T4IE_MASK, 0x0020
        .equiv  T4IE, 0x0005

        .equiv  IEC1_T5IE, 0x0006
        .equiv  IEC1_T5IE_WIDTH, 0x0001
        .equiv  IEC1_T5IE_MASK, 0x0040
        .equiv  T5IE, 0x0006

        .equiv  IEC1_INT2IE, 0x0007
        .equiv  IEC1_INT2IE_WIDTH, 0x0001
        .equiv  IEC1_INT2IE_MASK, 0x0080
        .equiv  INT2IE, 0x0007

        .equiv  IEC1_U2RXIE, 0x0008
        .equiv  IEC1_U2RXIE_WIDTH, 0x0001
        .equiv  IEC1_U2RXIE_MASK, 0x0100
        .equiv  U2RXIE, 0x0008

        .equiv  IEC1_U2TXIE, 0x0009
        .equiv  IEC1_U2TXIE_WIDTH, 0x0001
        .equiv  IEC1_U2TXIE_MASK, 0x0200
        .equiv  U2TXIE, 0x0009

        .equiv  IEC1_C1IE, 0x000B
        .equiv  IEC1_C1IE_WIDTH, 0x0001
        .equiv  IEC1_C1IE_MASK, 0x0800
        .equiv  C1IE, 0x000B

;----- IEC2 Bits -----------------------------------------------------
        .equiv  IEC2_DCIIE, 0x0009
        .equiv  IEC2_DCIIE_WIDTH, 0x0001
        .equiv  IEC2_DCIIE_MASK, 0x0200
        .equiv  DCIIE, 0x0009

        .equiv  IEC2_LVDIE, 0x000A
        .equiv  IEC2_LVDIE_WIDTH, 0x0001
        .equiv  IEC2_LVDIE_MASK, 0x0400
        .equiv  LVDIE, 0x000A

;----- IPC0 Bits -----------------------------------------------------
        .equiv  IPC0_INT0IP, 0x0000
        .equiv  IPC0_INT0IP_WIDTH, 0x0003
        .equiv  IPC0_INT0IP_MASK, 0x0007

        .equiv  IPC0_IC1IP, 0x0004
        .equiv  IPC0_IC1IP_WIDTH, 0x0003
        .equiv  IPC0_IC1IP_MASK, 0x0070

        .equiv  IPC0_OC1IP, 0x0008
        .equiv  IPC0_OC1IP_WIDTH, 0x0003
        .equiv  IPC0_OC1IP_MASK, 0x0700

        .equiv  IPC0_T1IP, 0x000C
        .equiv  IPC0_T1IP_WIDTH, 0x0003
        .equiv  IPC0_T1IP_MASK, 0x7000

        .equiv  IPC0_INT0IP0, 0x0000
        .equiv  IPC0_INT0IP0_WIDTH, 0x0001
        .equiv  IPC0_INT0IP0_MASK, 0x0001
        .equiv  INT0IP0, 0x0000

        .equiv  IPC0_INT0IP1, 0x0001
        .equiv  IPC0_INT0IP1_WIDTH, 0x0001
        .equiv  IPC0_INT0IP1_MASK, 0x0002
        .equiv  INT0IP1, 0x0001

        .equiv  IPC0_INT0IP2, 0x0002
        .equiv  IPC0_INT0IP2_WIDTH, 0x0001
        .equiv  IPC0_INT0IP2_MASK, 0x0004
        .equiv  INT0IP2, 0x0002

        .equiv  IPC0_IC1IP0, 0x0004
        .equiv  IPC0_IC1IP0_WIDTH, 0x0001
        .equiv  IPC0_IC1IP0_MASK, 0x0010
        .equiv  IC1IP0, 0x0004

        .equiv  IPC0_IC1IP1, 0x0005
        .equiv  IPC0_IC1IP1_WIDTH, 0x0001
        .equiv  IPC0_IC1IP1_MASK, 0x0020
        .equiv  IC1IP1, 0x0005

        .equiv  IPC0_IC1IP2, 0x0006
        .equiv  IPC0_IC1IP2_WIDTH, 0x0001
        .equiv  IPC0_IC1IP2_MASK, 0x0040
        .equiv  IC1IP2, 0x0006

        .equiv  IPC0_OC1IP0, 0x0008
        .equiv  IPC0_OC1IP0_WIDTH, 0x0001
        .equiv  IPC0_OC1IP0_MASK, 0x0100
        .equiv  OC1IP0, 0x0008

        .equiv  IPC0_OC1IP1, 0x0009
        .equiv  IPC0_OC1IP1_WIDTH, 0x0001
        .equiv  IPC0_OC1IP1_MASK, 0x0200
        .equiv  OC1IP1, 0x0009

        .equiv  IPC0_OC1IP2, 0x000A
        .equiv  IPC0_OC1IP2_WIDTH, 0x0001
        .equiv  IPC0_OC1IP2_MASK, 0x0400
        .equiv  OC1IP2, 0x000A

        .equiv  IPC0_T1IP0, 0x000C
        .equiv  IPC0_T1IP0_WIDTH, 0x0001
        .equiv  IPC0_T1IP0_MASK, 0x1000
        .equiv  T1IP0, 0x000C

        .equiv  IPC0_T1IP1, 0x000D
        .equiv  IPC0_T1IP1_WIDTH, 0x0001
        .equiv  IPC0_T1IP1_MASK, 0x2000
        .equiv  T1IP1, 0x000D

        .equiv  IPC0_T1IP2, 0x000E
        .equiv  IPC0_T1IP2_WIDTH, 0x0001
        .equiv  IPC0_T1IP2_MASK, 0x4000
        .equiv  T1IP2, 0x000E

;----- IPC1 Bits -----------------------------------------------------
        .equiv  IPC1_IC2IP, 0x0000
        .equiv  IPC1_IC2IP_WIDTH, 0x0003
        .equiv  IPC1_IC2IP_MASK, 0x0007

        .equiv  IPC1_OC2IP, 0x0004
        .equiv  IPC1_OC2IP_WIDTH, 0x0003
        .equiv  IPC1_OC2IP_MASK, 0x0070

        .equiv  IPC1_T2IP, 0x0008
        .equiv  IPC1_T2IP_WIDTH, 0x0003
        .equiv  IPC1_T2IP_MASK, 0x0700

        .equiv  IPC1_T3IP, 0x000C
        .equiv  IPC1_T3IP_WIDTH, 0x0003
        .equiv  IPC1_T3IP_MASK, 0x7000

        .equiv  IPC1_IC2IP0, 0x0000
        .equiv  IPC1_IC2IP0_WIDTH, 0x0001
        .equiv  IPC1_IC2IP0_MASK, 0x0001
        .equiv  IC2IP0, 0x0000

        .equiv  IPC1_IC2IP1, 0x0001
        .equiv  IPC1_IC2IP1_WIDTH, 0x0001
        .equiv  IPC1_IC2IP1_MASK, 0x0002
        .equiv  IC2IP1, 0x0001

        .equiv  IPC1_IC2IP2, 0x0002
        .equiv  IPC1_IC2IP2_WIDTH, 0x0001
        .equiv  IPC1_IC2IP2_MASK, 0x0004
        .equiv  IC2IP2, 0x0002

        .equiv  IPC1_OC2IP0, 0x0004
        .equiv  IPC1_OC2IP0_WIDTH, 0x0001
        .equiv  IPC1_OC2IP0_MASK, 0x0010
        .equiv  OC2IP0, 0x0004

        .equiv  IPC1_OC2IP1, 0x0005
        .equiv  IPC1_OC2IP1_WIDTH, 0x0001
        .equiv  IPC1_OC2IP1_MASK, 0x0020
        .equiv  OC2IP1, 0x0005

        .equiv  IPC1_OC2IP2, 0x0006
        .equiv  IPC1_OC2IP2_WIDTH, 0x0001
        .equiv  IPC1_OC2IP2_MASK, 0x0040
        .equiv  OC2IP2, 0x0006

        .equiv  IPC1_T2IP0, 0x0008
        .equiv  IPC1_T2IP0_WIDTH, 0x0001
        .equiv  IPC1_T2IP0_MASK, 0x0100
        .equiv  T2IP0, 0x0008

        .equiv  IPC1_T2IP1, 0x0009
        .equiv  IPC1_T2IP1_WIDTH, 0x0001
        .equiv  IPC1_T2IP1_MASK, 0x0200
        .equiv  T2IP1, 0x0009

        .equiv  IPC1_T2IP2, 0x000A
        .equiv  IPC1_T2IP2_WIDTH, 0x0001
        .equiv  IPC1_T2IP2_MASK, 0x0400
        .equiv  T2IP2, 0x000A

        .equiv  IPC1_T3IP0, 0x000C
        .equiv  IPC1_T3IP0_WIDTH, 0x0001
        .equiv  IPC1_T3IP0_MASK, 0x1000
        .equiv  T3IP0, 0x000C

        .equiv  IPC1_T3IP1, 0x000D
        .equiv  IPC1_T3IP1_WIDTH, 0x0001
        .equiv  IPC1_T3IP1_MASK, 0x2000
        .equiv  T3IP1, 0x000D

        .equiv  IPC1_T3IP2, 0x000E
        .equiv  IPC1_T3IP2_WIDTH, 0x0001
        .equiv  IPC1_T3IP2_MASK, 0x4000
        .equiv  T3IP2, 0x000E

;----- IPC2 Bits -----------------------------------------------------
        .equiv  IPC2_SPI1IP, 0x0000
        .equiv  IPC2_SPI1IP_WIDTH, 0x0003
        .equiv  IPC2_SPI1IP_MASK, 0x0007

        .equiv  IPC2_U1RXIP, 0x0004
        .equiv  IPC2_U1RXIP_WIDTH, 0x0003
        .equiv  IPC2_U1RXIP_MASK, 0x0070

        .equiv  IPC2_U1TXIP, 0x0008
        .equiv  IPC2_U1TXIP_WIDTH, 0x0003
        .equiv  IPC2_U1TXIP_MASK, 0x0700

        .equiv  IPC2_ADIP, 0x000C
        .equiv  IPC2_ADIP_WIDTH, 0x0003
        .equiv  IPC2_ADIP_MASK, 0x7000

        .equiv  IPC2_SPI1IP0, 0x0000
        .equiv  IPC2_SPI1IP0_WIDTH, 0x0001
        .equiv  IPC2_SPI1IP0_MASK, 0x0001
        .equiv  SPI1IP0, 0x0000

        .equiv  IPC2_SPI1IP1, 0x0001
        .equiv  IPC2_SPI1IP1_WIDTH, 0x0001
        .equiv  IPC2_SPI1IP1_MASK, 0x0002
        .equiv  SPI1IP1, 0x0001

        .equiv  IPC2_SPI1IP2, 0x0002
        .equiv  IPC2_SPI1IP2_WIDTH, 0x0001
        .equiv  IPC2_SPI1IP2_MASK, 0x0004
        .equiv  SPI1IP2, 0x0002

        .equiv  IPC2_U1RXIP0, 0x0004
        .equiv  IPC2_U1RXIP0_WIDTH, 0x0001
        .equiv  IPC2_U1RXIP0_MASK, 0x0010
        .equiv  U1RXIP0, 0x0004

        .equiv  IPC2_U1RXIP1, 0x0005
        .equiv  IPC2_U1RXIP1_WIDTH, 0x0001
        .equiv  IPC2_U1RXIP1_MASK, 0x0020
        .equiv  U1RXIP1, 0x0005

        .equiv  IPC2_U1RXIP2, 0x0006
        .equiv  IPC2_U1RXIP2_WIDTH, 0x0001
        .equiv  IPC2_U1RXIP2_MASK, 0x0040
        .equiv  U1RXIP2, 0x0006

        .equiv  IPC2_U1TXIP0, 0x0008
        .equiv  IPC2_U1TXIP0_WIDTH, 0x0001
        .equiv  IPC2_U1TXIP0_MASK, 0x0100
        .equiv  U1TXIP0, 0x0008

        .equiv  IPC2_U1TXIP1, 0x0009
        .equiv  IPC2_U1TXIP1_WIDTH, 0x0001
        .equiv  IPC2_U1TXIP1_MASK, 0x0200
        .equiv  U1TXIP1, 0x0009

        .equiv  IPC2_U1TXIP2, 0x000A
        .equiv  IPC2_U1TXIP2_WIDTH, 0x0001
        .equiv  IPC2_U1TXIP2_MASK, 0x0400
        .equiv  U1TXIP2, 0x000A

        .equiv  IPC2_ADIP0, 0x000C
        .equiv  IPC2_ADIP0_WIDTH, 0x0001
        .equiv  IPC2_ADIP0_MASK, 0x1000
        .equiv  ADIP0, 0x000C

        .equiv  IPC2_ADIP1, 0x000D
        .equiv  IPC2_ADIP1_WIDTH, 0x0001
        .equiv  IPC2_ADIP1_MASK, 0x2000
        .equiv  ADIP1, 0x000D

        .equiv  IPC2_ADIP2, 0x000E
        .equiv  IPC2_ADIP2_WIDTH, 0x0001
        .equiv  IPC2_ADIP2_MASK, 0x4000
        .equiv  ADIP2, 0x000E

;----- IPC3 Bits -----------------------------------------------------
        .equiv  IPC3_NVMIP, 0x0000
        .equiv  IPC3_NVMIP_WIDTH, 0x0003
        .equiv  IPC3_NVMIP_MASK, 0x0007

        .equiv  IPC3_SI2CIP, 0x0004
        .equiv  IPC3_SI2CIP_WIDTH, 0x0003
        .equiv  IPC3_SI2CIP_MASK, 0x0070

        .equiv  IPC3_MI2CIP, 0x0008
        .equiv  IPC3_MI2CIP_WIDTH, 0x0003
        .equiv  IPC3_MI2CIP_MASK, 0x0700

        .equiv  IPC3_CNIP, 0x000C
        .equiv  IPC3_CNIP_WIDTH, 0x0003
        .equiv  IPC3_CNIP_MASK, 0x7000

        .equiv  IPC3_NVMIP0, 0x0000
        .equiv  IPC3_NVMIP0_WIDTH, 0x0001
        .equiv  IPC3_NVMIP0_MASK, 0x0001
        .equiv  NVMIP0, 0x0000

        .equiv  IPC3_NVMIP1, 0x0001
        .equiv  IPC3_NVMIP1_WIDTH, 0x0001
        .equiv  IPC3_NVMIP1_MASK, 0x0002
        .equiv  NVMIP1, 0x0001

        .equiv  IPC3_NVMIP2, 0x0002
        .equiv  IPC3_NVMIP2_WIDTH, 0x0001
        .equiv  IPC3_NVMIP2_MASK, 0x0004
        .equiv  NVMIP2, 0x0002

        .equiv  IPC3_SI2CIP0, 0x0004
        .equiv  IPC3_SI2CIP0_WIDTH, 0x0001
        .equiv  IPC3_SI2CIP0_MASK, 0x0010
        .equiv  SI2CIP0, 0x0004

        .equiv  IPC3_SI2CIP1, 0x0005
        .equiv  IPC3_SI2CIP1_WIDTH, 0x0001
        .equiv  IPC3_SI2CIP1_MASK, 0x0020
        .equiv  SI2CIP1, 0x0005

        .equiv  IPC3_SI2CIP2, 0x0006
        .equiv  IPC3_SI2CIP2_WIDTH, 0x0001
        .equiv  IPC3_SI2CIP2_MASK, 0x0040
        .equiv  SI2CIP2, 0x0006

        .equiv  IPC3_MI2CIP0, 0x0008
        .equiv  IPC3_MI2CIP0_WIDTH, 0x0001
        .equiv  IPC3_MI2CIP0_MASK, 0x0100
        .equiv  MI2CIP0, 0x0008

        .equiv  IPC3_MI2CIP1, 0x0009
        .equiv  IPC3_MI2CIP1_WIDTH, 0x0001
        .equiv  IPC3_MI2CIP1_MASK, 0x0200
        .equiv  MI2CIP1, 0x0009

        .equiv  IPC3_MI2CIP2, 0x000A
        .equiv  IPC3_MI2CIP2_WIDTH, 0x0001
        .equiv  IPC3_MI2CIP2_MASK, 0x0400
        .equiv  MI2CIP2, 0x000A

        .equiv  IPC3_CNIP0, 0x000C
        .equiv  IPC3_CNIP0_WIDTH, 0x0001
        .equiv  IPC3_CNIP0_MASK, 0x1000
        .equiv  CNIP0, 0x000C

        .equiv  IPC3_CNIP1, 0x000D
        .equiv  IPC3_CNIP1_WIDTH, 0x0001
        .equiv  IPC3_CNIP1_MASK, 0x2000
        .equiv  CNIP1, 0x000D

        .equiv  IPC3_CNIP2, 0x000E
        .equiv  IPC3_CNIP2_WIDTH, 0x0001
        .equiv  IPC3_CNIP2_MASK, 0x4000
        .equiv  CNIP2, 0x000E

;----- IPC4 Bits -----------------------------------------------------
        .equiv  IPC4_INT1IP, 0x0000
        .equiv  IPC4_INT1IP_WIDTH, 0x0003
        .equiv  IPC4_INT1IP_MASK, 0x0007

        .equiv  IPC4_IC7IP, 0x0004
        .equiv  IPC4_IC7IP_WIDTH, 0x0003
        .equiv  IPC4_IC7IP_MASK, 0x0070

        .equiv  IPC4_IC8IP, 0x0008
        .equiv  IPC4_IC8IP_WIDTH, 0x0003
        .equiv  IPC4_IC8IP_MASK, 0x0700

        .equiv  IPC4_OC3IP, 0x000C
        .equiv  IPC4_OC3IP_WIDTH, 0x0003
        .equiv  IPC4_OC3IP_MASK, 0x7000

        .equiv  IPC4_INT1IP0, 0x0000
        .equiv  IPC4_INT1IP0_WIDTH, 0x0001
        .equiv  IPC4_INT1IP0_MASK, 0x0001
        .equiv  INT1IP0, 0x0000

        .equiv  IPC4_INT1IP1, 0x0001
        .equiv  IPC4_INT1IP1_WIDTH, 0x0001
        .equiv  IPC4_INT1IP1_MASK, 0x0002
        .equiv  INT1IP1, 0x0001

        .equiv  IPC4_INT1IP2, 0x0002
        .equiv  IPC4_INT1IP2_WIDTH, 0x0001
        .equiv  IPC4_INT1IP2_MASK, 0x0004
        .equiv  INT1IP2, 0x0002

        .equiv  IPC4_IC7IP0, 0x0004
        .equiv  IPC4_IC7IP0_WIDTH, 0x0001
        .equiv  IPC4_IC7IP0_MASK, 0x0010
        .equiv  IC7IP0, 0x0004

        .equiv  IPC4_IC7IP1, 0x0005
        .equiv  IPC4_IC7IP1_WIDTH, 0x0001
        .equiv  IPC4_IC7IP1_MASK, 0x0020
        .equiv  IC7IP1, 0x0005

        .equiv  IPC4_IC7IP2, 0x0006
        .equiv  IPC4_IC7IP2_WIDTH, 0x0001
        .equiv  IPC4_IC7IP2_MASK, 0x0040
        .equiv  IC7IP2, 0x0006

        .equiv  IPC4_IC8IP0, 0x0008
        .equiv  IPC4_IC8IP0_WIDTH, 0x0001
        .equiv  IPC4_IC8IP0_MASK, 0x0100
        .equiv  IC8IP0, 0x0008

        .equiv  IPC4_IC8IP1, 0x0009
        .equiv  IPC4_IC8IP1_WIDTH, 0x0001
        .equiv  IPC4_IC8IP1_MASK, 0x0200
        .equiv  IC8IP1, 0x0009

        .equiv  IPC4_IC8IP2, 0x000A
        .equiv  IPC4_IC8IP2_WIDTH, 0x0001
        .equiv  IPC4_IC8IP2_MASK, 0x0400
        .equiv  IC8IP2, 0x000A

        .equiv  IPC4_OC3IP0, 0x000C
        .equiv  IPC4_OC3IP0_WIDTH, 0x0001
        .equiv  IPC4_OC3IP0_MASK, 0x1000
        .equiv  OC3IP0, 0x000C

        .equiv  IPC4_OC3IP1, 0x000D
        .equiv  IPC4_OC3IP1_WIDTH, 0x0001
        .equiv  IPC4_OC3IP1_MASK, 0x2000
        .equiv  OC3IP1, 0x000D

        .equiv  IPC4_OC3IP2, 0x000E
        .equiv  IPC4_OC3IP2_WIDTH, 0x0001
        .equiv  IPC4_OC3IP2_MASK, 0x4000
        .equiv  OC3IP2, 0x000E

;----- IPC5 Bits -----------------------------------------------------
        .equiv  IPC5_OC4IP, 0x0000
        .equiv  IPC5_OC4IP_WIDTH, 0x0003
        .equiv  IPC5_OC4IP_MASK, 0x0007

        .equiv  IPC5_T4IP, 0x0004
        .equiv  IPC5_T4IP_WIDTH, 0x0003
        .equiv  IPC5_T4IP_MASK, 0x0070

        .equiv  IPC5_T5IP, 0x0008
        .equiv  IPC5_T5IP_WIDTH, 0x0003
        .equiv  IPC5_T5IP_MASK, 0x0700

        .equiv  IPC5_INT2IP, 0x000C
        .equiv  IPC5_INT2IP_WIDTH, 0x0003
        .equiv  IPC5_INT2IP_MASK, 0x7000

        .equiv  IPC5_OC4IP0, 0x0000
        .equiv  IPC5_OC4IP0_WIDTH, 0x0001
        .equiv  IPC5_OC4IP0_MASK, 0x0001
        .equiv  OC4IP0, 0x0000

        .equiv  IPC5_OC4IP1, 0x0001
        .equiv  IPC5_OC4IP1_WIDTH, 0x0001
        .equiv  IPC5_OC4IP1_MASK, 0x0002
        .equiv  OC4IP1, 0x0001

        .equiv  IPC5_OC4IP2, 0x0002
        .equiv  IPC5_OC4IP2_WIDTH, 0x0001
        .equiv  IPC5_OC4IP2_MASK, 0x0004
        .equiv  OC4IP2, 0x0002

        .equiv  IPC5_T4IP0, 0x0004
        .equiv  IPC5_T4IP0_WIDTH, 0x0001
        .equiv  IPC5_T4IP0_MASK, 0x0010
        .equiv  T4IP0, 0x0004

        .equiv  IPC5_T4IP1, 0x0005
        .equiv  IPC5_T4IP1_WIDTH, 0x0001
        .equiv  IPC5_T4IP1_MASK, 0x0020
        .equiv  T4IP1, 0x0005

        .equiv  IPC5_T4IP2, 0x0006
        .equiv  IPC5_T4IP2_WIDTH, 0x0001
        .equiv  IPC5_T4IP2_MASK, 0x0040
        .equiv  T4IP2, 0x0006

        .equiv  IPC5_T5IP0, 0x0008
        .equiv  IPC5_T5IP0_WIDTH, 0x0001
        .equiv  IPC5_T5IP0_MASK, 0x0100
        .equiv  T5IP0, 0x0008

        .equiv  IPC5_T5IP1, 0x0009
        .equiv  IPC5_T5IP1_WIDTH, 0x0001
        .equiv  IPC5_T5IP1_MASK, 0x0200
        .equiv  T5IP1, 0x0009

        .equiv  IPC5_T5IP2, 0x000A
        .equiv  IPC5_T5IP2_WIDTH, 0x0001
        .equiv  IPC5_T5IP2_MASK, 0x0400
        .equiv  T5IP2, 0x000A

        .equiv  IPC5_INT2IP0, 0x000C
        .equiv  IPC5_INT2IP0_WIDTH, 0x0001
        .equiv  IPC5_INT2IP0_MASK, 0x1000
        .equiv  INT2IP0, 0x000C

        .equiv  IPC5_INT2IP1, 0x000D
        .equiv  IPC5_INT2IP1_WIDTH, 0x0001
        .equiv  IPC5_INT2IP1_MASK, 0x2000
        .equiv  INT2IP1, 0x000D

        .equiv  IPC5_INT2IP2, 0x000E
        .equiv  IPC5_INT2IP2_WIDTH, 0x0001
        .equiv  IPC5_INT2IP2_MASK, 0x4000
        .equiv  INT2IP2, 0x000E

;----- IPC6 Bits -----------------------------------------------------
        .equiv  IPC6_U2RXIP, 0x0000
        .equiv  IPC6_U2RXIP_WIDTH, 0x0003
        .equiv  IPC6_U2RXIP_MASK, 0x0007

        .equiv  IPC6_U2TXIP, 0x0004
        .equiv  IPC6_U2TXIP_WIDTH, 0x0003
        .equiv  IPC6_U2TXIP_MASK, 0x0070

        .equiv  IPC6_C1IP, 0x000C
        .equiv  IPC6_C1IP_WIDTH, 0x0003
        .equiv  IPC6_C1IP_MASK, 0x7000

        .equiv  IPC6_U2RXIP0, 0x0000
        .equiv  IPC6_U2RXIP0_WIDTH, 0x0001
        .equiv  IPC6_U2RXIP0_MASK, 0x0001
        .equiv  U2RXIP0, 0x0000

        .equiv  IPC6_U2RXIP1, 0x0001
        .equiv  IPC6_U2RXIP1_WIDTH, 0x0001
        .equiv  IPC6_U2RXIP1_MASK, 0x0002
        .equiv  U2RXIP1, 0x0001

        .equiv  IPC6_U2RXIP2, 0x0002
        .equiv  IPC6_U2RXIP2_WIDTH, 0x0001
        .equiv  IPC6_U2RXIP2_MASK, 0x0004
        .equiv  U2RXIP2, 0x0002

        .equiv  IPC6_U2TXIP0, 0x0004
        .equiv  IPC6_U2TXIP0_WIDTH, 0x0001
        .equiv  IPC6_U2TXIP0_MASK, 0x0010
        .equiv  U2TXIP0, 0x0004

        .equiv  IPC6_U2TXIP1, 0x0005
        .equiv  IPC6_U2TXIP1_WIDTH, 0x0001
        .equiv  IPC6_U2TXIP1_MASK, 0x0020
        .equiv  U2TXIP1, 0x0005

        .equiv  IPC6_U2TXIP2, 0x0006
        .equiv  IPC6_U2TXIP2_WIDTH, 0x0001
        .equiv  IPC6_U2TXIP2_MASK, 0x0040
        .equiv  U2TXIP2, 0x0006

        .equiv  IPC6_C1IP0, 0x000C
        .equiv  IPC6_C1IP0_WIDTH, 0x0001
        .equiv  IPC6_C1IP0_MASK, 0x1000
        .equiv  C1IP0, 0x000C

        .equiv  IPC6_C1IP1, 0x000D
        .equiv  IPC6_C1IP1_WIDTH, 0x0001
        .equiv  IPC6_C1IP1_MASK, 0x2000
        .equiv  C1IP1, 0x000D

        .equiv  IPC6_C1IP2, 0x000E
        .equiv  IPC6_C1IP2_WIDTH, 0x0001
        .equiv  IPC6_C1IP2_MASK, 0x4000
        .equiv  C1IP2, 0x000E

;----- IPC10 Bits -----------------------------------------------------
        .equiv  IPC10_DCIIP, 0x0004
        .equiv  IPC10_DCIIP_WIDTH, 0x0003
        .equiv  IPC10_DCIIP_MASK, 0x0070

        .equiv  IPC10_LVDIP, 0x0008
        .equiv  IPC10_LVDIP_WIDTH, 0x0003
        .equiv  IPC10_LVDIP_MASK, 0x0700

        .equiv  IPC10_DCIIP0, 0x0004
        .equiv  IPC10_DCIIP0_WIDTH, 0x0001
        .equiv  IPC10_DCIIP0_MASK, 0x0010
        .equiv  DCIIP0, 0x0004

        .equiv  IPC10_DCIIP1, 0x0005
        .equiv  IPC10_DCIIP1_WIDTH, 0x0001
        .equiv  IPC10_DCIIP1_MASK, 0x0020
        .equiv  DCIIP1, 0x0005

        .equiv  IPC10_DCIIP2, 0x0006
        .equiv  IPC10_DCIIP2_WIDTH, 0x0001
        .equiv  IPC10_DCIIP2_MASK, 0x0040
        .equiv  DCIIP2, 0x0006

        .equiv  IPC10_LVDIP0, 0x0008
        .equiv  IPC10_LVDIP0_WIDTH, 0x0001
        .equiv  IPC10_LVDIP0_MASK, 0x0100
        .equiv  LVDIP0, 0x0008

        .equiv  IPC10_LVDIP1, 0x0009
        .equiv  IPC10_LVDIP1_WIDTH, 0x0001
        .equiv  IPC10_LVDIP1_MASK, 0x0200
        .equiv  LVDIP1, 0x0009

        .equiv  IPC10_LVDIP2, 0x000A
        .equiv  IPC10_LVDIP2_WIDTH, 0x0001
        .equiv  IPC10_LVDIP2_MASK, 0x0400
        .equiv  LVDIP2, 0x000A

;----- INTTREG Bits -----------------------------------------------------
        .equiv  INTTREG_VECNUM, 0x0000
        .equiv  INTTREG_VECNUM_WIDTH, 0x0006
        .equiv  INTTREG_VECNUM_MASK, 0x003F

        .equiv  INTTREG_ILR, 0x0008
        .equiv  INTTREG_ILR_WIDTH, 0x0004
        .equiv  INTTREG_ILR_MASK, 0x0F00

        .equiv  INTTREG_VHOLD, 0x000D
        .equiv  INTTREG_VHOLD_WIDTH, 0x0001
        .equiv  INTTREG_VHOLD_MASK, 0x2000
        .equiv  VHOLD, 0x000D

        .equiv  INTTREG_TMODE, 0x000E
        .equiv  INTTREG_TMODE_WIDTH, 0x0001
        .equiv  INTTREG_TMODE_MASK, 0x4000
        .equiv  TMODE, 0x000E

        .equiv  INTTREG_IRQTOCPU, 0x000F
        .equiv  INTTREG_IRQTOCPU_WIDTH, 0x0001
        .equiv  INTTREG_IRQTOCPU_MASK, 0x8000
        .equiv  IRQTOCPU, 0x000F

        .equiv  INTTREG_VECNUM0, 0x0000
        .equiv  INTTREG_VECNUM0_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM0_MASK, 0x0001
        .equiv  VECNUM0, 0x0000

        .equiv  INTTREG_VECNUM1, 0x0001
        .equiv  INTTREG_VECNUM1_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM1_MASK, 0x0002
        .equiv  VECNUM1, 0x0001

        .equiv  INTTREG_VECNUM2, 0x0002
        .equiv  INTTREG_VECNUM2_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM2_MASK, 0x0004
        .equiv  VECNUM2, 0x0002

        .equiv  INTTREG_VECNUM3, 0x0003
        .equiv  INTTREG_VECNUM3_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM3_MASK, 0x0008
        .equiv  VECNUM3, 0x0003

        .equiv  INTTREG_VECNUM4, 0x0004
        .equiv  INTTREG_VECNUM4_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM4_MASK, 0x0010
        .equiv  VECNUM4, 0x0004

        .equiv  INTTREG_VECNUM5, 0x0005
        .equiv  INTTREG_VECNUM5_WIDTH, 0x0001
        .equiv  INTTREG_VECNUM5_MASK, 0x0020
        .equiv  VECNUM5, 0x0005

        .equiv  INTTREG_ILR0, 0x0008
        .equiv  INTTREG_ILR0_WIDTH, 0x0001
        .equiv  INTTREG_ILR0_MASK, 0x0100
        .equiv  ILR0, 0x0008

        .equiv  INTTREG_ILR1, 0x0009
        .equiv  INTTREG_ILR1_WIDTH, 0x0001
        .equiv  INTTREG_ILR1_MASK, 0x0200
        .equiv  ILR1, 0x0009

        .equiv  INTTREG_ILR2, 0x000A
        .equiv  INTTREG_ILR2_WIDTH, 0x0001
        .equiv  INTTREG_ILR2_MASK, 0x0400
        .equiv  ILR2, 0x000A

        .equiv  INTTREG_ILR3, 0x000B
        .equiv  INTTREG_ILR3_WIDTH, 0x0001
        .equiv  INTTREG_ILR3_MASK, 0x0800
        .equiv  ILR3, 0x000B

;----- CNEN1 Bits -----------------------------------------------------
        .equiv  CNEN1_CN0IE, 0x0000
        .equiv  CNEN1_CN0IE_WIDTH, 0x0001
        .equiv  CNEN1_CN0IE_MASK, 0x0001
        .equiv  CN0IE, 0x0000

        .equiv  CNEN1_CN1IE, 0x0001
        .equiv  CNEN1_CN1IE_WIDTH, 0x0001
        .equiv  CNEN1_CN1IE_MASK, 0x0002
        .equiv  CN1IE, 0x0001

        .equiv  CNEN1_CN2IE, 0x0002
        .equiv  CNEN1_CN2IE_WIDTH, 0x0001
        .equiv  CNEN1_CN2IE_MASK, 0x0004
        .equiv  CN2IE, 0x0002

        .equiv  CNEN1_CN3IE, 0x0003
        .equiv  CNEN1_CN3IE_WIDTH, 0x0001
        .equiv  CNEN1_CN3IE_MASK, 0x0008
        .equiv  CN3IE, 0x0003

        .equiv  CNEN1_CN4IE, 0x0004
        .equiv  CNEN1_CN4IE_WIDTH, 0x0001
        .equiv  CNEN1_CN4IE_MASK, 0x0010
        .equiv  CN4IE, 0x0004

        .equiv  CNEN1_CN5IE, 0x0005
        .equiv  CNEN1_CN5IE_WIDTH, 0x0001
        .equiv  CNEN1_CN5IE_MASK, 0x0020
        .equiv  CN5IE, 0x0005

        .equiv  CNEN1_CN6IE, 0x0006
        .equiv  CNEN1_CN6IE_WIDTH, 0x0001
        .equiv  CNEN1_CN6IE_MASK, 0x0040
        .equiv  CN6IE, 0x0006

        .equiv  CNEN1_CN7IE, 0x0007
        .equiv  CNEN1_CN7IE_WIDTH, 0x0001
        .equiv  CNEN1_CN7IE_MASK, 0x0080
        .equiv  CN7IE, 0x0007

;----- CNEN2 Bits -----------------------------------------------------
        .equiv  CNEN2_CN17IE, 0x0001
        .equiv  CNEN2_CN17IE_WIDTH, 0x0001
        .equiv  CNEN2_CN17IE_MASK, 0x0002
        .equiv  CN17IE, 0x0001

        .equiv  CNEN2_CN18IE, 0x0002
        .equiv  CNEN2_CN18IE_WIDTH, 0x0001
        .equiv  CNEN2_CN18IE_MASK, 0x0004
        .equiv  CN18IE, 0x0002

;----- CNPU1 Bits -----------------------------------------------------
        .equiv  CNPU1_CN0PUE, 0x0000
        .equiv  CNPU1_CN0PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN0PUE_MASK, 0x0001
        .equiv  CN0PUE, 0x0000

        .equiv  CNPU1_CN1PUE, 0x0001
        .equiv  CNPU1_CN1PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN1PUE_MASK, 0x0002
        .equiv  CN1PUE, 0x0001

        .equiv  CNPU1_CN2PUE, 0x0002
        .equiv  CNPU1_CN2PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN2PUE_MASK, 0x0004
        .equiv  CN2PUE, 0x0002

        .equiv  CNPU1_CN3PUE, 0x0003
        .equiv  CNPU1_CN3PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN3PUE_MASK, 0x0008
        .equiv  CN3PUE, 0x0003

        .equiv  CNPU1_CN4PUE, 0x0004
        .equiv  CNPU1_CN4PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN4PUE_MASK, 0x0010
        .equiv  CN4PUE, 0x0004

        .equiv  CNPU1_CN5PUE, 0x0005
        .equiv  CNPU1_CN5PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN5PUE_MASK, 0x0020
        .equiv  CN5PUE, 0x0005

        .equiv  CNPU1_CN6PUE, 0x0006
        .equiv  CNPU1_CN6PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN6PUE_MASK, 0x0040
        .equiv  CN6PUE, 0x0006

        .equiv  CNPU1_CN7PUE, 0x0007
        .equiv  CNPU1_CN7PUE_WIDTH, 0x0001
        .equiv  CNPU1_CN7PUE_MASK, 0x0080
        .equiv  CN7PUE, 0x0007

;----- CNPU2 Bits -----------------------------------------------------
        .equiv  CNPU2_CN17PUE, 0x0001
        .equiv  CNPU2_CN17PUE_WIDTH, 0x0001
        .equiv  CNPU2_CN17PUE_MASK, 0x0002
        .equiv  CN17PUE, 0x0001

        .equiv  CNPU2_CN18PUE, 0x0002
        .equiv  CNPU2_CN18PUE_WIDTH, 0x0001
        .equiv  CNPU2_CN18PUE_MASK, 0x0004
        .equiv  CN18PUE, 0x0002

;----- T1CON Bits -----------------------------------------------------
        .equiv  T1CON_TCS, 0x0001
        .equiv  T1CON_TCS_WIDTH, 0x0001
        .equiv  T1CON_TCS_MASK, 0x0002
        .equiv  TCS, 0x0001

        .equiv  T1CON_TSYNC, 0x0002
        .equiv  T1CON_TSYNC_WIDTH, 0x0001
        .equiv  T1CON_TSYNC_MASK, 0x0004
        .equiv  TSYNC, 0x0002

        .equiv  T1CON_TCKPS, 0x0004
        .equiv  T1CON_TCKPS_WIDTH, 0x0002
        .equiv  T1CON_TCKPS_MASK, 0x0030

        .equiv  T1CON_TGATE, 0x0006
        .equiv  T1CON_TGATE_WIDTH, 0x0001
        .equiv  T1CON_TGATE_MASK, 0x0040
        .equiv  TGATE, 0x0006

        .equiv  T1CON_TSIDL, 0x000D
        .equiv  T1CON_TSIDL_WIDTH, 0x0001
        .equiv  T1CON_TSIDL_MASK, 0x2000
        .equiv  TSIDL, 0x000D

        .equiv  T1CON_TON, 0x000F
        .equiv  T1CON_TON_WIDTH, 0x0001
        .equiv  T1CON_TON_MASK, 0x8000
        .equiv  TON, 0x000F

        .equiv  T1CON_TCKPS0, 0x0004
        .equiv  T1CON_TCKPS0_WIDTH, 0x0001
        .equiv  T1CON_TCKPS0_MASK, 0x0010
        .equiv  TCKPS0, 0x0004

        .equiv  T1CON_TCKPS1, 0x0005
        .equiv  T1CON_TCKPS1_WIDTH, 0x0001
        .equiv  T1CON_TCKPS1_MASK, 0x0020
        .equiv  TCKPS1, 0x0005

;----- T2CON Bits -----------------------------------------------------
        .equiv  T2CON_TCS, 0x0001
        .equiv  T2CON_TCS_WIDTH, 0x0001
        .equiv  T2CON_TCS_MASK, 0x0002

        .equiv  T2CON_T32, 0x0003
        .equiv  T2CON_T32_WIDTH, 0x0001
        .equiv  T2CON_T32_MASK, 0x0008
        .equiv  T32, 0x0003

        .equiv  T2CON_TCKPS, 0x0004
        .equiv  T2CON_TCKPS_WIDTH, 0x0002
        .equiv  T2CON_TCKPS_MASK, 0x0030

        .equiv  T2CON_TGATE, 0x0006
        .equiv  T2CON_TGATE_WIDTH, 0x0001
        .equiv  T2CON_TGATE_MASK, 0x0040

        .equiv  T2CON_TSIDL, 0x000D
        .equiv  T2CON_TSIDL_WIDTH, 0x0001
        .equiv  T2CON_TSIDL_MASK, 0x2000

        .equiv  T2CON_TON, 0x000F
        .equiv  T2CON_TON_WIDTH, 0x0001
        .equiv  T2CON_TON_MASK, 0x8000

        .equiv  T2CON_TCKPS0, 0x0004
        .equiv  T2CON_TCKPS0_WIDTH, 0x0001
        .equiv  T2CON_TCKPS0_MASK, 0x0010

        .equiv  T2CON_TCKPS1, 0x0005
        .equiv  T2CON_TCKPS1_WIDTH, 0x0001
        .equiv  T2CON_TCKPS1_MASK, 0x0020

;----- T3CON Bits -----------------------------------------------------
        .equiv  T3CON_TCS, 0x0001
        .equiv  T3CON_TCS_WIDTH, 0x0001
        .equiv  T3CON_TCS_MASK, 0x0002

        .equiv  T3CON_TCKPS, 0x0004
        .equiv  T3CON_TCKPS_WIDTH, 0x0002
        .equiv  T3CON_TCKPS_MASK, 0x0030

        .equiv  T3CON_TGATE, 0x0006
        .equiv  T3CON_TGATE_WIDTH, 0x0001
        .equiv  T3CON_TGATE_MASK, 0x0040

        .equiv  T3CON_TSIDL, 0x000D
        .equiv  T3CON_TSIDL_WIDTH, 0x0001
        .equiv  T3CON_TSIDL_MASK, 0x2000

        .equiv  T3CON_TON, 0x000F
        .equiv  T3CON_TON_WIDTH, 0x0001
        .equiv  T3CON_TON_MASK, 0x8000

        .equiv  T3CON_TCKPS0, 0x0004
        .equiv  T3CON_TCKPS0_WIDTH, 0x0001
        .equiv  T3CON_TCKPS0_MASK, 0x0010

        .equiv  T3CON_TCKPS1, 0x0005
        .equiv  T3CON_TCKPS1_WIDTH, 0x0001
        .equiv  T3CON_TCKPS1_MASK, 0x0020

;----- T4CON Bits -----------------------------------------------------
        .equiv  T4CON_TCS, 0x0001
        .equiv  T4CON_TCS_WIDTH, 0x0001
        .equiv  T4CON_TCS_MASK, 0x0002

        .equiv  T4CON_T32, 0x0003
        .equiv  T4CON_T32_WIDTH, 0x0001
        .equiv  T4CON_T32_MASK, 0x0008

        .equiv  T4CON_TCKPS, 0x0004
        .equiv  T4CON_TCKPS_WIDTH, 0x0002
        .equiv  T4CON_TCKPS_MASK, 0x0030

        .equiv  T4CON_TGATE, 0x0006
        .equiv  T4CON_TGATE_WIDTH, 0x0001
        .equiv  T4CON_TGATE_MASK, 0x0040

        .equiv  T4CON_TSIDL, 0x000D
        .equiv  T4CON_TSIDL_WIDTH, 0x0001
        .equiv  T4CON_TSIDL_MASK, 0x2000

        .equiv  T4CON_TON, 0x000F
        .equiv  T4CON_TON_WIDTH, 0x0001
        .equiv  T4CON_TON_MASK, 0x8000

        .equiv  T4CON_TCKPS0, 0x0004
        .equiv  T4CON_TCKPS0_WIDTH, 0x0001
        .equiv  T4CON_TCKPS0_MASK, 0x0010

        .equiv  T4CON_TCKPS1, 0x0005
        .equiv  T4CON_TCKPS1_WIDTH, 0x0001
        .equiv  T4CON_TCKPS1_MASK, 0x0020

;----- T5CON Bits -----------------------------------------------------
        .equiv  T5CON_TCS, 0x0001
        .equiv  T5CON_TCS_WIDTH, 0x0001
        .equiv  T5CON_TCS_MASK, 0x0002

        .equiv  T5CON_TCKPS, 0x0004
        .equiv  T5CON_TCKPS_WIDTH, 0x0002
        .equiv  T5CON_TCKPS_MASK, 0x0030

        .equiv  T5CON_TGATE, 0x0006
        .equiv  T5CON_TGATE_WIDTH, 0x0001
        .equiv  T5CON_TGATE_MASK, 0x0040

        .equiv  T5CON_TSIDL, 0x000D
        .equiv  T5CON_TSIDL_WIDTH, 0x0001
        .equiv  T5CON_TSIDL_MASK, 0x2000

        .equiv  T5CON_TON, 0x000F
        .equiv  T5CON_TON_WIDTH, 0x0001
        .equiv  T5CON_TON_MASK, 0x8000

        .equiv  T5CON_TCKPS0, 0x0004
        .equiv  T5CON_TCKPS0_WIDTH, 0x0001
        .equiv  T5CON_TCKPS0_MASK, 0x0010

        .equiv  T5CON_TCKPS1, 0x0005
        .equiv  T5CON_TCKPS1_WIDTH, 0x0001
        .equiv  T5CON_TCKPS1_MASK, 0x0020

;----- IC1CON Bits -----------------------------------------------------
        .equiv  IC1CON_ICM, 0x0000
        .equiv  IC1CON_ICM_WIDTH, 0x0003
        .equiv  IC1CON_ICM_MASK, 0x0007

        .equiv  IC1CON_ICBNE, 0x0003
        .equiv  IC1CON_ICBNE_WIDTH, 0x0001
        .equiv  IC1CON_ICBNE_MASK, 0x0008
        .equiv  ICBNE, 0x0003

        .equiv  IC1CON_ICOV, 0x0004
        .equiv  IC1CON_ICOV_WIDTH, 0x0001
        .equiv  IC1CON_ICOV_MASK, 0x0010
        .equiv  ICOV, 0x0004

        .equiv  IC1CON_ICI, 0x0005
        .equiv  IC1CON_ICI_WIDTH, 0x0002
        .equiv  IC1CON_ICI_MASK, 0x0060

        .equiv  IC1CON_ICTMR, 0x0007
        .equiv  IC1CON_ICTMR_WIDTH, 0x0001
        .equiv  IC1CON_ICTMR_MASK, 0x0080
        .equiv  ICTMR, 0x0007

        .equiv  IC1CON_ICSIDL, 0x000D
        .equiv  IC1CON_ICSIDL_WIDTH, 0x0001
        .equiv  IC1CON_ICSIDL_MASK, 0x2000
        .equiv  ICSIDL, 0x000D

        .equiv  IC1CON_ICM0, 0x0000
        .equiv  IC1CON_ICM0_WIDTH, 0x0001
        .equiv  IC1CON_ICM0_MASK, 0x0001
        .equiv  ICM0, 0x0000

        .equiv  IC1CON_ICM1, 0x0001
        .equiv  IC1CON_ICM1_WIDTH, 0x0001
        .equiv  IC1CON_ICM1_MASK, 0x0002
        .equiv  ICM1, 0x0001

        .equiv  IC1CON_ICM2, 0x0002
        .equiv  IC1CON_ICM2_WIDTH, 0x0001
        .equiv  IC1CON_ICM2_MASK, 0x0004
        .equiv  ICM2, 0x0002

        .equiv  IC1CON_ICI0, 0x0005
        .equiv  IC1CON_ICI0_WIDTH, 0x0001
        .equiv  IC1CON_ICI0_MASK, 0x0020
        .equiv  ICI0, 0x0005

        .equiv  IC1CON_ICI1, 0x0006
        .equiv  IC1CON_ICI1_WIDTH, 0x0001
        .equiv  IC1CON_ICI1_MASK, 0x0040
        .equiv  ICI1, 0x0006

;----- IC2CON Bits -----------------------------------------------------
        .equiv  IC2CON_ICM, 0x0000
        .equiv  IC2CON_ICM_WIDTH, 0x0003
        .equiv  IC2CON_ICM_MASK, 0x0007

        .equiv  IC2CON_ICBNE, 0x0003
        .equiv  IC2CON_ICBNE_WIDTH, 0x0001
        .equiv  IC2CON_ICBNE_MASK, 0x0008

        .equiv  IC2CON_ICOV, 0x0004
        .equiv  IC2CON_ICOV_WIDTH, 0x0001
        .equiv  IC2CON_ICOV_MASK, 0x0010

        .equiv  IC2CON_ICI, 0x0005
        .equiv  IC2CON_ICI_WIDTH, 0x0002
        .equiv  IC2CON_ICI_MASK, 0x0060

        .equiv  IC2CON_ICTMR, 0x0007
        .equiv  IC2CON_ICTMR_WIDTH, 0x0001
        .equiv  IC2CON_ICTMR_MASK, 0x0080

        .equiv  IC2CON_ICSIDL, 0x000D
        .equiv  IC2CON_ICSIDL_WIDTH, 0x0001
        .equiv  IC2CON_ICSIDL_MASK, 0x2000

        .equiv  IC2CON_ICM0, 0x0000
        .equiv  IC2CON_ICM0_WIDTH, 0x0001
        .equiv  IC2CON_ICM0_MASK, 0x0001

        .equiv  IC2CON_ICM1, 0x0001
        .equiv  IC2CON_ICM1_WIDTH, 0x0001
        .equiv  IC2CON_ICM1_MASK, 0x0002

        .equiv  IC2CON_ICM2, 0x0002
        .equiv  IC2CON_ICM2_WIDTH, 0x0001
        .equiv  IC2CON_ICM2_MASK, 0x0004

        .equiv  IC2CON_ICI0, 0x0005
        .equiv  IC2CON_ICI0_WIDTH, 0x0001
        .equiv  IC2CON_ICI0_MASK, 0x0020

        .equiv  IC2CON_ICI1, 0x0006
        .equiv  IC2CON_ICI1_WIDTH, 0x0001
        .equiv  IC2CON_ICI1_MASK, 0x0040

;----- IC7CON Bits -----------------------------------------------------
        .equiv  IC7CON_ICM, 0x0000
        .equiv  IC7CON_ICM_WIDTH, 0x0003
        .equiv  IC7CON_ICM_MASK, 0x0007

        .equiv  IC7CON_ICBNE, 0x0003
        .equiv  IC7CON_ICBNE_WIDTH, 0x0001
        .equiv  IC7CON_ICBNE_MASK, 0x0008

        .equiv  IC7CON_ICOV, 0x0004
        .equiv  IC7CON_ICOV_WIDTH, 0x0001
        .equiv  IC7CON_ICOV_MASK, 0x0010

        .equiv  IC7CON_ICI, 0x0005
        .equiv  IC7CON_ICI_WIDTH, 0x0002
        .equiv  IC7CON_ICI_MASK, 0x0060

        .equiv  IC7CON_ICTMR, 0x0007
        .equiv  IC7CON_ICTMR_WIDTH, 0x0001
        .equiv  IC7CON_ICTMR_MASK, 0x0080

        .equiv  IC7CON_ICSIDL, 0x000D
        .equiv  IC7CON_ICSIDL_WIDTH, 0x0001
        .equiv  IC7CON_ICSIDL_MASK, 0x2000

        .equiv  IC7CON_ICM0, 0x0000
        .equiv  IC7CON_ICM0_WIDTH, 0x0001
        .equiv  IC7CON_ICM0_MASK, 0x0001

        .equiv  IC7CON_ICM1, 0x0001
        .equiv  IC7CON_ICM1_WIDTH, 0x0001
        .equiv  IC7CON_ICM1_MASK, 0x0002

        .equiv  IC7CON_ICM2, 0x0002
        .equiv  IC7CON_ICM2_WIDTH, 0x0001
        .equiv  IC7CON_ICM2_MASK, 0x0004

        .equiv  IC7CON_ICI0, 0x0005
        .equiv  IC7CON_ICI0_WIDTH, 0x0001
        .equiv  IC7CON_ICI0_MASK, 0x0020

        .equiv  IC7CON_ICI1, 0x0006
        .equiv  IC7CON_ICI1_WIDTH, 0x0001
        .equiv  IC7CON_ICI1_MASK, 0x0040

;----- IC8CON Bits -----------------------------------------------------
        .equiv  IC8CON_ICM, 0x0000
        .equiv  IC8CON_ICM_WIDTH, 0x0003
        .equiv  IC8CON_ICM_MASK, 0x0007

        .equiv  IC8CON_ICBNE, 0x0003
        .equiv  IC8CON_ICBNE_WIDTH, 0x0001
        .equiv  IC8CON_ICBNE_MASK, 0x0008

        .equiv  IC8CON_ICOV, 0x0004
        .equiv  IC8CON_ICOV_WIDTH, 0x0001
        .equiv  IC8CON_ICOV_MASK, 0x0010

        .equiv  IC8CON_ICI, 0x0005
        .equiv  IC8CON_ICI_WIDTH, 0x0002
        .equiv  IC8CON_ICI_MASK, 0x0060

        .equiv  IC8CON_ICTMR, 0x0007
        .equiv  IC8CON_ICTMR_WIDTH, 0x0001
        .equiv  IC8CON_ICTMR_MASK, 0x0080

        .equiv  IC8CON_ICSIDL, 0x000D
        .equiv  IC8CON_ICSIDL_WIDTH, 0x0001
        .equiv  IC8CON_ICSIDL_MASK, 0x2000

        .equiv  IC8CON_ICM0, 0x0000
        .equiv  IC8CON_ICM0_WIDTH, 0x0001
        .equiv  IC8CON_ICM0_MASK, 0x0001

        .equiv  IC8CON_ICM1, 0x0001
        .equiv  IC8CON_ICM1_WIDTH, 0x0001
        .equiv  IC8CON_ICM1_MASK, 0x0002

        .equiv  IC8CON_ICM2, 0x0002
        .equiv  IC8CON_ICM2_WIDTH, 0x0001
        .equiv  IC8CON_ICM2_MASK, 0x0004

        .equiv  IC8CON_ICI0, 0x0005
        .equiv  IC8CON_ICI0_WIDTH, 0x0001
        .equiv  IC8CON_ICI0_MASK, 0x0020

        .equiv  IC8CON_ICI1, 0x0006
        .equiv  IC8CON_ICI1_WIDTH, 0x0001
        .equiv  IC8CON_ICI1_MASK, 0x0040

;----- OC1CON Bits -----------------------------------------------------
        .equiv  OC1CON_OCM, 0x0000
        .equiv  OC1CON_OCM_WIDTH, 0x0003
        .equiv  OC1CON_OCM_MASK, 0x0007

        .equiv  OC1CON_OCTSEL, 0x0003
        .equiv  OC1CON_OCTSEL_WIDTH, 0x0001
        .equiv  OC1CON_OCTSEL_MASK, 0x0008
        .equiv  OCTSEL, 0x0003

        .equiv  OC1CON_OCFLT, 0x0004
        .equiv  OC1CON_OCFLT_WIDTH, 0x0001
        .equiv  OC1CON_OCFLT_MASK, 0x0010
        .equiv  OCFLT, 0x0004

        .equiv  OC1CON_OCSIDL, 0x000D
        .equiv  OC1CON_OCSIDL_WIDTH, 0x0001
        .equiv  OC1CON_OCSIDL_MASK, 0x2000
        .equiv  OCSIDL, 0x000D

        .equiv  OC1CON_OCM0, 0x0000
        .equiv  OC1CON_OCM0_WIDTH, 0x0001
        .equiv  OC1CON_OCM0_MASK, 0x0001
        .equiv  OCM0, 0x0000

        .equiv  OC1CON_OCM1, 0x0001
        .equiv  OC1CON_OCM1_WIDTH, 0x0001
        .equiv  OC1CON_OCM1_MASK, 0x0002
        .equiv  OCM1, 0x0001

        .equiv  OC1CON_OCM2, 0x0002
        .equiv  OC1CON_OCM2_WIDTH, 0x0001
        .equiv  OC1CON_OCM2_MASK, 0x0004
        .equiv  OCM2, 0x0002

;----- OC2CON Bits -----------------------------------------------------
        .equiv  OC2CON_OCM, 0x0000
        .equiv  OC2CON_OCM_WIDTH, 0x0003
        .equiv  OC2CON_OCM_MASK, 0x0007

        .equiv  OC2CON_OCTSEL, 0x0003
        .equiv  OC2CON_OCTSEL_WIDTH, 0x0001
        .equiv  OC2CON_OCTSEL_MASK, 0x0008

        .equiv  OC2CON_OCFLT, 0x0004
        .equiv  OC2CON_OCFLT_WIDTH, 0x0001
        .equiv  OC2CON_OCFLT_MASK, 0x0010

        .equiv  OC2CON_OCSIDL, 0x000D
        .equiv  OC2CON_OCSIDL_WIDTH, 0x0001
        .equiv  OC2CON_OCSIDL_MASK, 0x2000

        .equiv  OC2CON_OCM0, 0x0000
        .equiv  OC2CON_OCM0_WIDTH, 0x0001
        .equiv  OC2CON_OCM0_MASK, 0x0001

        .equiv  OC2CON_OCM1, 0x0001
        .equiv  OC2CON_OCM1_WIDTH, 0x0001
        .equiv  OC2CON_OCM1_MASK, 0x0002

        .equiv  OC2CON_OCM2, 0x0002
        .equiv  OC2CON_OCM2_WIDTH, 0x0001
        .equiv  OC2CON_OCM2_MASK, 0x0004

;----- OC3CON Bits -----------------------------------------------------
        .equiv  OC3CON_OCM, 0x0000
        .equiv  OC3CON_OCM_WIDTH, 0x0003
        .equiv  OC3CON_OCM_MASK, 0x0007

        .equiv  OC3CON_OCTSEL, 0x0003
        .equiv  OC3CON_OCTSEL_WIDTH, 0x0001
        .equiv  OC3CON_OCTSEL_MASK, 0x0008

        .equiv  OC3CON_OCFLT, 0x0004
        .equiv  OC3CON_OCFLT_WIDTH, 0x0001
        .equiv  OC3CON_OCFLT_MASK, 0x0010

        .equiv  OC3CON_OCSIDL, 0x000D
        .equiv  OC3CON_OCSIDL_WIDTH, 0x0001
        .equiv  OC3CON_OCSIDL_MASK, 0x2000

        .equiv  OC3CON_OCM0, 0x0000
        .equiv  OC3CON_OCM0_WIDTH, 0x0001
        .equiv  OC3CON_OCM0_MASK, 0x0001

        .equiv  OC3CON_OCM1, 0x0001
        .equiv  OC3CON_OCM1_WIDTH, 0x0001
        .equiv  OC3CON_OCM1_MASK, 0x0002

        .equiv  OC3CON_OCM2, 0x0002
        .equiv  OC3CON_OCM2_WIDTH, 0x0001
        .equiv  OC3CON_OCM2_MASK, 0x0004

;----- OC4CON Bits -----------------------------------------------------
        .equiv  OC4CON_OCM, 0x0000
        .equiv  OC4CON_OCM_WIDTH, 0x0003
        .equiv  OC4CON_OCM_MASK, 0x0007

        .equiv  OC4CON_OCTSEL, 0x0003
        .equiv  OC4CON_OCTSEL_WIDTH, 0x0001
        .equiv  OC4CON_OCTSEL_MASK, 0x0008

        .equiv  OC4CON_OCFLT, 0x0004
        .equiv  OC4CON_OCFLT_WIDTH, 0x0001
        .equiv  OC4CON_OCFLT_MASK, 0x0010

        .equiv  OC4CON_OCSIDL, 0x000D
        .equiv  OC4CON_OCSIDL_WIDTH, 0x0001
        .equiv  OC4CON_OCSIDL_MASK, 0x2000

        .equiv  OC4CON_OCM0, 0x0000
        .equiv  OC4CON_OCM0_WIDTH, 0x0001
        .equiv  OC4CON_OCM0_MASK, 0x0001

        .equiv  OC4CON_OCM1, 0x0001
        .equiv  OC4CON_OCM1_WIDTH, 0x0001
        .equiv  OC4CON_OCM1_MASK, 0x0002

        .equiv  OC4CON_OCM2, 0x0002
        .equiv  OC4CON_OCM2_WIDTH, 0x0001
        .equiv  OC4CON_OCM2_MASK, 0x0004

;----- I2CRCV Bits -----------------------------------------------------
        .equiv  I2CRCV, 0x0000
        .equiv  I2CRCV_WIDTH, 0x0008
        .equiv  I2CRCV_MASK, 0x00FF

        .equiv  I2CRCV_I2CRCV0, 0x0000
        .equiv  I2CRCV_I2CRCV0_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV0_MASK, 0x0001
        .equiv  I2CRCV0, 0x0000

        .equiv  I2CRCV_I2CRCV1, 0x0001
        .equiv  I2CRCV_I2CRCV1_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV1_MASK, 0x0002
        .equiv  I2CRCV1, 0x0001

        .equiv  I2CRCV_I2CRCV2, 0x0002
        .equiv  I2CRCV_I2CRCV2_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV2_MASK, 0x0004
        .equiv  I2CRCV2, 0x0002

        .equiv  I2CRCV_I2CRCV3, 0x0003
        .equiv  I2CRCV_I2CRCV3_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV3_MASK, 0x0008
        .equiv  I2CRCV3, 0x0003

        .equiv  I2CRCV_I2CRCV4, 0x0004
        .equiv  I2CRCV_I2CRCV4_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV4_MASK, 0x0010
        .equiv  I2CRCV4, 0x0004

        .equiv  I2CRCV_I2CRCV5, 0x0005
        .equiv  I2CRCV_I2CRCV5_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV5_MASK, 0x0020
        .equiv  I2CRCV5, 0x0005

        .equiv  I2CRCV_I2CRCV6, 0x0006
        .equiv  I2CRCV_I2CRCV6_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV6_MASK, 0x0040
        .equiv  I2CRCV6, 0x0006

        .equiv  I2CRCV_I2CRCV7, 0x0007
        .equiv  I2CRCV_I2CRCV7_WIDTH, 0x0001
        .equiv  I2CRCV_I2CRCV7_MASK, 0x0080
        .equiv  I2CRCV7, 0x0007

;----- I2CTRN Bits -----------------------------------------------------
        .equiv  I2CTRN, 0x0000
        .equiv  I2CTRN_WIDTH, 0x0008
        .equiv  I2CTRN_MASK, 0x00FF

        .equiv  I2CTRN_I2CTRN0, 0x0000
        .equiv  I2CTRN_I2CTRN0_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN0_MASK, 0x0001
        .equiv  I2CTRN0, 0x0000

        .equiv  I2CTRN_I2CTRN1, 0x0001
        .equiv  I2CTRN_I2CTRN1_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN1_MASK, 0x0002
        .equiv  I2CTRN1, 0x0001

        .equiv  I2CTRN_I2CTRN2, 0x0002
        .equiv  I2CTRN_I2CTRN2_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN2_MASK, 0x0004
        .equiv  I2CTRN2, 0x0002

        .equiv  I2CTRN_I2CTRN3, 0x0003
        .equiv  I2CTRN_I2CTRN3_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN3_MASK, 0x0008
        .equiv  I2CTRN3, 0x0003

        .equiv  I2CTRN_I2CTRN4, 0x0004
        .equiv  I2CTRN_I2CTRN4_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN4_MASK, 0x0010
        .equiv  I2CTRN4, 0x0004

        .equiv  I2CTRN_I2CTRN5, 0x0005
        .equiv  I2CTRN_I2CTRN5_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN5_MASK, 0x0020
        .equiv  I2CTRN5, 0x0005

        .equiv  I2CTRN_I2CTRN6, 0x0006
        .equiv  I2CTRN_I2CTRN6_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN6_MASK, 0x0040
        .equiv  I2CTRN6, 0x0006

        .equiv  I2CTRN_I2CTRN7, 0x0007
        .equiv  I2CTRN_I2CTRN7_WIDTH, 0x0001
        .equiv  I2CTRN_I2CTRN7_MASK, 0x0080
        .equiv  I2CTRN7, 0x0007

;----- I2CBRG Bits -----------------------------------------------------
        .equiv  I2CBRG, 0x0000
        .equiv  I2CBRG_WIDTH, 0x0009
        .equiv  I2CBRG_MASK, 0x01FF

;----- I2CCON Bits -----------------------------------------------------
        .equiv  I2CCON_SEN, 0x0000
        .equiv  I2CCON_SEN_WIDTH, 0x0001
        .equiv  I2CCON_SEN_MASK, 0x0001
        .equiv  SEN, 0x0000

        .equiv  I2CCON_RSEN, 0x0001
        .equiv  I2CCON_RSEN_WIDTH, 0x0001
        .equiv  I2CCON_RSEN_MASK, 0x0002
        .equiv  RSEN, 0x0001

        .equiv  I2CCON_PEN, 0x0002
        .equiv  I2CCON_PEN_WIDTH, 0x0001
        .equiv  I2CCON_PEN_MASK, 0x0004
        .equiv  PEN, 0x0002

        .equiv  I2CCON_RCEN, 0x0003
        .equiv  I2CCON_RCEN_WIDTH, 0x0001
        .equiv  I2CCON_RCEN_MASK, 0x0008
        .equiv  RCEN, 0x0003

        .equiv  I2CCON_ACKEN, 0x0004
        .equiv  I2CCON_ACKEN_WIDTH, 0x0001
        .equiv  I2CCON_ACKEN_MASK, 0x0010
        .equiv  ACKEN, 0x0004

        .equiv  I2CCON_ACKDT, 0x0005
        .equiv  I2CCON_ACKDT_WIDTH, 0x0001
        .equiv  I2CCON_ACKDT_MASK, 0x0020
        .equiv  ACKDT, 0x0005

        .equiv  I2CCON_STREN, 0x0006
        .equiv  I2CCON_STREN_WIDTH, 0x0001
        .equiv  I2CCON_STREN_MASK, 0x0040
        .equiv  STREN, 0x0006

        .equiv  I2CCON_GCEN, 0x0007
        .equiv  I2CCON_GCEN_WIDTH, 0x0001
        .equiv  I2CCON_GCEN_MASK, 0x0080
        .equiv  GCEN, 0x0007

        .equiv  I2CCON_SMEN, 0x0008
        .equiv  I2CCON_SMEN_WIDTH, 0x0001
        .equiv  I2CCON_SMEN_MASK, 0x0100
        .equiv  SMEN, 0x0008

        .equiv  I2CCON_DISSLW, 0x0009
        .equiv  I2CCON_DISSLW_WIDTH, 0x0001
        .equiv  I2CCON_DISSLW_MASK, 0x0200
        .equiv  DISSLW, 0x0009

        .equiv  I2CCON_A10M, 0x000A
        .equiv  I2CCON_A10M_WIDTH, 0x0001
        .equiv  I2CCON_A10M_MASK, 0x0400
        .equiv  A10M, 0x000A

        .equiv  I2CCON_IPMIEN, 0x000B
        .equiv  I2CCON_IPMIEN_WIDTH, 0x0001
        .equiv  I2CCON_IPMIEN_MASK, 0x0800
        .equiv  IPMIEN, 0x000B

        .equiv  I2CCON_SCLREL, 0x000C
        .equiv  I2CCON_SCLREL_WIDTH, 0x0001
        .equiv  I2CCON_SCLREL_MASK, 0x1000
        .equiv  SCLREL, 0x000C

        .equiv  I2CCON_I2CSIDL, 0x000D
        .equiv  I2CCON_I2CSIDL_WIDTH, 0x0001
        .equiv  I2CCON_I2CSIDL_MASK, 0x2000
        .equiv  I2CSIDL, 0x000D

        .equiv  I2CCON_I2CEN, 0x000F
        .equiv  I2CCON_I2CEN_WIDTH, 0x0001
        .equiv  I2CCON_I2CEN_MASK, 0x8000
        .equiv  I2CEN, 0x000F

;----- I2CSTAT Bits -----------------------------------------------------
        .equiv  I2CSTAT_TBF, 0x0000
        .equiv  I2CSTAT_TBF_WIDTH, 0x0001
        .equiv  I2CSTAT_TBF_MASK, 0x0001
        .equiv  TBF, 0x0000

        .equiv  I2CSTAT_RBF, 0x0001
        .equiv  I2CSTAT_RBF_WIDTH, 0x0001
        .equiv  I2CSTAT_RBF_MASK, 0x0002
        .equiv  RBF, 0x0001

        .equiv  I2CSTAT_R_NOT_W, 0x0002
        .equiv  I2CSTAT_R_NOT_W_WIDTH, 0x0001
        .equiv  I2CSTAT_R_NOT_W_MASK, 0x0004
        .equiv  R_NOT_W, 0x0002

        .equiv  I2CSTAT_S, 0x0003
        .equiv  I2CSTAT_S_WIDTH, 0x0001
        .equiv  I2CSTAT_S_MASK, 0x0008
        .equiv  S, 0x0003

        .equiv  I2CSTAT_P, 0x0004
        .equiv  I2CSTAT_P_WIDTH, 0x0001
        .equiv  I2CSTAT_P_MASK, 0x0010
        .equiv  P, 0x0004

        .equiv  I2CSTAT_D_NOT_A, 0x0005
        .equiv  I2CSTAT_D_NOT_A_WIDTH, 0x0001
        .equiv  I2CSTAT_D_NOT_A_MASK, 0x0020
        .equiv  D_NOT_A, 0x0005

        .equiv  I2CSTAT_I2COV, 0x0006
        .equiv  I2CSTAT_I2COV_WIDTH, 0x0001
        .equiv  I2CSTAT_I2COV_MASK, 0x0040
        .equiv  I2COV, 0x0006

        .equiv  I2CSTAT_IWCOL, 0x0007
        .equiv  I2CSTAT_IWCOL_WIDTH, 0x0001
        .equiv  I2CSTAT_IWCOL_MASK, 0x0080
        .equiv  IWCOL, 0x0007

        .equiv  I2CSTAT_ADD10, 0x0008
        .equiv  I2CSTAT_ADD10_WIDTH, 0x0001
        .equiv  I2CSTAT_ADD10_MASK, 0x0100
        .equiv  ADD10, 0x0008

        .equiv  I2CSTAT_GCSTAT, 0x0009
        .equiv  I2CSTAT_GCSTAT_WIDTH, 0x0001
        .equiv  I2CSTAT_GCSTAT_MASK, 0x0200
        .equiv  GCSTAT, 0x0009

        .equiv  I2CSTAT_BCL, 0x000A
        .equiv  I2CSTAT_BCL_WIDTH, 0x0001
        .equiv  I2CSTAT_BCL_MASK, 0x0400
        .equiv  BCL, 0x000A

        .equiv  I2CSTAT_TRSTAT, 0x000E
        .equiv  I2CSTAT_TRSTAT_WIDTH, 0x0001
        .equiv  I2CSTAT_TRSTAT_MASK, 0x4000
        .equiv  TRSTAT, 0x000E

        .equiv  I2CSTAT_ACKSTAT, 0x000F
        .equiv  I2CSTAT_ACKSTAT_WIDTH, 0x0001
        .equiv  I2CSTAT_ACKSTAT_MASK, 0x8000
        .equiv  ACKSTAT, 0x000F

        .equiv  I2CSTAT_R_W, 0x0002
        .equiv  I2CSTAT_R_W_WIDTH, 0x0001
        .equiv  I2CSTAT_R_W_MASK, 0x0004
        .equiv  R_W, 0x0002

        .equiv  I2CSTAT_D_A, 0x0005
        .equiv  I2CSTAT_D_A_WIDTH, 0x0001
        .equiv  I2CSTAT_D_A_MASK, 0x0020
        .equiv  D_A, 0x0005

;----- I2CADD Bits -----------------------------------------------------
        .equiv  I2CADD, 0x0000
        .equiv  I2CADD_WIDTH, 0x000A
        .equiv  I2CADD_MASK, 0x03FF

;----- U1MODE Bits -----------------------------------------------------
        .equiv  U1MODE_STSEL, 0x0000
        .equiv  U1MODE_STSEL_WIDTH, 0x0001
        .equiv  U1MODE_STSEL_MASK, 0x0001
        .equiv  STSEL, 0x0000

        .equiv  U1MODE_PDSEL, 0x0001
        .equiv  U1MODE_PDSEL_WIDTH, 0x0002
        .equiv  U1MODE_PDSEL_MASK, 0x0006

        .equiv  U1MODE_ABAUD, 0x0005
        .equiv  U1MODE_ABAUD_WIDTH, 0x0001
        .equiv  U1MODE_ABAUD_MASK, 0x0020
        .equiv  ABAUD, 0x0005

        .equiv  U1MODE_LPBACK, 0x0006
        .equiv  U1MODE_LPBACK_WIDTH, 0x0001
        .equiv  U1MODE_LPBACK_MASK, 0x0040
        .equiv  LPBACK, 0x0006

        .equiv  U1MODE_WAKE, 0x0007
        .equiv  U1MODE_WAKE_WIDTH, 0x0001
        .equiv  U1MODE_WAKE_MASK, 0x0080
        .equiv  WAKE, 0x0007

        .equiv  U1MODE_ALTIO, 0x000A
        .equiv  U1MODE_ALTIO_WIDTH, 0x0001
        .equiv  U1MODE_ALTIO_MASK, 0x0400
        .equiv  ALTIO, 0x000A

        .equiv  U1MODE_USIDL, 0x000D
        .equiv  U1MODE_USIDL_WIDTH, 0x0001
        .equiv  U1MODE_USIDL_MASK, 0x2000
        .equiv  USIDL, 0x000D

        .equiv  U1MODE_UARTEN, 0x000F
        .equiv  U1MODE_UARTEN_WIDTH, 0x0001
        .equiv  U1MODE_UARTEN_MASK, 0x8000
        .equiv  UARTEN, 0x000F

;----- U1STA Bits -----------------------------------------------------
        .equiv  U1STA_URXDA, 0x0000
        .equiv  U1STA_URXDA_WIDTH, 0x0001
        .equiv  U1STA_URXDA_MASK, 0x0001
        .equiv  URXDA, 0x0000

        .equiv  U1STA_OERR, 0x0001
        .equiv  U1STA_OERR_WIDTH, 0x0001
        .equiv  U1STA_OERR_MASK, 0x0002
        .equiv  OERR, 0x0001

        .equiv  U1STA_FERR, 0x0002
        .equiv  U1STA_FERR_WIDTH, 0x0001
        .equiv  U1STA_FERR_MASK, 0x0004
        .equiv  FERR, 0x0002

        .equiv  U1STA_PERR, 0x0003
        .equiv  U1STA_PERR_WIDTH, 0x0001
        .equiv  U1STA_PERR_MASK, 0x0008
        .equiv  PERR, 0x0003

        .equiv  U1STA_RIDLE, 0x0004
        .equiv  U1STA_RIDLE_WIDTH, 0x0001
        .equiv  U1STA_RIDLE_MASK, 0x0010
        .equiv  RIDLE, 0x0004

        .equiv  U1STA_ADDEN, 0x0005
        .equiv  U1STA_ADDEN_WIDTH, 0x0001
        .equiv  U1STA_ADDEN_MASK, 0x0020
        .equiv  ADDEN, 0x0005

        .equiv  U1STA_URXISEL, 0x0006
        .equiv  U1STA_URXISEL_WIDTH, 0x0002
        .equiv  U1STA_URXISEL_MASK, 0x00C0

        .equiv  U1STA_TRMT, 0x0008
        .equiv  U1STA_TRMT_WIDTH, 0x0001
        .equiv  U1STA_TRMT_MASK, 0x0100
        .equiv  TRMT, 0x0008

        .equiv  U1STA_UTXBF, 0x0009
        .equiv  U1STA_UTXBF_WIDTH, 0x0001
        .equiv  U1STA_UTXBF_MASK, 0x0200
        .equiv  UTXBF, 0x0009

        .equiv  U1STA_UTXEN, 0x000A
        .equiv  U1STA_UTXEN_WIDTH, 0x0001
        .equiv  U1STA_UTXEN_MASK, 0x0400
        .equiv  UTXEN, 0x000A

        .equiv  U1STA_UTXBRK, 0x000B
        .equiv  U1STA_UTXBRK_WIDTH, 0x0001
        .equiv  U1STA_UTXBRK_MASK, 0x0800
        .equiv  UTXBRK, 0x000B

        .equiv  U1STA_UTXISEL, 0x000F
        .equiv  U1STA_UTXISEL_WIDTH, 0x0001
        .equiv  U1STA_UTXISEL_MASK, 0x8000
        .equiv  UTXISEL, 0x000F

;----- U1TXREG Bits -----------------------------------------------------
        .equiv  U1TXREG_UTXREG0, 0x0000
        .equiv  U1TXREG_UTXREG0_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG0_MASK, 0x0001
        .equiv  UTXREG0, 0x0000

        .equiv  U1TXREG_UTXREG1, 0x0001
        .equiv  U1TXREG_UTXREG1_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG1_MASK, 0x0002
        .equiv  UTXREG1, 0x0001

        .equiv  U1TXREG_UTXREG2, 0x0002
        .equiv  U1TXREG_UTXREG2_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG2_MASK, 0x0004
        .equiv  UTXREG2, 0x0002

        .equiv  U1TXREG_UTXREG3, 0x0003
        .equiv  U1TXREG_UTXREG3_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG3_MASK, 0x0008
        .equiv  UTXREG3, 0x0003

        .equiv  U1TXREG_UTXREG4, 0x0004
        .equiv  U1TXREG_UTXREG4_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG4_MASK, 0x0010
        .equiv  UTXREG4, 0x0004

        .equiv  U1TXREG_UTXREG5, 0x0005
        .equiv  U1TXREG_UTXREG5_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG5_MASK, 0x0020
        .equiv  UTXREG5, 0x0005

        .equiv  U1TXREG_UTXREG6, 0x0006
        .equiv  U1TXREG_UTXREG6_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG6_MASK, 0x0040
        .equiv  UTXREG6, 0x0006

        .equiv  U1TXREG_UTXREG7, 0x0007
        .equiv  U1TXREG_UTXREG7_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG7_MASK, 0x0080
        .equiv  UTXREG7, 0x0007

        .equiv  U1TXREG_UTXREG8, 0x0008
        .equiv  U1TXREG_UTXREG8_WIDTH, 0x0001
        .equiv  U1TXREG_UTXREG8_MASK, 0x0100
        .equiv  UTXREG8, 0x0008

        .equiv  U1TXREG_UTX8, 0x0008
        .equiv  U1TXREG_UTX8_WIDTH, 0x0001
        .equiv  U1TXREG_UTX8_MASK, 0x0100
        .equiv  UTX8, 0x0008

;----- U1RXREG Bits -----------------------------------------------------
        .equiv  U1RXREG_URXREG0, 0x0000
        .equiv  U1RXREG_URXREG0_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG0_MASK, 0x0001
        .equiv  URXREG0, 0x0000

        .equiv  U1RXREG_URXREG1, 0x0001
        .equiv  U1RXREG_URXREG1_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG1_MASK, 0x0002
        .equiv  URXREG1, 0x0001

        .equiv  U1RXREG_URXREG2, 0x0002
        .equiv  U1RXREG_URXREG2_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG2_MASK, 0x0004
        .equiv  URXREG2, 0x0002

        .equiv  U1RXREG_URXREG3, 0x0003
        .equiv  U1RXREG_URXREG3_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG3_MASK, 0x0008
        .equiv  URXREG3, 0x0003

        .equiv  U1RXREG_URXREG4, 0x0004
        .equiv  U1RXREG_URXREG4_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG4_MASK, 0x0010
        .equiv  URXREG4, 0x0004

        .equiv  U1RXREG_URXREG5, 0x0005
        .equiv  U1RXREG_URXREG5_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG5_MASK, 0x0020
        .equiv  URXREG5, 0x0005

        .equiv  U1RXREG_URXREG6, 0x0006
        .equiv  U1RXREG_URXREG6_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG6_MASK, 0x0040
        .equiv  URXREG6, 0x0006

        .equiv  U1RXREG_URXREG7, 0x0007
        .equiv  U1RXREG_URXREG7_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG7_MASK, 0x0080
        .equiv  URXREG7, 0x0007

        .equiv  U1RXREG_URXREG8, 0x0008
        .equiv  U1RXREG_URXREG8_WIDTH, 0x0001
        .equiv  U1RXREG_URXREG8_MASK, 0x0100
        .equiv  URXREG8, 0x0008

        .equiv  U1RXREG_URX8, 0x0008
        .equiv  U1RXREG_URX8_WIDTH, 0x0001
        .equiv  U1RXREG_URX8_MASK, 0x0100
        .equiv  URX8, 0x0008

;----- U2MODE Bits -----------------------------------------------------
        .equiv  U2MODE_STSEL, 0x0000
        .equiv  U2MODE_STSEL_WIDTH, 0x0001
        .equiv  U2MODE_STSEL_MASK, 0x0001

        .equiv  U2MODE_PDSEL, 0x0001
        .equiv  U2MODE_PDSEL_WIDTH, 0x0002
        .equiv  U2MODE_PDSEL_MASK, 0x0006

        .equiv  U2MODE_ABAUD, 0x0005
        .equiv  U2MODE_ABAUD_WIDTH, 0x0001
        .equiv  U2MODE_ABAUD_MASK, 0x0020

        .equiv  U2MODE_LPBACK, 0x0006
        .equiv  U2MODE_LPBACK_WIDTH, 0x0001
        .equiv  U2MODE_LPBACK_MASK, 0x0040

        .equiv  U2MODE_WAKE, 0x0007
        .equiv  U2MODE_WAKE_WIDTH, 0x0001
        .equiv  U2MODE_WAKE_MASK, 0x0080

        .equiv  U2MODE_USIDL, 0x000D
        .equiv  U2MODE_USIDL_WIDTH, 0x0001
        .equiv  U2MODE_USIDL_MASK, 0x2000

        .equiv  U2MODE_UARTEN, 0x000F
        .equiv  U2MODE_UARTEN_WIDTH, 0x0001
        .equiv  U2MODE_UARTEN_MASK, 0x8000

        .equiv  U2MODE_PDSEL0, 0x0001
        .equiv  U2MODE_PDSEL0_WIDTH, 0x0001
        .equiv  U2MODE_PDSEL0_MASK, 0x0002
        .equiv  PDSEL0, 0x0001

        .equiv  U2MODE_PDSEL1, 0x0002
        .equiv  U2MODE_PDSEL1_WIDTH, 0x0001
        .equiv  U2MODE_PDSEL1_MASK, 0x0004
        .equiv  PDSEL1, 0x0002

;----- U2STA Bits -----------------------------------------------------
        .equiv  U2STA_URXDA, 0x0000
        .equiv  U2STA_URXDA_WIDTH, 0x0001
        .equiv  U2STA_URXDA_MASK, 0x0001

        .equiv  U2STA_OERR, 0x0001
        .equiv  U2STA_OERR_WIDTH, 0x0001
        .equiv  U2STA_OERR_MASK, 0x0002

        .equiv  U2STA_FERR, 0x0002
        .equiv  U2STA_FERR_WIDTH, 0x0001
        .equiv  U2STA_FERR_MASK, 0x0004

        .equiv  U2STA_PERR, 0x0003
        .equiv  U2STA_PERR_WIDTH, 0x0001
        .equiv  U2STA_PERR_MASK, 0x0008

        .equiv  U2STA_RIDLE, 0x0004
        .equiv  U2STA_RIDLE_WIDTH, 0x0001
        .equiv  U2STA_RIDLE_MASK, 0x0010

        .equiv  U2STA_ADDEN, 0x0005
        .equiv  U2STA_ADDEN_WIDTH, 0x0001
        .equiv  U2STA_ADDEN_MASK, 0x0020

        .equiv  U2STA_URXISEL, 0x0006
        .equiv  U2STA_URXISEL_WIDTH, 0x0002
        .equiv  U2STA_URXISEL_MASK, 0x00C0

        .equiv  U2STA_TRMT, 0x0008
        .equiv  U2STA_TRMT_WIDTH, 0x0001
        .equiv  U2STA_TRMT_MASK, 0x0100

        .equiv  U2STA_UTXBF, 0x0009
        .equiv  U2STA_UTXBF_WIDTH, 0x0001
        .equiv  U2STA_UTXBF_MASK, 0x0200

        .equiv  U2STA_UTXEN, 0x000A
        .equiv  U2STA_UTXEN_WIDTH, 0x0001
        .equiv  U2STA_UTXEN_MASK, 0x0400

        .equiv  U2STA_UTXBRK, 0x000B
        .equiv  U2STA_UTXBRK_WIDTH, 0x0001
        .equiv  U2STA_UTXBRK_MASK, 0x0800

        .equiv  U2STA_UTXISEL, 0x000F
        .equiv  U2STA_UTXISEL_WIDTH, 0x0001
        .equiv  U2STA_UTXISEL_MASK, 0x8000

        .equiv  U2STA_URXISEL0, 0x0006
        .equiv  U2STA_URXISEL0_WIDTH, 0x0001
        .equiv  U2STA_URXISEL0_MASK, 0x0040
        .equiv  URXISEL0, 0x0006

        .equiv  U2STA_URXISEL1, 0x0007
        .equiv  U2STA_URXISEL1_WIDTH, 0x0001
        .equiv  U2STA_URXISEL1_MASK, 0x0080
        .equiv  URXISEL1, 0x0007

;----- U2TXREG Bits -----------------------------------------------------
        .equiv  U2TXREG_UTXREG0, 0x0000
        .equiv  U2TXREG_UTXREG0_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG0_MASK, 0x0001

        .equiv  U2TXREG_UTXREG1, 0x0001
        .equiv  U2TXREG_UTXREG1_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG1_MASK, 0x0002

        .equiv  U2TXREG_UTXREG2, 0x0002
        .equiv  U2TXREG_UTXREG2_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG2_MASK, 0x0004

        .equiv  U2TXREG_UTXREG3, 0x0003
        .equiv  U2TXREG_UTXREG3_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG3_MASK, 0x0008

        .equiv  U2TXREG_UTXREG4, 0x0004
        .equiv  U2TXREG_UTXREG4_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG4_MASK, 0x0010

        .equiv  U2TXREG_UTXREG5, 0x0005
        .equiv  U2TXREG_UTXREG5_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG5_MASK, 0x0020

        .equiv  U2TXREG_UTXREG6, 0x0006
        .equiv  U2TXREG_UTXREG6_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG6_MASK, 0x0040

        .equiv  U2TXREG_UTXREG7, 0x0007
        .equiv  U2TXREG_UTXREG7_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG7_MASK, 0x0080

        .equiv  U2TXREG_UTXREG8, 0x0008
        .equiv  U2TXREG_UTXREG8_WIDTH, 0x0001
        .equiv  U2TXREG_UTXREG8_MASK, 0x0100

        .equiv  U2TXREG_UTX8, 0x0008
        .equiv  U2TXREG_UTX8_WIDTH, 0x0001
        .equiv  U2TXREG_UTX8_MASK, 0x0100

;----- U2RXREG Bits -----------------------------------------------------
        .equiv  U2RXREG_URXREG0, 0x0000
        .equiv  U2RXREG_URXREG0_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG0_MASK, 0x0001

        .equiv  U2RXREG_URXREG1, 0x0001
        .equiv  U2RXREG_URXREG1_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG1_MASK, 0x0002

        .equiv  U2RXREG_URXREG2, 0x0002
        .equiv  U2RXREG_URXREG2_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG2_MASK, 0x0004

        .equiv  U2RXREG_URXREG3, 0x0003
        .equiv  U2RXREG_URXREG3_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG3_MASK, 0x0008

        .equiv  U2RXREG_URXREG4, 0x0004
        .equiv  U2RXREG_URXREG4_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG4_MASK, 0x0010

        .equiv  U2RXREG_URXREG5, 0x0005
        .equiv  U2RXREG_URXREG5_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG5_MASK, 0x0020

        .equiv  U2RXREG_URXREG6, 0x0006
        .equiv  U2RXREG_URXREG6_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG6_MASK, 0x0040

        .equiv  U2RXREG_URXREG7, 0x0007
        .equiv  U2RXREG_URXREG7_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG7_MASK, 0x0080

        .equiv  U2RXREG_URXREG8, 0x0008
        .equiv  U2RXREG_URXREG8_WIDTH, 0x0001
        .equiv  U2RXREG_URXREG8_MASK, 0x0100

        .equiv  U2RXREG_URX8, 0x0008
        .equiv  U2RXREG_URX8_WIDTH, 0x0001
        .equiv  U2RXREG_URX8_MASK, 0x0100

;----- SPI1STAT Bits -----------------------------------------------------
        .equiv  SPI1STAT_SPIRBF, 0x0000
        .equiv  SPI1STAT_SPIRBF_WIDTH, 0x0001
        .equiv  SPI1STAT_SPIRBF_MASK, 0x0001
        .equiv  SPIRBF, 0x0000

        .equiv  SPI1STAT_SPITBF, 0x0001
        .equiv  SPI1STAT_SPITBF_WIDTH, 0x0001
        .equiv  SPI1STAT_SPITBF_MASK, 0x0002
        .equiv  SPITBF, 0x0001

        .equiv  SPI1STAT_SPIROV, 0x0006
        .equiv  SPI1STAT_SPIROV_WIDTH, 0x0001
        .equiv  SPI1STAT_SPIROV_MASK, 0x0040
        .equiv  SPIROV, 0x0006

        .equiv  SPI1STAT_SPISIDL, 0x000D
        .equiv  SPI1STAT_SPISIDL_WIDTH, 0x0001
        .equiv  SPI1STAT_SPISIDL_MASK, 0x2000
        .equiv  SPISIDL, 0x000D

        .equiv  SPI1STAT_SPIEN, 0x000F
        .equiv  SPI1STAT_SPIEN_WIDTH, 0x0001
        .equiv  SPI1STAT_SPIEN_MASK, 0x8000
        .equiv  SPIEN, 0x000F

;----- SPI1CON Bits -----------------------------------------------------
        .equiv  SPI1CON_PPRE0, 0x0000
        .equiv  SPI1CON_PPRE0_WIDTH, 0x0001
        .equiv  SPI1CON_PPRE0_MASK, 0x0001
        .equiv  PPRE0, 0x0000

        .equiv  SPI1CON_PPRE1, 0x0001
        .equiv  SPI1CON_PPRE1_WIDTH, 0x0001
        .equiv  SPI1CON_PPRE1_MASK, 0x0002
        .equiv  PPRE1, 0x0001

        .equiv  SPI1CON_SPRE0, 0x0002
        .equiv  SPI1CON_SPRE0_WIDTH, 0x0001
        .equiv  SPI1CON_SPRE0_MASK, 0x0004
        .equiv  SPRE0, 0x0002

        .equiv  SPI1CON_SPRE1, 0x0003
        .equiv  SPI1CON_SPRE1_WIDTH, 0x0001
        .equiv  SPI1CON_SPRE1_MASK, 0x0008
        .equiv  SPRE1, 0x0003

        .equiv  SPI1CON_SPRE2, 0x0004
        .equiv  SPI1CON_SPRE2_WIDTH, 0x0001
        .equiv  SPI1CON_SPRE2_MASK, 0x0010
        .equiv  SPRE2, 0x0004

        .equiv  SPI1CON_MSTEN, 0x0005
        .equiv  SPI1CON_MSTEN_WIDTH, 0x0001
        .equiv  SPI1CON_MSTEN_MASK, 0x0020
        .equiv  MSTEN, 0x0005

        .equiv  SPI1CON_CKP, 0x0006
        .equiv  SPI1CON_CKP_WIDTH, 0x0001
        .equiv  SPI1CON_CKP_MASK, 0x0040
        .equiv  CKP, 0x0006

        .equiv  SPI1CON_SSEN, 0x0007
        .equiv  SPI1CON_SSEN_WIDTH, 0x0001
        .equiv  SPI1CON_SSEN_MASK, 0x0080
        .equiv  SSEN, 0x0007

        .equiv  SPI1CON_CKE, 0x0008
        .equiv  SPI1CON_CKE_WIDTH, 0x0001
        .equiv  SPI1CON_CKE_MASK, 0x0100
        .equiv  CKE, 0x0008

        .equiv  SPI1CON_SMP, 0x0009
        .equiv  SPI1CON_SMP_WIDTH, 0x0001
        .equiv  SPI1CON_SMP_MASK, 0x0200
        .equiv  SMP, 0x0009

        .equiv  SPI1CON_MODE16, 0x000A
        .equiv  SPI1CON_MODE16_WIDTH, 0x0001
        .equiv  SPI1CON_MODE16_MASK, 0x0400
        .equiv  MODE16, 0x000A

        .equiv  SPI1CON_DISSDO, 0x000B
        .equiv  SPI1CON_DISSDO_WIDTH, 0x0001
        .equiv  SPI1CON_DISSDO_MASK, 0x0800
        .equiv  DISSDO, 0x000B

        .equiv  SPI1CON_SPIFSD, 0x000D
        .equiv  SPI1CON_SPIFSD_WIDTH, 0x0001
        .equiv  SPI1CON_SPIFSD_MASK, 0x2000
        .equiv  SPIFSD, 0x000D

        .equiv  SPI1CON_FRMEN, 0x000E
        .equiv  SPI1CON_FRMEN_WIDTH, 0x0001
        .equiv  SPI1CON_FRMEN_MASK, 0x4000
        .equiv  FRMEN, 0x000E

        .equiv  SPI1CON_PPRE, 0x0000
        .equiv  SPI1CON_PPRE_WIDTH, 0x0002
        .equiv  SPI1CON_PPRE_MASK, 0x0003

        .equiv  SPI1CON_SPRE, 0x0002
        .equiv  SPI1CON_SPRE_WIDTH, 0x0003
        .equiv  SPI1CON_SPRE_MASK, 0x001C

;----- DCICON1 Bits -----------------------------------------------------
        .equiv  DCICON1_COFSM, 0x0000
        .equiv  DCICON1_COFSM_WIDTH, 0x0002
        .equiv  DCICON1_COFSM_MASK, 0x0003

        .equiv  DCICON1_DJST, 0x0005
        .equiv  DCICON1_DJST_WIDTH, 0x0001
        .equiv  DCICON1_DJST_MASK, 0x0020
        .equiv  DJST, 0x0005

        .equiv  DCICON1_CSDOM, 0x0006
        .equiv  DCICON1_CSDOM_WIDTH, 0x0001
        .equiv  DCICON1_CSDOM_MASK, 0x0040
        .equiv  CSDOM, 0x0006

        .equiv  DCICON1_UNFM, 0x0007
        .equiv  DCICON1_UNFM_WIDTH, 0x0001
        .equiv  DCICON1_UNFM_MASK, 0x0080
        .equiv  UNFM, 0x0007

        .equiv  DCICON1_COFSD, 0x0008
        .equiv  DCICON1_COFSD_WIDTH, 0x0001
        .equiv  DCICON1_COFSD_MASK, 0x0100
        .equiv  COFSD, 0x0008

        .equiv  DCICON1_CSCKE, 0x0009
        .equiv  DCICON1_CSCKE_WIDTH, 0x0001
        .equiv  DCICON1_CSCKE_MASK, 0x0200
        .equiv  CSCKE, 0x0009

        .equiv  DCICON1_CSCKD, 0x000A
        .equiv  DCICON1_CSCKD_WIDTH, 0x0001
        .equiv  DCICON1_CSCKD_MASK, 0x0400
        .equiv  CSCKD, 0x000A

        .equiv  DCICON1_DLOOP, 0x000B
        .equiv  DCICON1_DLOOP_WIDTH, 0x0001
        .equiv  DCICON1_DLOOP_MASK, 0x0800
        .equiv  DLOOP, 0x000B

        .equiv  DCICON1_DCISIDL, 0x000D
        .equiv  DCICON1_DCISIDL_WIDTH, 0x0001
        .equiv  DCICON1_DCISIDL_MASK, 0x2000
        .equiv  DCISIDL, 0x000D

        .equiv  DCICON1_DCIEN, 0x000F
        .equiv  DCICON1_DCIEN_WIDTH, 0x0001
        .equiv  DCICON1_DCIEN_MASK, 0x8000
        .equiv  DCIEN, 0x000F

        .equiv  DCICON1_COFSM0, 0x0000
        .equiv  DCICON1_COFSM0_WIDTH, 0x0001
        .equiv  DCICON1_COFSM0_MASK, 0x0001
        .equiv  COFSM0, 0x0000

        .equiv  DCICON1_COFSM1, 0x0001
        .equiv  DCICON1_COFSM1_WIDTH, 0x0001
        .equiv  DCICON1_COFSM1_MASK, 0x0002
        .equiv  COFSM1, 0x0001

;----- DCICON2 Bits -----------------------------------------------------
        .equiv  DCICON2_WS, 0x0000
        .equiv  DCICON2_WS_WIDTH, 0x0004
        .equiv  DCICON2_WS_MASK, 0x000F

        .equiv  DCICON2_COFSG, 0x0005
        .equiv  DCICON2_COFSG_WIDTH, 0x0004
        .equiv  DCICON2_COFSG_MASK, 0x01E0

        .equiv  DCICON2_BLEN, 0x000A
        .equiv  DCICON2_BLEN_WIDTH, 0x0002
        .equiv  DCICON2_BLEN_MASK, 0x0C00

        .equiv  DCICON2_WS0, 0x0000
        .equiv  DCICON2_WS0_WIDTH, 0x0001
        .equiv  DCICON2_WS0_MASK, 0x0001
        .equiv  WS0, 0x0000

        .equiv  DCICON2_WS1, 0x0001
        .equiv  DCICON2_WS1_WIDTH, 0x0001
        .equiv  DCICON2_WS1_MASK, 0x0002
        .equiv  WS1, 0x0001

        .equiv  DCICON2_WS2, 0x0002
        .equiv  DCICON2_WS2_WIDTH, 0x0001
        .equiv  DCICON2_WS2_MASK, 0x0004
        .equiv  WS2, 0x0002

        .equiv  DCICON2_WS3, 0x0003
        .equiv  DCICON2_WS3_WIDTH, 0x0001
        .equiv  DCICON2_WS3_MASK, 0x0008
        .equiv  WS3, 0x0003

        .equiv  DCICON2_COFSG0, 0x0005
        .equiv  DCICON2_COFSG0_WIDTH, 0x0001
        .equiv  DCICON2_COFSG0_MASK, 0x0020
        .equiv  COFSG0, 0x0005

        .equiv  DCICON2_COFSG1, 0x0006
        .equiv  DCICON2_COFSG1_WIDTH, 0x0001
        .equiv  DCICON2_COFSG1_MASK, 0x0040
        .equiv  COFSG1, 0x0006

        .equiv  DCICON2_COFSG2, 0x0007
        .equiv  DCICON2_COFSG2_WIDTH, 0x0001
        .equiv  DCICON2_COFSG2_MASK, 0x0080
        .equiv  COFSG2, 0x0007

        .equiv  DCICON2_COFSG3, 0x0008
        .equiv  DCICON2_COFSG3_WIDTH, 0x0001
        .equiv  DCICON2_COFSG3_MASK, 0x0100
        .equiv  COFSG3, 0x0008

        .equiv  DCICON2_BLEN0, 0x000A
        .equiv  DCICON2_BLEN0_WIDTH, 0x0001
        .equiv  DCICON2_BLEN0_MASK, 0x0400
        .equiv  BLEN0, 0x000A

        .equiv  DCICON2_BLEN1, 0x000B
        .equiv  DCICON2_BLEN1_WIDTH, 0x0001
        .equiv  DCICON2_BLEN1_MASK, 0x0800
        .equiv  BLEN1, 0x000B

;----- DCICON3 Bits -----------------------------------------------------
        .equiv  DCICON3_BCG, 0x0000
        .equiv  DCICON3_BCG_WIDTH, 0x000C
        .equiv  DCICON3_BCG_MASK, 0x0FFF

        .equiv  DCICON3_BCG0, 0x0000
        .equiv  DCICON3_BCG0_WIDTH, 0x0001
        .equiv  DCICON3_BCG0_MASK, 0x0001
        .equiv  BCG0, 0x0000

        .equiv  DCICON3_BCG1, 0x0001
        .equiv  DCICON3_BCG1_WIDTH, 0x0001
        .equiv  DCICON3_BCG1_MASK, 0x0002
        .equiv  BCG1, 0x0001

        .equiv  DCICON3_BCG2, 0x0002
        .equiv  DCICON3_BCG2_WIDTH, 0x0001
        .equiv  DCICON3_BCG2_MASK, 0x0004
        .equiv  BCG2, 0x0002

        .equiv  DCICON3_BCG3, 0x0003
        .equiv  DCICON3_BCG3_WIDTH, 0x0001
        .equiv  DCICON3_BCG3_MASK, 0x0008
        .equiv  BCG3, 0x0003

        .equiv  DCICON3_BCG4, 0x0004
        .equiv  DCICON3_BCG4_WIDTH, 0x0001
        .equiv  DCICON3_BCG4_MASK, 0x0010
        .equiv  BCG4, 0x0004

        .equiv  DCICON3_BCG5, 0x0005
        .equiv  DCICON3_BCG5_WIDTH, 0x0001
        .equiv  DCICON3_BCG5_MASK, 0x0020
        .equiv  BCG5, 0x0005

        .equiv  DCICON3_BCG6, 0x0006
        .equiv  DCICON3_BCG6_WIDTH, 0x0001
        .equiv  DCICON3_BCG6_MASK, 0x0040
        .equiv  BCG6, 0x0006

        .equiv  DCICON3_BCG7, 0x0007
        .equiv  DCICON3_BCG7_WIDTH, 0x0001
        .equiv  DCICON3_BCG7_MASK, 0x0080
        .equiv  BCG7, 0x0007

        .equiv  DCICON3_BCG8, 0x0008
        .equiv  DCICON3_BCG8_WIDTH, 0x0001
        .equiv  DCICON3_BCG8_MASK, 0x0100
        .equiv  BCG8, 0x0008

        .equiv  DCICON3_BCG9, 0x0009
        .equiv  DCICON3_BCG9_WIDTH, 0x0001
        .equiv  DCICON3_BCG9_MASK, 0x0200
        .equiv  BCG9, 0x0009

        .equiv  DCICON3_BCG10, 0x000A
        .equiv  DCICON3_BCG10_WIDTH, 0x0001
        .equiv  DCICON3_BCG10_MASK, 0x0400
        .equiv  BCG10, 0x000A

        .equiv  DCICON3_BCG11, 0x000B
        .equiv  DCICON3_BCG11_WIDTH, 0x0001
        .equiv  DCICON3_BCG11_MASK, 0x0800
        .equiv  BCG11, 0x000B

;----- DCISTAT Bits -----------------------------------------------------
        .equiv  DCISTAT_TMPTY, 0x0000
        .equiv  DCISTAT_TMPTY_WIDTH, 0x0001
        .equiv  DCISTAT_TMPTY_MASK, 0x0001
        .equiv  TMPTY, 0x0000

        .equiv  DCISTAT_TUNF, 0x0001
        .equiv  DCISTAT_TUNF_WIDTH, 0x0001
        .equiv  DCISTAT_TUNF_MASK, 0x0002
        .equiv  TUNF, 0x0001

        .equiv  DCISTAT_RFUL, 0x0002
        .equiv  DCISTAT_RFUL_WIDTH, 0x0001
        .equiv  DCISTAT_RFUL_MASK, 0x0004
        .equiv  RFUL, 0x0002

        .equiv  DCISTAT_ROV, 0x0003
        .equiv  DCISTAT_ROV_WIDTH, 0x0001
        .equiv  DCISTAT_ROV_MASK, 0x0008
        .equiv  ROV, 0x0003

        .equiv  DCISTAT_SLOT, 0x0008
        .equiv  DCISTAT_SLOT_WIDTH, 0x0004
        .equiv  DCISTAT_SLOT_MASK, 0x0F00

        .equiv  DCISTAT_SLOT0, 0x0008
        .equiv  DCISTAT_SLOT0_WIDTH, 0x0001
        .equiv  DCISTAT_SLOT0_MASK, 0x0100
        .equiv  SLOT0, 0x0008

        .equiv  DCISTAT_SLOT1, 0x0009
        .equiv  DCISTAT_SLOT1_WIDTH, 0x0001
        .equiv  DCISTAT_SLOT1_MASK, 0x0200
        .equiv  SLOT1, 0x0009

        .equiv  DCISTAT_SLOT2, 0x000A
        .equiv  DCISTAT_SLOT2_WIDTH, 0x0001
        .equiv  DCISTAT_SLOT2_MASK, 0x0400
        .equiv  SLOT2, 0x000A

        .equiv  DCISTAT_SLOT3, 0x000B
        .equiv  DCISTAT_SLOT3_WIDTH, 0x0001
        .equiv  DCISTAT_SLOT3_MASK, 0x0800
        .equiv  SLOT3, 0x000B

;----- TSCON Bits -----------------------------------------------------
        .equiv  TSCON_TSE0, 0x0000
        .equiv  TSCON_TSE0_WIDTH, 0x0001
        .equiv  TSCON_TSE0_MASK, 0x0001
        .equiv  TSE0, 0x0000

        .equiv  TSCON_TSE1, 0x0001
        .equiv  TSCON_TSE1_WIDTH, 0x0001
        .equiv  TSCON_TSE1_MASK, 0x0002
        .equiv  TSE1, 0x0001

        .equiv  TSCON_TSE2, 0x0002
        .equiv  TSCON_TSE2_WIDTH, 0x0001
        .equiv  TSCON_TSE2_MASK, 0x0004
        .equiv  TSE2, 0x0002

        .equiv  TSCON_TSE3, 0x0003
        .equiv  TSCON_TSE3_WIDTH, 0x0001
        .equiv  TSCON_TSE3_MASK, 0x0008
        .equiv  TSE3, 0x0003

        .equiv  TSCON_TSE4, 0x0004
        .equiv  TSCON_TSE4_WIDTH, 0x0001
        .equiv  TSCON_TSE4_MASK, 0x0010
        .equiv  TSE4, 0x0004

        .equiv  TSCON_TSE5, 0x0005
        .equiv  TSCON_TSE5_WIDTH, 0x0001
        .equiv  TSCON_TSE5_MASK, 0x0020
        .equiv  TSE5, 0x0005

        .equiv  TSCON_TSE6, 0x0006
        .equiv  TSCON_TSE6_WIDTH, 0x0001
        .equiv  TSCON_TSE6_MASK, 0x0040
        .equiv  TSE6, 0x0006

        .equiv  TSCON_TSE7, 0x0007
        .equiv  TSCON_TSE7_WIDTH, 0x0001
        .equiv  TSCON_TSE7_MASK, 0x0080
        .equiv  TSE7, 0x0007

        .equiv  TSCON_TSE8, 0x0008
        .equiv  TSCON_TSE8_WIDTH, 0x0001
        .equiv  TSCON_TSE8_MASK, 0x0100
        .equiv  TSE8, 0x0008

        .equiv  TSCON_TSE9, 0x0009
        .equiv  TSCON_TSE9_WIDTH, 0x0001
        .equiv  TSCON_TSE9_MASK, 0x0200
        .equiv  TSE9, 0x0009

        .equiv  TSCON_TSE10, 0x000A
        .equiv  TSCON_TSE10_WIDTH, 0x0001
        .equiv  TSCON_TSE10_MASK, 0x0400
        .equiv  TSE10, 0x000A

        .equiv  TSCON_TSE11, 0x000B
        .equiv  TSCON_TSE11_WIDTH, 0x0001
        .equiv  TSCON_TSE11_MASK, 0x0800
        .equiv  TSE11, 0x000B

        .equiv  TSCON_TSE12, 0x000C
        .equiv  TSCON_TSE12_WIDTH, 0x0001
        .equiv  TSCON_TSE12_MASK, 0x1000
        .equiv  TSE12, 0x000C

        .equiv  TSCON_TSE13, 0x000D
        .equiv  TSCON_TSE13_WIDTH, 0x0001
        .equiv  TSCON_TSE13_MASK, 0x2000
        .equiv  TSE13, 0x000D

        .equiv  TSCON_TSE14, 0x000E
        .equiv  TSCON_TSE14_WIDTH, 0x0001
        .equiv  TSCON_TSE14_MASK, 0x4000
        .equiv  TSE14, 0x000E

        .equiv  TSCON_TSE15, 0x000F
        .equiv  TSCON_TSE15_WIDTH, 0x0001
        .equiv  TSCON_TSE15_MASK, 0x8000
        .equiv  TSE15, 0x000F

;----- RSCON Bits -----------------------------------------------------
        .equiv  RSCON_RSE0, 0x0000
        .equiv  RSCON_RSE0_WIDTH, 0x0001
        .equiv  RSCON_RSE0_MASK, 0x0001
        .equiv  RSE0, 0x0000

        .equiv  RSCON_RSE1, 0x0001
        .equiv  RSCON_RSE1_WIDTH, 0x0001
        .equiv  RSCON_RSE1_MASK, 0x0002
        .equiv  RSE1, 0x0001

        .equiv  RSCON_RSE2, 0x0002
        .equiv  RSCON_RSE2_WIDTH, 0x0001
        .equiv  RSCON_RSE2_MASK, 0x0004
        .equiv  RSE2, 0x0002

        .equiv  RSCON_RSE3, 0x0003
        .equiv  RSCON_RSE3_WIDTH, 0x0001
        .equiv  RSCON_RSE3_MASK, 0x0008
        .equiv  RSE3, 0x0003

        .equiv  RSCON_RSE4, 0x0004
        .equiv  RSCON_RSE4_WIDTH, 0x0001
        .equiv  RSCON_RSE4_MASK, 0x0010
        .equiv  RSE4, 0x0004

        .equiv  RSCON_RSE5, 0x0005
        .equiv  RSCON_RSE5_WIDTH, 0x0001
        .equiv  RSCON_RSE5_MASK, 0x0020
        .equiv  RSE5, 0x0005

        .equiv  RSCON_RSE6, 0x0006
        .equiv  RSCON_RSE6_WIDTH, 0x0001
        .equiv  RSCON_RSE6_MASK, 0x0040
        .equiv  RSE6, 0x0006

        .equiv  RSCON_RSE7, 0x0007
        .equiv  RSCON_RSE7_WIDTH, 0x0001
        .equiv  RSCON_RSE7_MASK, 0x0080
        .equiv  RSE7, 0x0007

        .equiv  RSCON_RSE8, 0x0008
        .equiv  RSCON_RSE8_WIDTH, 0x0001
        .equiv  RSCON_RSE8_MASK, 0x0100
        .equiv  RSE8, 0x0008

        .equiv  RSCON_RSE9, 0x0009
        .equiv  RSCON_RSE9_WIDTH, 0x0001
        .equiv  RSCON_RSE9_MASK, 0x0200
        .equiv  RSE9, 0x0009

        .equiv  RSCON_RSE10, 0x000A
        .equiv  RSCON_RSE10_WIDTH, 0x0001
        .equiv  RSCON_RSE10_MASK, 0x0400
        .equiv  RSE10, 0x000A

        .equiv  RSCON_RSE11, 0x000B
        .equiv  RSCON_RSE11_WIDTH, 0x0001
        .equiv  RSCON_RSE11_MASK, 0x0800
        .equiv  RSE11, 0x000B

        .equiv  RSCON_RSE12, 0x000C
        .equiv  RSCON_RSE12_WIDTH, 0x0001
        .equiv  RSCON_RSE12_MASK, 0x1000
        .equiv  RSE12, 0x000C

        .equiv  RSCON_RSE13, 0x000D
        .equiv  RSCON_RSE13_WIDTH, 0x0001
        .equiv  RSCON_RSE13_MASK, 0x2000
        .equiv  RSE13, 0x000D

        .equiv  RSCON_RSE14, 0x000E
        .equiv  RSCON_RSE14_WIDTH, 0x0001
        .equiv  RSCON_RSE14_MASK, 0x4000
        .equiv  RSE14, 0x000E

        .equiv  RSCON_RSE15, 0x000F
        .equiv  RSCON_RSE15_WIDTH, 0x0001
        .equiv  RSCON_RSE15_MASK, 0x8000
        .equiv  RSE15, 0x000F

;----- ADCON1 Bits -----------------------------------------------------
        .equiv  ADCON1_DONE, 0x0000
        .equiv  ADCON1_DONE_WIDTH, 0x0001
        .equiv  ADCON1_DONE_MASK, 0x0001
        .equiv  DONE, 0x0000

        .equiv  ADCON1_SAMP, 0x0001
        .equiv  ADCON1_SAMP_WIDTH, 0x0001
        .equiv  ADCON1_SAMP_MASK, 0x0002
        .equiv  SAMP, 0x0001

        .equiv  ADCON1_ASAM, 0x0002
        .equiv  ADCON1_ASAM_WIDTH, 0x0001
        .equiv  ADCON1_ASAM_MASK, 0x0004
        .equiv  ASAM, 0x0002

        .equiv  ADCON1_SSRC, 0x0005
        .equiv  ADCON1_SSRC_WIDTH, 0x0003
        .equiv  ADCON1_SSRC_MASK, 0x00E0

        .equiv  ADCON1_FORM, 0x0008
        .equiv  ADCON1_FORM_WIDTH, 0x0002
        .equiv  ADCON1_FORM_MASK, 0x0300

        .equiv  ADCON1_ADSIDL, 0x000D
        .equiv  ADCON1_ADSIDL_WIDTH, 0x0001
        .equiv  ADCON1_ADSIDL_MASK, 0x2000
        .equiv  ADSIDL, 0x000D

        .equiv  ADCON1_ADON, 0x000F
        .equiv  ADCON1_ADON_WIDTH, 0x0001
        .equiv  ADCON1_ADON_MASK, 0x8000
        .equiv  ADON, 0x000F

        .equiv  ADCON1_SSRC0, 0x0005
        .equiv  ADCON1_SSRC0_WIDTH, 0x0001
        .equiv  ADCON1_SSRC0_MASK, 0x0020
        .equiv  SSRC0, 0x0005

        .equiv  ADCON1_SSRC1, 0x0006
        .equiv  ADCON1_SSRC1_WIDTH, 0x0001
        .equiv  ADCON1_SSRC1_MASK, 0x0040
        .equiv  SSRC1, 0x0006

        .equiv  ADCON1_SSRC2, 0x0007
        .equiv  ADCON1_SSRC2_WIDTH, 0x0001
        .equiv  ADCON1_SSRC2_MASK, 0x0080
        .equiv  SSRC2, 0x0007

        .equiv  ADCON1_FORM0, 0x0008
        .equiv  ADCON1_FORM0_WIDTH, 0x0001
        .equiv  ADCON1_FORM0_MASK, 0x0100
        .equiv  FORM0, 0x0008

        .equiv  ADCON1_FORM1, 0x0009
        .equiv  ADCON1_FORM1_WIDTH, 0x0001
        .equiv  ADCON1_FORM1_MASK, 0x0200
        .equiv  FORM1, 0x0009

;----- ADCON2 Bits -----------------------------------------------------
        .equiv  ADCON2_ALTS, 0x0000
        .equiv  ADCON2_ALTS_WIDTH, 0x0001
        .equiv  ADCON2_ALTS_MASK, 0x0001
        .equiv  ALTS, 0x0000

        .equiv  ADCON2_BUFM, 0x0001
        .equiv  ADCON2_BUFM_WIDTH, 0x0001
        .equiv  ADCON2_BUFM_MASK, 0x0002
        .equiv  BUFM, 0x0001

        .equiv  ADCON2_SMPI, 0x0002
        .equiv  ADCON2_SMPI_WIDTH, 0x0004
        .equiv  ADCON2_SMPI_MASK, 0x003C

        .equiv  ADCON2_BUFS, 0x0007
        .equiv  ADCON2_BUFS_WIDTH, 0x0001
        .equiv  ADCON2_BUFS_MASK, 0x0080
        .equiv  BUFS, 0x0007

        .equiv  ADCON2_CSCNA, 0x000A
        .equiv  ADCON2_CSCNA_WIDTH, 0x0001
        .equiv  ADCON2_CSCNA_MASK, 0x0400
        .equiv  CSCNA, 0x000A

        .equiv  ADCON2_VCFG, 0x000D
        .equiv  ADCON2_VCFG_WIDTH, 0x0003
        .equiv  ADCON2_VCFG_MASK, 0xE000

        .equiv  ADCON2_SMPI0, 0x0002
        .equiv  ADCON2_SMPI0_WIDTH, 0x0001
        .equiv  ADCON2_SMPI0_MASK, 0x0004
        .equiv  SMPI0, 0x0002

        .equiv  ADCON2_SMPI1, 0x0003
        .equiv  ADCON2_SMPI1_WIDTH, 0x0001
        .equiv  ADCON2_SMPI1_MASK, 0x0008
        .equiv  SMPI1, 0x0003

        .equiv  ADCON2_SMPI2, 0x0004
        .equiv  ADCON2_SMPI2_WIDTH, 0x0001
        .equiv  ADCON2_SMPI2_MASK, 0x0010
        .equiv  SMPI2, 0x0004

        .equiv  ADCON2_SMPI3, 0x0005
        .equiv  ADCON2_SMPI3_WIDTH, 0x0001
        .equiv  ADCON2_SMPI3_MASK, 0x0020
        .equiv  SMPI3, 0x0005

        .equiv  ADCON2_VCFG0, 0x000D
        .equiv  ADCON2_VCFG0_WIDTH, 0x0001
        .equiv  ADCON2_VCFG0_MASK, 0x2000
        .equiv  VCFG0, 0x000D

        .equiv  ADCON2_VCFG1, 0x000E
        .equiv  ADCON2_VCFG1_WIDTH, 0x0001
        .equiv  ADCON2_VCFG1_MASK, 0x4000
        .equiv  VCFG1, 0x000E

        .equiv  ADCON2_VCFG2, 0x000F
        .equiv  ADCON2_VCFG2_WIDTH, 0x0001
        .equiv  ADCON2_VCFG2_MASK, 0x8000
        .equiv  VCFG2, 0x000F

;----- ADCON3 Bits -----------------------------------------------------
        .equiv  ADCON3_ADCS, 0x0000
        .equiv  ADCON3_ADCS_WIDTH, 0x0006
        .equiv  ADCON3_ADCS_MASK, 0x003F

        .equiv  ADCON3_ADRC, 0x0007
        .equiv  ADCON3_ADRC_WIDTH, 0x0001
        .equiv  ADCON3_ADRC_MASK, 0x0080
        .equiv  ADRC, 0x0007

        .equiv  ADCON3_SAMC, 0x0008
        .equiv  ADCON3_SAMC_WIDTH, 0x0005
        .equiv  ADCON3_SAMC_MASK, 0x1F00

        .equiv  ADCON3_ADCS0, 0x0000
        .equiv  ADCON3_ADCS0_WIDTH, 0x0001
        .equiv  ADCON3_ADCS0_MASK, 0x0001
        .equiv  ADCS0, 0x0000

        .equiv  ADCON3_ADCS1, 0x0001
        .equiv  ADCON3_ADCS1_WIDTH, 0x0001
        .equiv  ADCON3_ADCS1_MASK, 0x0002
        .equiv  ADCS1, 0x0001

        .equiv  ADCON3_ADCS2, 0x0002
        .equiv  ADCON3_ADCS2_WIDTH, 0x0001
        .equiv  ADCON3_ADCS2_MASK, 0x0004
        .equiv  ADCS2, 0x0002

        .equiv  ADCON3_ADCS3, 0x0003
        .equiv  ADCON3_ADCS3_WIDTH, 0x0001
        .equiv  ADCON3_ADCS3_MASK, 0x0008
        .equiv  ADCS3, 0x0003

        .equiv  ADCON3_ADCS4, 0x0004
        .equiv  ADCON3_ADCS4_WIDTH, 0x0001
        .equiv  ADCON3_ADCS4_MASK, 0x0010
        .equiv  ADCS4, 0x0004

        .equiv  ADCON3_ADCS5, 0x0005
        .equiv  ADCON3_ADCS5_WIDTH, 0x0001
        .equiv  ADCON3_ADCS5_MASK, 0x0020
        .equiv  ADCS5, 0x0005

        .equiv  ADCON3_SAMC0, 0x0008
        .equiv  ADCON3_SAMC0_WIDTH, 0x0001
        .equiv  ADCON3_SAMC0_MASK, 0x0100
        .equiv  SAMC0, 0x0008

        .equiv  ADCON3_SAMC1, 0x0009
        .equiv  ADCON3_SAMC1_WIDTH, 0x0001
        .equiv  ADCON3_SAMC1_MASK, 0x0200
        .equiv  SAMC1, 0x0009

        .equiv  ADCON3_SAMC2, 0x000A
        .equiv  ADCON3_SAMC2_WIDTH, 0x0001
        .equiv  ADCON3_SAMC2_MASK, 0x0400
        .equiv  SAMC2, 0x000A

        .equiv  ADCON3_SAMC3, 0x000B
        .equiv  ADCON3_SAMC3_WIDTH, 0x0001
        .equiv  ADCON3_SAMC3_MASK, 0x0800
        .equiv  SAMC3, 0x000B

        .equiv  ADCON3_SAMC4, 0x000C
        .equiv  ADCON3_SAMC4_WIDTH, 0x0001
        .equiv  ADCON3_SAMC4_MASK, 0x1000
        .equiv  SAMC4, 0x000C

;----- ADCHS Bits -----------------------------------------------------
        .equiv  ADCHS_CH0SA, 0x0000
        .equiv  ADCHS_CH0SA_WIDTH, 0x0004
        .equiv  ADCHS_CH0SA_MASK, 0x000F

        .equiv  ADCHS_CH0NA, 0x0004
        .equiv  ADCHS_CH0NA_WIDTH, 0x0001
        .equiv  ADCHS_CH0NA_MASK, 0x0010
        .equiv  CH0NA, 0x0004

        .equiv  ADCHS_CH0SB, 0x0008
        .equiv  ADCHS_CH0SB_WIDTH, 0x0004
        .equiv  ADCHS_CH0SB_MASK, 0x0F00

        .equiv  ADCHS_CH0NB, 0x000C
        .equiv  ADCHS_CH0NB_WIDTH, 0x0001
        .equiv  ADCHS_CH0NB_MASK, 0x1000
        .equiv  CH0NB, 0x000C

        .equiv  ADCHS_CH0SA0, 0x0000
        .equiv  ADCHS_CH0SA0_WIDTH, 0x0001
        .equiv  ADCHS_CH0SA0_MASK, 0x0001
        .equiv  CH0SA0, 0x0000

        .equiv  ADCHS_CH0SA1, 0x0001
        .equiv  ADCHS_CH0SA1_WIDTH, 0x0001
        .equiv  ADCHS_CH0SA1_MASK, 0x0002
        .equiv  CH0SA1, 0x0001

        .equiv  ADCHS_CH0SA2, 0x0002
        .equiv  ADCHS_CH0SA2_WIDTH, 0x0001
        .equiv  ADCHS_CH0SA2_MASK, 0x0004
        .equiv  CH0SA2, 0x0002

        .equiv  ADCHS_CH0SA3, 0x0003
        .equiv  ADCHS_CH0SA3_WIDTH, 0x0001
        .equiv  ADCHS_CH0SA3_MASK, 0x0008
        .equiv  CH0SA3, 0x0003

        .equiv  ADCHS_CH0SB0, 0x0008
        .equiv  ADCHS_CH0SB0_WIDTH, 0x0001
        .equiv  ADCHS_CH0SB0_MASK, 0x0100
        .equiv  CH0SB0, 0x0008

        .equiv  ADCHS_CH0SB1, 0x0009
        .equiv  ADCHS_CH0SB1_WIDTH, 0x0001
        .equiv  ADCHS_CH0SB1_MASK, 0x0200
        .equiv  CH0SB1, 0x0009

        .equiv  ADCHS_CH0SB2, 0x000A
        .equiv  ADCHS_CH0SB2_WIDTH, 0x0001
        .equiv  ADCHS_CH0SB2_MASK, 0x0400
        .equiv  CH0SB2, 0x000A

        .equiv  ADCHS_CH0SB3, 0x000B
        .equiv  ADCHS_CH0SB3_WIDTH, 0x0001
        .equiv  ADCHS_CH0SB3_MASK, 0x0800
        .equiv  CH0SB3, 0x000B

;----- ADPCFG Bits -----------------------------------------------------
        .equiv  ADPCFG_PCFG0, 0x0000
        .equiv  ADPCFG_PCFG0_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG0_MASK, 0x0001
        .equiv  PCFG0, 0x0000

        .equiv  ADPCFG_PCFG1, 0x0001
        .equiv  ADPCFG_PCFG1_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG1_MASK, 0x0002
        .equiv  PCFG1, 0x0001

        .equiv  ADPCFG_PCFG2, 0x0002
        .equiv  ADPCFG_PCFG2_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG2_MASK, 0x0004
        .equiv  PCFG2, 0x0002

        .equiv  ADPCFG_PCFG3, 0x0003
        .equiv  ADPCFG_PCFG3_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG3_MASK, 0x0008
        .equiv  PCFG3, 0x0003

        .equiv  ADPCFG_PCFG4, 0x0004
        .equiv  ADPCFG_PCFG4_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG4_MASK, 0x0010
        .equiv  PCFG4, 0x0004

        .equiv  ADPCFG_PCFG5, 0x0005
        .equiv  ADPCFG_PCFG5_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG5_MASK, 0x0020
        .equiv  PCFG5, 0x0005

        .equiv  ADPCFG_PCFG6, 0x0006
        .equiv  ADPCFG_PCFG6_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG6_MASK, 0x0040
        .equiv  PCFG6, 0x0006

        .equiv  ADPCFG_PCFG7, 0x0007
        .equiv  ADPCFG_PCFG7_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG7_MASK, 0x0080
        .equiv  PCFG7, 0x0007

        .equiv  ADPCFG_PCFG8, 0x0008
        .equiv  ADPCFG_PCFG8_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG8_MASK, 0x0100
        .equiv  PCFG8, 0x0008

        .equiv  ADPCFG_PCFG9, 0x0009
        .equiv  ADPCFG_PCFG9_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG9_MASK, 0x0200
        .equiv  PCFG9, 0x0009

        .equiv  ADPCFG_PCFG10, 0x000A
        .equiv  ADPCFG_PCFG10_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG10_MASK, 0x0400
        .equiv  PCFG10, 0x000A

        .equiv  ADPCFG_PCFG11, 0x000B
        .equiv  ADPCFG_PCFG11_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG11_MASK, 0x0800
        .equiv  PCFG11, 0x000B

        .equiv  ADPCFG_PCFG12, 0x000C
        .equiv  ADPCFG_PCFG12_WIDTH, 0x0001
        .equiv  ADPCFG_PCFG12_MASK, 0x1000
        .equiv  PCFG12, 0x000C

;----- ADCSSL Bits -----------------------------------------------------
        .equiv  ADCSSL_CSSL0, 0x0000
        .equiv  ADCSSL_CSSL0_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL0_MASK, 0x0001
        .equiv  CSSL0, 0x0000

        .equiv  ADCSSL_CSSL1, 0x0001
        .equiv  ADCSSL_CSSL1_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL1_MASK, 0x0002
        .equiv  CSSL1, 0x0001

        .equiv  ADCSSL_CSSL2, 0x0002
        .equiv  ADCSSL_CSSL2_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL2_MASK, 0x0004
        .equiv  CSSL2, 0x0002

        .equiv  ADCSSL_CSSL3, 0x0003
        .equiv  ADCSSL_CSSL3_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL3_MASK, 0x0008
        .equiv  CSSL3, 0x0003

        .equiv  ADCSSL_CSSL4, 0x0004
        .equiv  ADCSSL_CSSL4_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL4_MASK, 0x0010
        .equiv  CSSL4, 0x0004

        .equiv  ADCSSL_CSSL5, 0x0005
        .equiv  ADCSSL_CSSL5_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL5_MASK, 0x0020
        .equiv  CSSL5, 0x0005

        .equiv  ADCSSL_CSSL6, 0x0006
        .equiv  ADCSSL_CSSL6_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL6_MASK, 0x0040
        .equiv  CSSL6, 0x0006

        .equiv  ADCSSL_CSSL7, 0x0007
        .equiv  ADCSSL_CSSL7_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL7_MASK, 0x0080
        .equiv  CSSL7, 0x0007

        .equiv  ADCSSL_CSSL8, 0x0008
        .equiv  ADCSSL_CSSL8_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL8_MASK, 0x0100
        .equiv  CSSL8, 0x0008

        .equiv  ADCSSL_CSSL9, 0x0009
        .equiv  ADCSSL_CSSL9_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL9_MASK, 0x0200
        .equiv  CSSL9, 0x0009

        .equiv  ADCSSL_CSSL10, 0x000A
        .equiv  ADCSSL_CSSL10_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL10_MASK, 0x0400
        .equiv  CSSL10, 0x000A

        .equiv  ADCSSL_CSSL11, 0x000B
        .equiv  ADCSSL_CSSL11_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL11_MASK, 0x0800
        .equiv  CSSL11, 0x000B

        .equiv  ADCSSL_CSSL12, 0x000C
        .equiv  ADCSSL_CSSL12_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL12_MASK, 0x1000
        .equiv  CSSL12, 0x000C

        .equiv  ADCSSL_CSSL13, 0x000D
        .equiv  ADCSSL_CSSL13_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL13_MASK, 0x2000
        .equiv  CSSL13, 0x000D

        .equiv  ADCSSL_CSSL14, 0x000E
        .equiv  ADCSSL_CSSL14_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL14_MASK, 0x4000
        .equiv  CSSL14, 0x000E

        .equiv  ADCSSL_CSSL15, 0x000F
        .equiv  ADCSSL_CSSL15_WIDTH, 0x0001
        .equiv  ADCSSL_CSSL15_MASK, 0x8000
        .equiv  CSSL15, 0x000F

;----- TRISA Bits -----------------------------------------------------
        .equiv  TRISA_TRISA11, 0x000B
        .equiv  TRISA_TRISA11_WIDTH, 0x0001
        .equiv  TRISA_TRISA11_MASK, 0x0800
        .equiv  TRISA11, 0x000B

;----- PORTA Bits -----------------------------------------------------
        .equiv  PORTA_RA11, 0x000B
        .equiv  PORTA_RA11_WIDTH, 0x0001
        .equiv  PORTA_RA11_MASK, 0x0800
        .equiv  RA11, 0x000B

;----- LATA Bits -----------------------------------------------------
        .equiv  LATA_LATA11, 0x000B
        .equiv  LATA_LATA11_WIDTH, 0x0001
        .equiv  LATA_LATA11_MASK, 0x0800
        .equiv  LATA11, 0x000B

;----- TRISB Bits -----------------------------------------------------
        .equiv  TRISB_TRISB0, 0x0000
        .equiv  TRISB_TRISB0_WIDTH, 0x0001
        .equiv  TRISB_TRISB0_MASK, 0x0001
        .equiv  TRISB0, 0x0000

        .equiv  TRISB_TRISB1, 0x0001
        .equiv  TRISB_TRISB1_WIDTH, 0x0001
        .equiv  TRISB_TRISB1_MASK, 0x0002
        .equiv  TRISB1, 0x0001

        .equiv  TRISB_TRISB2, 0x0002
        .equiv  TRISB_TRISB2_WIDTH, 0x0001
        .equiv  TRISB_TRISB2_MASK, 0x0004
        .equiv  TRISB2, 0x0002

        .equiv  TRISB_TRISB3, 0x0003
        .equiv  TRISB_TRISB3_WIDTH, 0x0001
        .equiv  TRISB_TRISB3_MASK, 0x0008
        .equiv  TRISB3, 0x0003

        .equiv  TRISB_TRISB4, 0x0004
        .equiv  TRISB_TRISB4_WIDTH, 0x0001
        .equiv  TRISB_TRISB4_MASK, 0x0010
        .equiv  TRISB4, 0x0004

        .equiv  TRISB_TRISB5, 0x0005
        .equiv  TRISB_TRISB5_WIDTH, 0x0001
        .equiv  TRISB_TRISB5_MASK, 0x0020
        .equiv  TRISB5, 0x0005

        .equiv  TRISB_TRISB6, 0x0006
        .equiv  TRISB_TRISB6_WIDTH, 0x0001
        .equiv  TRISB_TRISB6_MASK, 0x0040
        .equiv  TRISB6, 0x0006

        .equiv  TRISB_TRISB7, 0x0007
        .equiv  TRISB_TRISB7_WIDTH, 0x0001
        .equiv  TRISB_TRISB7_MASK, 0x0080
        .equiv  TRISB7, 0x0007

        .equiv  TRISB_TRISB8, 0x0008
        .equiv  TRISB_TRISB8_WIDTH, 0x0001
        .equiv  TRISB_TRISB8_MASK, 0x0100
        .equiv  TRISB8, 0x0008

        .equiv  TRISB_TRISB9, 0x0009
        .equiv  TRISB_TRISB9_WIDTH, 0x0001
        .equiv  TRISB_TRISB9_MASK, 0x0200
        .equiv  TRISB9, 0x0009

        .equiv  TRISB_TRISB10, 0x000A
        .equiv  TRISB_TRISB10_WIDTH, 0x0001
        .equiv  TRISB_TRISB10_MASK, 0x0400
        .equiv  TRISB10, 0x000A

        .equiv  TRISB_TRISB11, 0x000B
        .equiv  TRISB_TRISB11_WIDTH, 0x0001
        .equiv  TRISB_TRISB11_MASK, 0x0800
        .equiv  TRISB11, 0x000B

        .equiv  TRISB_TRISB12, 0x000C
        .equiv  TRISB_TRISB12_WIDTH, 0x0001
        .equiv  TRISB_TRISB12_MASK, 0x1000
        .equiv  TRISB12, 0x000C

;----- PORTB Bits -----------------------------------------------------
        .equiv  PORTB_RB0, 0x0000
        .equiv  PORTB_RB0_WIDTH, 0x0001
        .equiv  PORTB_RB0_MASK, 0x0001
        .equiv  RB0, 0x0000

        .equiv  PORTB_RB1, 0x0001
        .equiv  PORTB_RB1_WIDTH, 0x0001
        .equiv  PORTB_RB1_MASK, 0x0002
        .equiv  RB1, 0x0001

        .equiv  PORTB_RB2, 0x0002
        .equiv  PORTB_RB2_WIDTH, 0x0001
        .equiv  PORTB_RB2_MASK, 0x0004
        .equiv  RB2, 0x0002

        .equiv  PORTB_RB3, 0x0003
        .equiv  PORTB_RB3_WIDTH, 0x0001
        .equiv  PORTB_RB3_MASK, 0x0008
        .equiv  RB3, 0x0003

        .equiv  PORTB_RB4, 0x0004
        .equiv  PORTB_RB4_WIDTH, 0x0001
        .equiv  PORTB_RB4_MASK, 0x0010
        .equiv  RB4, 0x0004

        .equiv  PORTB_RB5, 0x0005
        .equiv  PORTB_RB5_WIDTH, 0x0001
        .equiv  PORTB_RB5_MASK, 0x0020
        .equiv  RB5, 0x0005

        .equiv  PORTB_RB6, 0x0006
        .equiv  PORTB_RB6_WIDTH, 0x0001
        .equiv  PORTB_RB6_MASK, 0x0040
        .equiv  RB6, 0x0006

        .equiv  PORTB_RB7, 0x0007
        .equiv  PORTB_RB7_WIDTH, 0x0001
        .equiv  PORTB_RB7_MASK, 0x0080
        .equiv  RB7, 0x0007

        .equiv  PORTB_RB8, 0x0008
        .equiv  PORTB_RB8_WIDTH, 0x0001
        .equiv  PORTB_RB8_MASK, 0x0100
        .equiv  RB8, 0x0008

        .equiv  PORTB_RB9, 0x0009
        .equiv  PORTB_RB9_WIDTH, 0x0001
        .equiv  PORTB_RB9_MASK, 0x0200
        .equiv  RB9, 0x0009

        .equiv  PORTB_RB10, 0x000A
        .equiv  PORTB_RB10_WIDTH, 0x0001
        .equiv  PORTB_RB10_MASK, 0x0400
        .equiv  RB10, 0x000A

        .equiv  PORTB_RB11, 0x000B
        .equiv  PORTB_RB11_WIDTH, 0x0001
        .equiv  PORTB_RB11_MASK, 0x0800
        .equiv  RB11, 0x000B

        .equiv  PORTB_RB12, 0x000C
        .equiv  PORTB_RB12_WIDTH, 0x0001
        .equiv  PORTB_RB12_MASK, 0x1000
        .equiv  RB12, 0x000C

;----- LATB Bits -----------------------------------------------------
        .equiv  LATB_LATB0, 0x0000
        .equiv  LATB_LATB0_WIDTH, 0x0001
        .equiv  LATB_LATB0_MASK, 0x0001
        .equiv  LATB0, 0x0000

        .equiv  LATB_LATB1, 0x0001
        .equiv  LATB_LATB1_WIDTH, 0x0001
        .equiv  LATB_LATB1_MASK, 0x0002
        .equiv  LATB1, 0x0001

        .equiv  LATB_LATB2, 0x0002
        .equiv  LATB_LATB2_WIDTH, 0x0001
        .equiv  LATB_LATB2_MASK, 0x0004
        .equiv  LATB2, 0x0002

        .equiv  LATB_LATB3, 0x0003
        .equiv  LATB_LATB3_WIDTH, 0x0001
        .equiv  LATB_LATB3_MASK, 0x0008
        .equiv  LATB3, 0x0003

        .equiv  LATB_LATB4, 0x0004
        .equiv  LATB_LATB4_WIDTH, 0x0001
        .equiv  LATB_LATB4_MASK, 0x0010
        .equiv  LATB4, 0x0004

        .equiv  LATB_LATB5, 0x0005
        .equiv  LATB_LATB5_WIDTH, 0x0001
        .equiv  LATB_LATB5_MASK, 0x0020
        .equiv  LATB5, 0x0005

        .equiv  LATB_LATB6, 0x0006
        .equiv  LATB_LATB6_WIDTH, 0x0001
        .equiv  LATB_LATB6_MASK, 0x0040
        .equiv  LATB6, 0x0006

        .equiv  LATB_LATB7, 0x0007
        .equiv  LATB_LATB7_WIDTH, 0x0001
        .equiv  LATB_LATB7_MASK, 0x0080
        .equiv  LATB7, 0x0007

        .equiv  LATB_LATB8, 0x0008
        .equiv  LATB_LATB8_WIDTH, 0x0001
        .equiv  LATB_LATB8_MASK, 0x0100
        .equiv  LATB8, 0x0008

        .equiv  LATB_LATB9, 0x0009
        .equiv  LATB_LATB9_WIDTH, 0x0001
        .equiv  LATB_LATB9_MASK, 0x0200
        .equiv  LATB9, 0x0009

        .equiv  LATB_LATB10, 0x000A
        .equiv  LATB_LATB10_WIDTH, 0x0001
        .equiv  LATB_LATB10_MASK, 0x0400
        .equiv  LATB10, 0x000A

        .equiv  LATB_LATB11, 0x000B
        .equiv  LATB_LATB11_WIDTH, 0x0001
        .equiv  LATB_LATB11_MASK, 0x0800
        .equiv  LATB11, 0x000B

        .equiv  LATB_LATB12, 0x000C
        .equiv  LATB_LATB12_WIDTH, 0x0001
        .equiv  LATB_LATB12_MASK, 0x1000
        .equiv  LATB12, 0x000C

;----- TRISC Bits -----------------------------------------------------
        .equiv  TRISC_TRISC13, 0x000D
        .equiv  TRISC_TRISC13_WIDTH, 0x0001
        .equiv  TRISC_TRISC13_MASK, 0x2000
        .equiv  TRISC13, 0x000D

        .equiv  TRISC_TRISC14, 0x000E
        .equiv  TRISC_TRISC14_WIDTH, 0x0001
        .equiv  TRISC_TRISC14_MASK, 0x4000
        .equiv  TRISC14, 0x000E

        .equiv  TRISC_TRISC15, 0x000F
        .equiv  TRISC_TRISC15_WIDTH, 0x0001
        .equiv  TRISC_TRISC15_MASK, 0x8000
        .equiv  TRISC15, 0x000F

;----- PORTC Bits -----------------------------------------------------
        .equiv  PORTC_RC13, 0x000D
        .equiv  PORTC_RC13_WIDTH, 0x0001
        .equiv  PORTC_RC13_MASK, 0x2000
        .equiv  RC13, 0x000D

        .equiv  PORTC_RC14, 0x000E
        .equiv  PORTC_RC14_WIDTH, 0x0001
        .equiv  PORTC_RC14_MASK, 0x4000
        .equiv  RC14, 0x000E

        .equiv  PORTC_RC15, 0x000F
        .equiv  PORTC_RC15_WIDTH, 0x0001
        .equiv  PORTC_RC15_MASK, 0x8000
        .equiv  RC15, 0x000F

;----- LATC Bits -----------------------------------------------------
        .equiv  LATC_LATC13, 0x000D
        .equiv  LATC_LATC13_WIDTH, 0x0001
        .equiv  LATC_LATC13_MASK, 0x2000
        .equiv  LATC13, 0x000D

        .equiv  LATC_LATC14, 0x000E
        .equiv  LATC_LATC14_WIDTH, 0x0001
        .equiv  LATC_LATC14_MASK, 0x4000
        .equiv  LATC14, 0x000E

        .equiv  LATC_LATC15, 0x000F
        .equiv  LATC_LATC15_WIDTH, 0x0001
        .equiv  LATC_LATC15_MASK, 0x8000
        .equiv  LATC15, 0x000F

;----- TRISD Bits -----------------------------------------------------
        .equiv  TRISD_TRISD0, 0x0000
        .equiv  TRISD_TRISD0_WIDTH, 0x0001
        .equiv  TRISD_TRISD0_MASK, 0x0001
        .equiv  TRISD0, 0x0000

        .equiv  TRISD_TRISD1, 0x0001
        .equiv  TRISD_TRISD1_WIDTH, 0x0001
        .equiv  TRISD_TRISD1_MASK, 0x0002
        .equiv  TRISD1, 0x0001

        .equiv  TRISD_TRISD2, 0x0002
        .equiv  TRISD_TRISD2_WIDTH, 0x0001
        .equiv  TRISD_TRISD2_MASK, 0x0004
        .equiv  TRISD2, 0x0002

        .equiv  TRISD_TRISD3, 0x0003
        .equiv  TRISD_TRISD3_WIDTH, 0x0001
        .equiv  TRISD_TRISD3_MASK, 0x0008
        .equiv  TRISD3, 0x0003

        .equiv  TRISD_TRISD8, 0x0008
        .equiv  TRISD_TRISD8_WIDTH, 0x0001
        .equiv  TRISD_TRISD8_MASK, 0x0100
        .equiv  TRISD8, 0x0008

        .equiv  TRISD_TRISD9, 0x0009
        .equiv  TRISD_TRISD9_WIDTH, 0x0001
        .equiv  TRISD_TRISD9_MASK, 0x0200
        .equiv  TRISD9, 0x0009

;----- PORTD Bits -----------------------------------------------------
        .equiv  PORTD_RD0, 0x0000
        .equiv  PORTD_RD0_WIDTH, 0x0001
        .equiv  PORTD_RD0_MASK, 0x0001
        .equiv  RD0, 0x0000

        .equiv  PORTD_RD1, 0x0001
        .equiv  PORTD_RD1_WIDTH, 0x0001
        .equiv  PORTD_RD1_MASK, 0x0002
        .equiv  RD1, 0x0001

        .equiv  PORTD_RD2, 0x0002
        .equiv  PORTD_RD2_WIDTH, 0x0001
        .equiv  PORTD_RD2_MASK, 0x0004
        .equiv  RD2, 0x0002

        .equiv  PORTD_RD3, 0x0003
        .equiv  PORTD_RD3_WIDTH, 0x0001
        .equiv  PORTD_RD3_MASK, 0x0008
        .equiv  RD3, 0x0003

        .equiv  PORTD_RD8, 0x0008
        .equiv  PORTD_RD8_WIDTH, 0x0001
        .equiv  PORTD_RD8_MASK, 0x0100
        .equiv  RD8, 0x0008

        .equiv  PORTD_RD9, 0x0009
        .equiv  PORTD_RD9_WIDTH, 0x0001
        .equiv  PORTD_RD9_MASK, 0x0200
        .equiv  RD9, 0x0009

;----- LATD Bits -----------------------------------------------------
        .equiv  LATD_LATD0, 0x0000
        .equiv  LATD_LATD0_WIDTH, 0x0001
        .equiv  LATD_LATD0_MASK, 0x0001
        .equiv  LATD0, 0x0000

        .equiv  LATD_LATD1, 0x0001
        .equiv  LATD_LATD1_WIDTH, 0x0001
        .equiv  LATD_LATD1_MASK, 0x0002
        .equiv  LATD1, 0x0001

        .equiv  LATD_LATD2, 0x0002
        .equiv  LATD_LATD2_WIDTH, 0x0001
        .equiv  LATD_LATD2_MASK, 0x0004
        .equiv  LATD2, 0x0002

        .equiv  LATD_LATD3, 0x0003
        .equiv  LATD_LATD3_WIDTH, 0x0001
        .equiv  LATD_LATD3_MASK, 0x0008
        .equiv  LATD3, 0x0003

        .equiv  LATD_LATD8, 0x0008
        .equiv  LATD_LATD8_WIDTH, 0x0001
        .equiv  LATD_LATD8_MASK, 0x0100
        .equiv  LATD8, 0x0008

        .equiv  LATD_LATD9, 0x0009
        .equiv  LATD_LATD9_WIDTH, 0x0001
        .equiv  LATD_LATD9_MASK, 0x0200
        .equiv  LATD9, 0x0009

;----- TRISF Bits -----------------------------------------------------
        .equiv  TRISF_TRISF0, 0x0000
        .equiv  TRISF_TRISF0_WIDTH, 0x0001
        .equiv  TRISF_TRISF0_MASK, 0x0001
        .equiv  TRISF0, 0x0000

        .equiv  TRISF_TRISF1, 0x0001
        .equiv  TRISF_TRISF1_WIDTH, 0x0001
        .equiv  TRISF_TRISF1_MASK, 0x0002
        .equiv  TRISF1, 0x0001

        .equiv  TRISF_TRISF2, 0x0002
        .equiv  TRISF_TRISF2_WIDTH, 0x0001
        .equiv  TRISF_TRISF2_MASK, 0x0004
        .equiv  TRISF2, 0x0002

        .equiv  TRISF_TRISF3, 0x0003
        .equiv  TRISF_TRISF3_WIDTH, 0x0001
        .equiv  TRISF_TRISF3_MASK, 0x0008
        .equiv  TRISF3, 0x0003

        .equiv  TRISF_TRISF4, 0x0004
        .equiv  TRISF_TRISF4_WIDTH, 0x0001
        .equiv  TRISF_TRISF4_MASK, 0x0010
        .equiv  TRISF4, 0x0004

        .equiv  TRISF_TRISF5, 0x0005
        .equiv  TRISF_TRISF5_WIDTH, 0x0001
        .equiv  TRISF_TRISF5_MASK, 0x0020
        .equiv  TRISF5, 0x0005

        .equiv  TRISF_TRISF6, 0x0006
        .equiv  TRISF_TRISF6_WIDTH, 0x0001
        .equiv  TRISF_TRISF6_MASK, 0x0040
        .equiv  TRISF6, 0x0006

;----- PORTF Bits -----------------------------------------------------
        .equiv  PORTF_RF0, 0x0000
        .equiv  PORTF_RF0_WIDTH, 0x0001
        .equiv  PORTF_RF0_MASK, 0x0001
        .equiv  RF0, 0x0000

        .equiv  PORTF_RF1, 0x0001
        .equiv  PORTF_RF1_WIDTH, 0x0001
        .equiv  PORTF_RF1_MASK, 0x0002
        .equiv  RF1, 0x0001

        .equiv  PORTF_RF2, 0x0002
        .equiv  PORTF_RF2_WIDTH, 0x0001
        .equiv  PORTF_RF2_MASK, 0x0004
        .equiv  RF2, 0x0002

        .equiv  PORTF_RF3, 0x0003
        .equiv  PORTF_RF3_WIDTH, 0x0001
        .equiv  PORTF_RF3_MASK, 0x0008
        .equiv  RF3, 0x0003

        .equiv  PORTF_RF4, 0x0004
        .equiv  PORTF_RF4_WIDTH, 0x0001
        .equiv  PORTF_RF4_MASK, 0x0010
        .equiv  RF4, 0x0004

        .equiv  PORTF_RF5, 0x0005
        .equiv  PORTF_RF5_WIDTH, 0x0001
        .equiv  PORTF_RF5_MASK, 0x0020
        .equiv  RF5, 0x0005

        .equiv  PORTF_RF6, 0x0006
        .equiv  PORTF_RF6_WIDTH, 0x0001
        .equiv  PORTF_RF6_MASK, 0x0040
        .equiv  RF6, 0x0006

;----- LATF Bits -----------------------------------------------------
        .equiv  LATF_LATF0, 0x0000
        .equiv  LATF_LATF0_WIDTH, 0x0001
        .equiv  LATF_LATF0_MASK, 0x0001
        .equiv  LATF0, 0x0000

        .equiv  LATF_LATF1, 0x0001
        .equiv  LATF_LATF1_WIDTH, 0x0001
        .equiv  LATF_LATF1_MASK, 0x0002
        .equiv  LATF1, 0x0001

        .equiv  LATF_LATF2, 0x0002
        .equiv  LATF_LATF2_WIDTH, 0x0001
        .equiv  LATF_LATF2_MASK, 0x0004
        .equiv  LATF2, 0x0002

        .equiv  LATF_LATF3, 0x0003
        .equiv  LATF_LATF3_WIDTH, 0x0001
        .equiv  LATF_LATF3_MASK, 0x0008
        .equiv  LATF3, 0x0003

        .equiv  LATF_LATF4, 0x0004
        .equiv  LATF_LATF4_WIDTH, 0x0001
        .equiv  LATF_LATF4_MASK, 0x0010
        .equiv  LATF4, 0x0004

        .equiv  LATF_LATF5, 0x0005
        .equiv  LATF_LATF5_WIDTH, 0x0001
        .equiv  LATF_LATF5_MASK, 0x0020
        .equiv  LATF5, 0x0005

        .equiv  LATF_LATF6, 0x0006
        .equiv  LATF_LATF6_WIDTH, 0x0001
        .equiv  LATF_LATF6_MASK, 0x0040
        .equiv  LATF6, 0x0006

;----- C1RXF0SID Bits -----------------------------------------------------
        .equiv  C1RXF0SID_EXIDE, 0x0000
        .equiv  C1RXF0SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF0SID_EXIDE_MASK, 0x0001
        .equiv  EXIDE, 0x0000

        .equiv  C1RXF0SID_SID0, 0x0002
        .equiv  C1RXF0SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID0_MASK, 0x0004
        .equiv  SID0, 0x0002

        .equiv  C1RXF0SID_SID1, 0x0003
        .equiv  C1RXF0SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID1_MASK, 0x0008
        .equiv  SID1, 0x0003

        .equiv  C1RXF0SID_SID2, 0x0004
        .equiv  C1RXF0SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID2_MASK, 0x0010
        .equiv  SID2, 0x0004

        .equiv  C1RXF0SID_SID3, 0x0005
        .equiv  C1RXF0SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID3_MASK, 0x0020
        .equiv  SID3, 0x0005

        .equiv  C1RXF0SID_SID4, 0x0006
        .equiv  C1RXF0SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID4_MASK, 0x0040
        .equiv  SID4, 0x0006

        .equiv  C1RXF0SID_SID5, 0x0007
        .equiv  C1RXF0SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID5_MASK, 0x0080
        .equiv  SID5, 0x0007

        .equiv  C1RXF0SID_SID6_C1RXF0SID, 0x0008
        .equiv  C1RXF0SID_SID6_C1RXF0SID_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID6_C1RXF0SID_MASK, 0x0100
        .equiv  SID6_C1RXF0SID, 0x0008

        .equiv  C1RXF0SID_SID7_C1RXF0SID, 0x0009
        .equiv  C1RXF0SID_SID7_C1RXF0SID_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID7_C1RXF0SID_MASK, 0x0200
        .equiv  SID7_C1RXF0SID, 0x0009

        .equiv  C1RXF0SID_SID8_C1RXF0SID, 0x000A
        .equiv  C1RXF0SID_SID8_C1RXF0SID_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID8_C1RXF0SID_MASK, 0x0400
        .equiv  SID8_C1RXF0SID, 0x000A

        .equiv  C1RXF0SID_SID9_C1RXF0SID, 0x000B
        .equiv  C1RXF0SID_SID9_C1RXF0SID_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID9_C1RXF0SID_MASK, 0x0800
        .equiv  SID9_C1RXF0SID, 0x000B

        .equiv  C1RXF0SID_SID10_C1RXF0SID, 0x000C
        .equiv  C1RXF0SID_SID10_C1RXF0SID_WIDTH, 0x0001
        .equiv  C1RXF0SID_SID10_C1RXF0SID_MASK, 0x1000
        .equiv  SID10_C1RXF0SID, 0x000C

        .equiv  C1RXF0SID_SID, 0x0002
        .equiv  C1RXF0SID_SID_WIDTH, 0x000B
        .equiv  C1RXF0SID_SID_MASK, 0x1FFC

;----- C1RXF0EIDH Bits -----------------------------------------------------
        .equiv  C1RXF0EIDH_EID6, 0x0000
        .equiv  C1RXF0EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID6_MASK, 0x0001
        .equiv  EID6, 0x0000

        .equiv  C1RXF0EIDH_EID7, 0x0001
        .equiv  C1RXF0EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID7_MASK, 0x0002
        .equiv  EID7, 0x0001

        .equiv  C1RXF0EIDH_EID8, 0x0002
        .equiv  C1RXF0EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID8_MASK, 0x0004
        .equiv  EID8, 0x0002

        .equiv  C1RXF0EIDH_EID9, 0x0003
        .equiv  C1RXF0EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID9_MASK, 0x0008
        .equiv  EID9, 0x0003

        .equiv  C1RXF0EIDH_EID10, 0x0004
        .equiv  C1RXF0EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID10_MASK, 0x0010
        .equiv  EID10, 0x0004

        .equiv  C1RXF0EIDH_EID11, 0x0005
        .equiv  C1RXF0EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID11_MASK, 0x0020
        .equiv  EID11, 0x0005

        .equiv  C1RXF0EIDH_EID12, 0x0006
        .equiv  C1RXF0EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID12_MASK, 0x0040
        .equiv  EID12, 0x0006

        .equiv  C1RXF0EIDH_EID13, 0x0007
        .equiv  C1RXF0EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID13_MASK, 0x0080
        .equiv  EID13, 0x0007

        .equiv  C1RXF0EIDH_EID14_C1RXF0EIDH, 0x0008
        .equiv  C1RXF0EIDH_EID14_C1RXF0EIDH_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID14_C1RXF0EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF0EIDH, 0x0008

        .equiv  C1RXF0EIDH_EID15_C1RXF0EIDH, 0x0009
        .equiv  C1RXF0EIDH_EID15_C1RXF0EIDH_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID15_C1RXF0EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF0EIDH, 0x0009

        .equiv  C1RXF0EIDH_EID16_C1RXF0EIDH, 0x000A
        .equiv  C1RXF0EIDH_EID16_C1RXF0EIDH_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID16_C1RXF0EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF0EIDH, 0x000A

        .equiv  C1RXF0EIDH_EID17_C1RXF0EIDH, 0x000B
        .equiv  C1RXF0EIDH_EID17_C1RXF0EIDH_WIDTH, 0x0001
        .equiv  C1RXF0EIDH_EID17_C1RXF0EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF0EIDH, 0x000B

;----- C1RXF0EIDL Bits -----------------------------------------------------
        .equiv  C1RXF0EIDL_EID0, 0x000A
        .equiv  C1RXF0EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID0_MASK, 0x0400
        .equiv  EID0, 0x000A

        .equiv  C1RXF0EIDL_EID1, 0x000B
        .equiv  C1RXF0EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID1_MASK, 0x0800
        .equiv  EID1, 0x000B

        .equiv  C1RXF0EIDL_EID2, 0x000C
        .equiv  C1RXF0EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID2_MASK, 0x1000
        .equiv  EID2, 0x000C

        .equiv  C1RXF0EIDL_EID3, 0x000D
        .equiv  C1RXF0EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID3_MASK, 0x2000
        .equiv  EID3, 0x000D

        .equiv  C1RXF0EIDL_EID4, 0x000E
        .equiv  C1RXF0EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID4_MASK, 0x4000
        .equiv  EID4, 0x000E

        .equiv  C1RXF0EIDL_EID5, 0x000F
        .equiv  C1RXF0EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF0EIDL_EID5_MASK, 0x8000
        .equiv  EID5, 0x000F

        .equiv  C1RXF0EIDL_EID5_0, 0x000A
        .equiv  C1RXF0EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF0EIDL_EID5_0_MASK, 0xFC00

;----- C1RXF1SID Bits -----------------------------------------------------
        .equiv  C1RXF1SID_EXIDE, 0x0000
        .equiv  C1RXF1SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF1SID_EXIDE_MASK, 0x0001

        .equiv  C1RXF1SID_SID0, 0x0002
        .equiv  C1RXF1SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID0_MASK, 0x0004

        .equiv  C1RXF1SID_SID1, 0x0003
        .equiv  C1RXF1SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID1_MASK, 0x0008

        .equiv  C1RXF1SID_SID2, 0x0004
        .equiv  C1RXF1SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID2_MASK, 0x0010

        .equiv  C1RXF1SID_SID3, 0x0005
        .equiv  C1RXF1SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID3_MASK, 0x0020

        .equiv  C1RXF1SID_SID4, 0x0006
        .equiv  C1RXF1SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID4_MASK, 0x0040

        .equiv  C1RXF1SID_SID5, 0x0007
        .equiv  C1RXF1SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID5_MASK, 0x0080

        .equiv  C1RXF1SID_SID6_C1RXF1SID, 0x0008
        .equiv  C1RXF1SID_SID6_C1RXF1SID_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID6_C1RXF1SID_MASK, 0x0100
        .equiv  SID6_C1RXF1SID, 0x0008

        .equiv  C1RXF1SID_SID7_C1RXF1SID, 0x0009
        .equiv  C1RXF1SID_SID7_C1RXF1SID_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID7_C1RXF1SID_MASK, 0x0200
        .equiv  SID7_C1RXF1SID, 0x0009

        .equiv  C1RXF1SID_SID8_C1RXF1SID, 0x000A
        .equiv  C1RXF1SID_SID8_C1RXF1SID_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID8_C1RXF1SID_MASK, 0x0400
        .equiv  SID8_C1RXF1SID, 0x000A

        .equiv  C1RXF1SID_SID9_C1RXF1SID, 0x000B
        .equiv  C1RXF1SID_SID9_C1RXF1SID_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID9_C1RXF1SID_MASK, 0x0800
        .equiv  SID9_C1RXF1SID, 0x000B

        .equiv  C1RXF1SID_SID10_C1RXF1SID, 0x000C
        .equiv  C1RXF1SID_SID10_C1RXF1SID_WIDTH, 0x0001
        .equiv  C1RXF1SID_SID10_C1RXF1SID_MASK, 0x1000
        .equiv  SID10_C1RXF1SID, 0x000C

        .equiv  C1RXF1SID_SID, 0x0002
        .equiv  C1RXF1SID_SID_WIDTH, 0x000B
        .equiv  C1RXF1SID_SID_MASK, 0x1FFC

;----- C1RXF1EIDH Bits -----------------------------------------------------
        .equiv  C1RXF1EIDH_EID6, 0x0000
        .equiv  C1RXF1EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID6_MASK, 0x0001

        .equiv  C1RXF1EIDH_EID7, 0x0001
        .equiv  C1RXF1EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID7_MASK, 0x0002

        .equiv  C1RXF1EIDH_EID8, 0x0002
        .equiv  C1RXF1EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID8_MASK, 0x0004

        .equiv  C1RXF1EIDH_EID9, 0x0003
        .equiv  C1RXF1EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID9_MASK, 0x0008

        .equiv  C1RXF1EIDH_EID10, 0x0004
        .equiv  C1RXF1EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID10_MASK, 0x0010

        .equiv  C1RXF1EIDH_EID11, 0x0005
        .equiv  C1RXF1EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID11_MASK, 0x0020

        .equiv  C1RXF1EIDH_EID12, 0x0006
        .equiv  C1RXF1EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID12_MASK, 0x0040

        .equiv  C1RXF1EIDH_EID13, 0x0007
        .equiv  C1RXF1EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID13_MASK, 0x0080

        .equiv  C1RXF1EIDH_EID14_C1RXF1EIDH, 0x0008
        .equiv  C1RXF1EIDH_EID14_C1RXF1EIDH_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID14_C1RXF1EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF1EIDH, 0x0008

        .equiv  C1RXF1EIDH_EID15_C1RXF1EIDH, 0x0009
        .equiv  C1RXF1EIDH_EID15_C1RXF1EIDH_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID15_C1RXF1EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF1EIDH, 0x0009

        .equiv  C1RXF1EIDH_EID16_C1RXF1EIDH, 0x000A
        .equiv  C1RXF1EIDH_EID16_C1RXF1EIDH_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID16_C1RXF1EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF1EIDH, 0x000A

        .equiv  C1RXF1EIDH_EID17_C1RXF1EIDH, 0x000B
        .equiv  C1RXF1EIDH_EID17_C1RXF1EIDH_WIDTH, 0x0001
        .equiv  C1RXF1EIDH_EID17_C1RXF1EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF1EIDH, 0x000B

;----- C1RXF1EIDL Bits -----------------------------------------------------
        .equiv  C1RXF1EIDL_EID0, 0x000A
        .equiv  C1RXF1EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID0_MASK, 0x0400

        .equiv  C1RXF1EIDL_EID1, 0x000B
        .equiv  C1RXF1EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID1_MASK, 0x0800

        .equiv  C1RXF1EIDL_EID2, 0x000C
        .equiv  C1RXF1EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID2_MASK, 0x1000

        .equiv  C1RXF1EIDL_EID3, 0x000D
        .equiv  C1RXF1EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID3_MASK, 0x2000

        .equiv  C1RXF1EIDL_EID4, 0x000E
        .equiv  C1RXF1EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID4_MASK, 0x4000

        .equiv  C1RXF1EIDL_EID5, 0x000F
        .equiv  C1RXF1EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF1EIDL_EID5_MASK, 0x8000

        .equiv  C1RXF1EIDL_EID5_0, 0x000A
        .equiv  C1RXF1EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF1EIDL_EID5_0_MASK, 0xFC00

;----- C1RXF2SID Bits -----------------------------------------------------
        .equiv  C1RXF2SID_EXIDE, 0x0000
        .equiv  C1RXF2SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF2SID_EXIDE_MASK, 0x0001

        .equiv  C1RXF2SID_SID0, 0x0002
        .equiv  C1RXF2SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID0_MASK, 0x0004

        .equiv  C1RXF2SID_SID1, 0x0003
        .equiv  C1RXF2SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID1_MASK, 0x0008

        .equiv  C1RXF2SID_SID2, 0x0004
        .equiv  C1RXF2SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID2_MASK, 0x0010

        .equiv  C1RXF2SID_SID3, 0x0005
        .equiv  C1RXF2SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID3_MASK, 0x0020

        .equiv  C1RXF2SID_SID4, 0x0006
        .equiv  C1RXF2SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID4_MASK, 0x0040

        .equiv  C1RXF2SID_SID5, 0x0007
        .equiv  C1RXF2SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID5_MASK, 0x0080

        .equiv  C1RXF2SID_SID6_C1RXF2SID, 0x0008
        .equiv  C1RXF2SID_SID6_C1RXF2SID_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID6_C1RXF2SID_MASK, 0x0100
        .equiv  SID6_C1RXF2SID, 0x0008

        .equiv  C1RXF2SID_SID7_C1RXF2SID, 0x0009
        .equiv  C1RXF2SID_SID7_C1RXF2SID_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID7_C1RXF2SID_MASK, 0x0200
        .equiv  SID7_C1RXF2SID, 0x0009

        .equiv  C1RXF2SID_SID8_C1RXF2SID, 0x000A
        .equiv  C1RXF2SID_SID8_C1RXF2SID_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID8_C1RXF2SID_MASK, 0x0400
        .equiv  SID8_C1RXF2SID, 0x000A

        .equiv  C1RXF2SID_SID9_C1RXF2SID, 0x000B
        .equiv  C1RXF2SID_SID9_C1RXF2SID_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID9_C1RXF2SID_MASK, 0x0800
        .equiv  SID9_C1RXF2SID, 0x000B

        .equiv  C1RXF2SID_SID10_C1RXF2SID, 0x000C
        .equiv  C1RXF2SID_SID10_C1RXF2SID_WIDTH, 0x0001
        .equiv  C1RXF2SID_SID10_C1RXF2SID_MASK, 0x1000
        .equiv  SID10_C1RXF2SID, 0x000C

        .equiv  C1RXF2SID_SID, 0x0002
        .equiv  C1RXF2SID_SID_WIDTH, 0x000B
        .equiv  C1RXF2SID_SID_MASK, 0x1FFC

;----- C1RXF2EIDH Bits -----------------------------------------------------
        .equiv  C1RXF2EIDH_EID6, 0x0000
        .equiv  C1RXF2EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID6_MASK, 0x0001

        .equiv  C1RXF2EIDH_EID7, 0x0001
        .equiv  C1RXF2EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID7_MASK, 0x0002

        .equiv  C1RXF2EIDH_EID8, 0x0002
        .equiv  C1RXF2EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID8_MASK, 0x0004

        .equiv  C1RXF2EIDH_EID9, 0x0003
        .equiv  C1RXF2EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID9_MASK, 0x0008

        .equiv  C1RXF2EIDH_EID10, 0x0004
        .equiv  C1RXF2EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID10_MASK, 0x0010

        .equiv  C1RXF2EIDH_EID11, 0x0005
        .equiv  C1RXF2EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID11_MASK, 0x0020

        .equiv  C1RXF2EIDH_EID12, 0x0006
        .equiv  C1RXF2EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID12_MASK, 0x0040

        .equiv  C1RXF2EIDH_EID13, 0x0007
        .equiv  C1RXF2EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID13_MASK, 0x0080

        .equiv  C1RXF2EIDH_EID14_C1RXF2EIDH, 0x0008
        .equiv  C1RXF2EIDH_EID14_C1RXF2EIDH_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID14_C1RXF2EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF2EIDH, 0x0008

        .equiv  C1RXF2EIDH_EID15_C1RXF2EIDH, 0x0009
        .equiv  C1RXF2EIDH_EID15_C1RXF2EIDH_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID15_C1RXF2EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF2EIDH, 0x0009

        .equiv  C1RXF2EIDH_EID16_C1RXF2EIDH, 0x000A
        .equiv  C1RXF2EIDH_EID16_C1RXF2EIDH_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID16_C1RXF2EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF2EIDH, 0x000A

        .equiv  C1RXF2EIDH_EID17_C1RXF2EIDH, 0x000B
        .equiv  C1RXF2EIDH_EID17_C1RXF2EIDH_WIDTH, 0x0001
        .equiv  C1RXF2EIDH_EID17_C1RXF2EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF2EIDH, 0x000B

;----- C1RXF2EIDL Bits -----------------------------------------------------
        .equiv  C1RXF2EIDL_EID0, 0x000A
        .equiv  C1RXF2EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID0_MASK, 0x0400

        .equiv  C1RXF2EIDL_EID1, 0x000B
        .equiv  C1RXF2EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID1_MASK, 0x0800

        .equiv  C1RXF2EIDL_EID2, 0x000C
        .equiv  C1RXF2EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID2_MASK, 0x1000

        .equiv  C1RXF2EIDL_EID3, 0x000D
        .equiv  C1RXF2EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID3_MASK, 0x2000

        .equiv  C1RXF2EIDL_EID4, 0x000E
        .equiv  C1RXF2EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID4_MASK, 0x4000

        .equiv  C1RXF2EIDL_EID5, 0x000F
        .equiv  C1RXF2EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF2EIDL_EID5_MASK, 0x8000

        .equiv  C1RXF2EIDL_EID5_0, 0x000A
        .equiv  C1RXF2EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF2EIDL_EID5_0_MASK, 0xFC00

;----- C1RXF3SID Bits -----------------------------------------------------
        .equiv  C1RXF3SID_EXIDE, 0x0000
        .equiv  C1RXF3SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF3SID_EXIDE_MASK, 0x0001

        .equiv  C1RXF3SID_SID0, 0x0002
        .equiv  C1RXF3SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID0_MASK, 0x0004

        .equiv  C1RXF3SID_SID1, 0x0003
        .equiv  C1RXF3SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID1_MASK, 0x0008

        .equiv  C1RXF3SID_SID2, 0x0004
        .equiv  C1RXF3SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID2_MASK, 0x0010

        .equiv  C1RXF3SID_SID3, 0x0005
        .equiv  C1RXF3SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID3_MASK, 0x0020

        .equiv  C1RXF3SID_SID4, 0x0006
        .equiv  C1RXF3SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID4_MASK, 0x0040

        .equiv  C1RXF3SID_SID5, 0x0007
        .equiv  C1RXF3SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID5_MASK, 0x0080

        .equiv  C1RXF3SID_SID6_C1RXF3SID, 0x0008
        .equiv  C1RXF3SID_SID6_C1RXF3SID_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID6_C1RXF3SID_MASK, 0x0100
        .equiv  SID6_C1RXF3SID, 0x0008

        .equiv  C1RXF3SID_SID7_C1RXF3SID, 0x0009
        .equiv  C1RXF3SID_SID7_C1RXF3SID_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID7_C1RXF3SID_MASK, 0x0200
        .equiv  SID7_C1RXF3SID, 0x0009

        .equiv  C1RXF3SID_SID8_C1RXF3SID, 0x000A
        .equiv  C1RXF3SID_SID8_C1RXF3SID_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID8_C1RXF3SID_MASK, 0x0400
        .equiv  SID8_C1RXF3SID, 0x000A

        .equiv  C1RXF3SID_SID9_C1RXF3SID, 0x000B
        .equiv  C1RXF3SID_SID9_C1RXF3SID_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID9_C1RXF3SID_MASK, 0x0800
        .equiv  SID9_C1RXF3SID, 0x000B

        .equiv  C1RXF3SID_SID10_C1RXF3SID, 0x000C
        .equiv  C1RXF3SID_SID10_C1RXF3SID_WIDTH, 0x0001
        .equiv  C1RXF3SID_SID10_C1RXF3SID_MASK, 0x1000
        .equiv  SID10_C1RXF3SID, 0x000C

        .equiv  C1RXF3SID_SID, 0x0002
        .equiv  C1RXF3SID_SID_WIDTH, 0x000B
        .equiv  C1RXF3SID_SID_MASK, 0x1FFC

;----- C1RXF3EIDH Bits -----------------------------------------------------
        .equiv  C1RXF3EIDH_EID6, 0x0000
        .equiv  C1RXF3EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID6_MASK, 0x0001

        .equiv  C1RXF3EIDH_EID7, 0x0001
        .equiv  C1RXF3EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID7_MASK, 0x0002

        .equiv  C1RXF3EIDH_EID8, 0x0002
        .equiv  C1RXF3EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID8_MASK, 0x0004

        .equiv  C1RXF3EIDH_EID9, 0x0003
        .equiv  C1RXF3EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID9_MASK, 0x0008

        .equiv  C1RXF3EIDH_EID10, 0x0004
        .equiv  C1RXF3EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID10_MASK, 0x0010

        .equiv  C1RXF3EIDH_EID11, 0x0005
        .equiv  C1RXF3EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID11_MASK, 0x0020

        .equiv  C1RXF3EIDH_EID12, 0x0006
        .equiv  C1RXF3EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID12_MASK, 0x0040

        .equiv  C1RXF3EIDH_EID13, 0x0007
        .equiv  C1RXF3EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID13_MASK, 0x0080

        .equiv  C1RXF3EIDH_EID14_C1RXF3EIDH, 0x0008
        .equiv  C1RXF3EIDH_EID14_C1RXF3EIDH_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID14_C1RXF3EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF3EIDH, 0x0008

        .equiv  C1RXF3EIDH_EID15_C1RXF3EIDH, 0x0009
        .equiv  C1RXF3EIDH_EID15_C1RXF3EIDH_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID15_C1RXF3EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF3EIDH, 0x0009

        .equiv  C1RXF3EIDH_EID16_C1RXF3EIDH, 0x000A
        .equiv  C1RXF3EIDH_EID16_C1RXF3EIDH_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID16_C1RXF3EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF3EIDH, 0x000A

        .equiv  C1RXF3EIDH_EID17_C1RXF3EIDH, 0x000B
        .equiv  C1RXF3EIDH_EID17_C1RXF3EIDH_WIDTH, 0x0001
        .equiv  C1RXF3EIDH_EID17_C1RXF3EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF3EIDH, 0x000B

;----- C1RXF3EIDL Bits -----------------------------------------------------
        .equiv  C1RXF3EIDL_EID0, 0x000A
        .equiv  C1RXF3EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID0_MASK, 0x0400

        .equiv  C1RXF3EIDL_EID1, 0x000B
        .equiv  C1RXF3EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID1_MASK, 0x0800

        .equiv  C1RXF3EIDL_EID2, 0x000C
        .equiv  C1RXF3EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID2_MASK, 0x1000

        .equiv  C1RXF3EIDL_EID3, 0x000D
        .equiv  C1RXF3EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID3_MASK, 0x2000

        .equiv  C1RXF3EIDL_EID4, 0x000E
        .equiv  C1RXF3EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID4_MASK, 0x4000

        .equiv  C1RXF3EIDL_EID5, 0x000F
        .equiv  C1RXF3EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF3EIDL_EID5_MASK, 0x8000

        .equiv  C1RXF3EIDL_EID5_0, 0x000A
        .equiv  C1RXF3EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF3EIDL_EID5_0_MASK, 0xFC00

;----- C1RXF4SID Bits -----------------------------------------------------
        .equiv  C1RXF4SID_EXIDE, 0x0000
        .equiv  C1RXF4SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF4SID_EXIDE_MASK, 0x0001

        .equiv  C1RXF4SID_SID0, 0x0002
        .equiv  C1RXF4SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID0_MASK, 0x0004

        .equiv  C1RXF4SID_SID1, 0x0003
        .equiv  C1RXF4SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID1_MASK, 0x0008

        .equiv  C1RXF4SID_SID2, 0x0004
        .equiv  C1RXF4SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID2_MASK, 0x0010

        .equiv  C1RXF4SID_SID3, 0x0005
        .equiv  C1RXF4SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID3_MASK, 0x0020

        .equiv  C1RXF4SID_SID4, 0x0006
        .equiv  C1RXF4SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID4_MASK, 0x0040

        .equiv  C1RXF4SID_SID5, 0x0007
        .equiv  C1RXF4SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID5_MASK, 0x0080

        .equiv  C1RXF4SID_SID6_C1RXF4SID, 0x0008
        .equiv  C1RXF4SID_SID6_C1RXF4SID_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID6_C1RXF4SID_MASK, 0x0100
        .equiv  SID6_C1RXF4SID, 0x0008

        .equiv  C1RXF4SID_SID7_C1RXF4SID, 0x0009
        .equiv  C1RXF4SID_SID7_C1RXF4SID_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID7_C1RXF4SID_MASK, 0x0200
        .equiv  SID7_C1RXF4SID, 0x0009

        .equiv  C1RXF4SID_SID8_C1RXF4SID, 0x000A
        .equiv  C1RXF4SID_SID8_C1RXF4SID_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID8_C1RXF4SID_MASK, 0x0400
        .equiv  SID8_C1RXF4SID, 0x000A

        .equiv  C1RXF4SID_SID9_C1RXF4SID, 0x000B
        .equiv  C1RXF4SID_SID9_C1RXF4SID_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID9_C1RXF4SID_MASK, 0x0800
        .equiv  SID9_C1RXF4SID, 0x000B

        .equiv  C1RXF4SID_SID10_C1RXF4SID, 0x000C
        .equiv  C1RXF4SID_SID10_C1RXF4SID_WIDTH, 0x0001
        .equiv  C1RXF4SID_SID10_C1RXF4SID_MASK, 0x1000
        .equiv  SID10_C1RXF4SID, 0x000C

        .equiv  C1RXF4SID_SID, 0x0002
        .equiv  C1RXF4SID_SID_WIDTH, 0x000B
        .equiv  C1RXF4SID_SID_MASK, 0x1FFC

;----- C1RXF4EIDH Bits -----------------------------------------------------
        .equiv  C1RXF4EIDH_EID6, 0x0000
        .equiv  C1RXF4EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID6_MASK, 0x0001

        .equiv  C1RXF4EIDH_EID7, 0x0001
        .equiv  C1RXF4EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID7_MASK, 0x0002

        .equiv  C1RXF4EIDH_EID8, 0x0002
        .equiv  C1RXF4EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID8_MASK, 0x0004

        .equiv  C1RXF4EIDH_EID9, 0x0003
        .equiv  C1RXF4EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID9_MASK, 0x0008

        .equiv  C1RXF4EIDH_EID10, 0x0004
        .equiv  C1RXF4EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID10_MASK, 0x0010

        .equiv  C1RXF4EIDH_EID11, 0x0005
        .equiv  C1RXF4EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID11_MASK, 0x0020

        .equiv  C1RXF4EIDH_EID12, 0x0006
        .equiv  C1RXF4EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID12_MASK, 0x0040

        .equiv  C1RXF4EIDH_EID13, 0x0007
        .equiv  C1RXF4EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID13_MASK, 0x0080

        .equiv  C1RXF4EIDH_EID14_C1RXF4EIDH, 0x0008
        .equiv  C1RXF4EIDH_EID14_C1RXF4EIDH_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID14_C1RXF4EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF4EIDH, 0x0008

        .equiv  C1RXF4EIDH_EID15_C1RXF4EIDH, 0x0009
        .equiv  C1RXF4EIDH_EID15_C1RXF4EIDH_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID15_C1RXF4EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF4EIDH, 0x0009

        .equiv  C1RXF4EIDH_EID16_C1RXF4EIDH, 0x000A
        .equiv  C1RXF4EIDH_EID16_C1RXF4EIDH_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID16_C1RXF4EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF4EIDH, 0x000A

        .equiv  C1RXF4EIDH_EID17_C1RXF4EIDH, 0x000B
        .equiv  C1RXF4EIDH_EID17_C1RXF4EIDH_WIDTH, 0x0001
        .equiv  C1RXF4EIDH_EID17_C1RXF4EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF4EIDH, 0x000B

;----- C1RXF4EIDL Bits -----------------------------------------------------
        .equiv  C1RXF4EIDL_EID0, 0x000A
        .equiv  C1RXF4EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID0_MASK, 0x0400

        .equiv  C1RXF4EIDL_EID1, 0x000B
        .equiv  C1RXF4EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID1_MASK, 0x0800

        .equiv  C1RXF4EIDL_EID2, 0x000C
        .equiv  C1RXF4EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID2_MASK, 0x1000

        .equiv  C1RXF4EIDL_EID3, 0x000D
        .equiv  C1RXF4EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID3_MASK, 0x2000

        .equiv  C1RXF4EIDL_EID4, 0x000E
        .equiv  C1RXF4EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID4_MASK, 0x4000

        .equiv  C1RXF4EIDL_EID5, 0x000F
        .equiv  C1RXF4EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF4EIDL_EID5_MASK, 0x8000

        .equiv  C1RXF4EIDL_EID5_0, 0x000A
        .equiv  C1RXF4EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF4EIDL_EID5_0_MASK, 0xFC00

;----- C1RXF5SID Bits -----------------------------------------------------
        .equiv  C1RXF5SID_EXIDE, 0x0000
        .equiv  C1RXF5SID_EXIDE_WIDTH, 0x0001
        .equiv  C1RXF5SID_EXIDE_MASK, 0x0001

        .equiv  C1RXF5SID_SID0, 0x0002
        .equiv  C1RXF5SID_SID0_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID0_MASK, 0x0004

        .equiv  C1RXF5SID_SID1, 0x0003
        .equiv  C1RXF5SID_SID1_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID1_MASK, 0x0008

        .equiv  C1RXF5SID_SID2, 0x0004
        .equiv  C1RXF5SID_SID2_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID2_MASK, 0x0010

        .equiv  C1RXF5SID_SID3, 0x0005
        .equiv  C1RXF5SID_SID3_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID3_MASK, 0x0020

        .equiv  C1RXF5SID_SID4, 0x0006
        .equiv  C1RXF5SID_SID4_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID4_MASK, 0x0040

        .equiv  C1RXF5SID_SID5, 0x0007
        .equiv  C1RXF5SID_SID5_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID5_MASK, 0x0080

        .equiv  C1RXF5SID_SID6_C1RXF5SID, 0x0008
        .equiv  C1RXF5SID_SID6_C1RXF5SID_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID6_C1RXF5SID_MASK, 0x0100
        .equiv  SID6_C1RXF5SID, 0x0008

        .equiv  C1RXF5SID_SID7_C1RXF5SID, 0x0009
        .equiv  C1RXF5SID_SID7_C1RXF5SID_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID7_C1RXF5SID_MASK, 0x0200
        .equiv  SID7_C1RXF5SID, 0x0009

        .equiv  C1RXF5SID_SID8_C1RXF5SID, 0x000A
        .equiv  C1RXF5SID_SID8_C1RXF5SID_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID8_C1RXF5SID_MASK, 0x0400
        .equiv  SID8_C1RXF5SID, 0x000A

        .equiv  C1RXF5SID_SID9_C1RXF5SID, 0x000B
        .equiv  C1RXF5SID_SID9_C1RXF5SID_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID9_C1RXF5SID_MASK, 0x0800
        .equiv  SID9_C1RXF5SID, 0x000B

        .equiv  C1RXF5SID_SID10_C1RXF5SID, 0x000C
        .equiv  C1RXF5SID_SID10_C1RXF5SID_WIDTH, 0x0001
        .equiv  C1RXF5SID_SID10_C1RXF5SID_MASK, 0x1000
        .equiv  SID10_C1RXF5SID, 0x000C

        .equiv  C1RXF5SID_SID, 0x0002
        .equiv  C1RXF5SID_SID_WIDTH, 0x000B
        .equiv  C1RXF5SID_SID_MASK, 0x1FFC

;----- C1RXF5EIDH Bits -----------------------------------------------------
        .equiv  C1RXF5EIDH_EID6, 0x0000
        .equiv  C1RXF5EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID6_MASK, 0x0001

        .equiv  C1RXF5EIDH_EID7, 0x0001
        .equiv  C1RXF5EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID7_MASK, 0x0002

        .equiv  C1RXF5EIDH_EID8, 0x0002
        .equiv  C1RXF5EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID8_MASK, 0x0004

        .equiv  C1RXF5EIDH_EID9, 0x0003
        .equiv  C1RXF5EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID9_MASK, 0x0008

        .equiv  C1RXF5EIDH_EID10, 0x0004
        .equiv  C1RXF5EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID10_MASK, 0x0010

        .equiv  C1RXF5EIDH_EID11, 0x0005
        .equiv  C1RXF5EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID11_MASK, 0x0020

        .equiv  C1RXF5EIDH_EID12, 0x0006
        .equiv  C1RXF5EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID12_MASK, 0x0040

        .equiv  C1RXF5EIDH_EID13, 0x0007
        .equiv  C1RXF5EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID13_MASK, 0x0080

        .equiv  C1RXF5EIDH_EID14_C1RXF5EIDH, 0x0008
        .equiv  C1RXF5EIDH_EID14_C1RXF5EIDH_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID14_C1RXF5EIDH_MASK, 0x0100
        .equiv  EID14_C1RXF5EIDH, 0x0008

        .equiv  C1RXF5EIDH_EID15_C1RXF5EIDH, 0x0009
        .equiv  C1RXF5EIDH_EID15_C1RXF5EIDH_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID15_C1RXF5EIDH_MASK, 0x0200
        .equiv  EID15_C1RXF5EIDH, 0x0009

        .equiv  C1RXF5EIDH_EID16_C1RXF5EIDH, 0x000A
        .equiv  C1RXF5EIDH_EID16_C1RXF5EIDH_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID16_C1RXF5EIDH_MASK, 0x0400
        .equiv  EID16_C1RXF5EIDH, 0x000A

        .equiv  C1RXF5EIDH_EID17_C1RXF5EIDH, 0x000B
        .equiv  C1RXF5EIDH_EID17_C1RXF5EIDH_WIDTH, 0x0001
        .equiv  C1RXF5EIDH_EID17_C1RXF5EIDH_MASK, 0x0800
        .equiv  EID17_C1RXF5EIDH, 0x000B

;----- C1RXF5EIDL Bits -----------------------------------------------------
        .equiv  C1RXF5EIDL_EID0, 0x000A
        .equiv  C1RXF5EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID0_MASK, 0x0400

        .equiv  C1RXF5EIDL_EID1, 0x000B
        .equiv  C1RXF5EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID1_MASK, 0x0800

        .equiv  C1RXF5EIDL_EID2, 0x000C
        .equiv  C1RXF5EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID2_MASK, 0x1000

        .equiv  C1RXF5EIDL_EID3, 0x000D
        .equiv  C1RXF5EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID3_MASK, 0x2000

        .equiv  C1RXF5EIDL_EID4, 0x000E
        .equiv  C1RXF5EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID4_MASK, 0x4000

        .equiv  C1RXF5EIDL_EID5, 0x000F
        .equiv  C1RXF5EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXF5EIDL_EID5_MASK, 0x8000

        .equiv  C1RXF5EIDL_EID5_0, 0x000A
        .equiv  C1RXF5EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXF5EIDL_EID5_0_MASK, 0xFC00

;----- C1RXM0SID Bits -----------------------------------------------------
        .equiv  C1RXM0SID_MIDE, 0x0000
        .equiv  C1RXM0SID_MIDE_WIDTH, 0x0001
        .equiv  C1RXM0SID_MIDE_MASK, 0x0001
        .equiv  MIDE, 0x0000

        .equiv  C1RXM0SID_SID0, 0x0002
        .equiv  C1RXM0SID_SID0_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID0_MASK, 0x0004

        .equiv  C1RXM0SID_SID1, 0x0003
        .equiv  C1RXM0SID_SID1_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID1_MASK, 0x0008

        .equiv  C1RXM0SID_SID2, 0x0004
        .equiv  C1RXM0SID_SID2_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID2_MASK, 0x0010

        .equiv  C1RXM0SID_SID3, 0x0005
        .equiv  C1RXM0SID_SID3_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID3_MASK, 0x0020

        .equiv  C1RXM0SID_SID4, 0x0006
        .equiv  C1RXM0SID_SID4_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID4_MASK, 0x0040

        .equiv  C1RXM0SID_SID5, 0x0007
        .equiv  C1RXM0SID_SID5_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID5_MASK, 0x0080

        .equiv  C1RXM0SID_SID6_C1RXM0SID, 0x0008
        .equiv  C1RXM0SID_SID6_C1RXM0SID_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID6_C1RXM0SID_MASK, 0x0100
        .equiv  SID6_C1RXM0SID, 0x0008

        .equiv  C1RXM0SID_SID7_C1RXM0SID, 0x0009
        .equiv  C1RXM0SID_SID7_C1RXM0SID_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID7_C1RXM0SID_MASK, 0x0200
        .equiv  SID7_C1RXM0SID, 0x0009

        .equiv  C1RXM0SID_SID8_C1RXM0SID, 0x000A
        .equiv  C1RXM0SID_SID8_C1RXM0SID_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID8_C1RXM0SID_MASK, 0x0400
        .equiv  SID8_C1RXM0SID, 0x000A

        .equiv  C1RXM0SID_SID9_C1RXM0SID, 0x000B
        .equiv  C1RXM0SID_SID9_C1RXM0SID_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID9_C1RXM0SID_MASK, 0x0800
        .equiv  SID9_C1RXM0SID, 0x000B

        .equiv  C1RXM0SID_SID10_C1RXM0SID, 0x000C
        .equiv  C1RXM0SID_SID10_C1RXM0SID_WIDTH, 0x0001
        .equiv  C1RXM0SID_SID10_C1RXM0SID_MASK, 0x1000
        .equiv  SID10_C1RXM0SID, 0x000C

        .equiv  C1RXM0SID_SID, 0x0002
        .equiv  C1RXM0SID_SID_WIDTH, 0x000B
        .equiv  C1RXM0SID_SID_MASK, 0x1FFC

;----- C1RXM0EIDH Bits -----------------------------------------------------
        .equiv  C1RXM0EIDH_EID6, 0x0000
        .equiv  C1RXM0EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID6_MASK, 0x0001

        .equiv  C1RXM0EIDH_EID7, 0x0001
        .equiv  C1RXM0EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID7_MASK, 0x0002

        .equiv  C1RXM0EIDH_EID8, 0x0002
        .equiv  C1RXM0EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID8_MASK, 0x0004

        .equiv  C1RXM0EIDH_EID9, 0x0003
        .equiv  C1RXM0EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID9_MASK, 0x0008

        .equiv  C1RXM0EIDH_EID10, 0x0004
        .equiv  C1RXM0EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID10_MASK, 0x0010

        .equiv  C1RXM0EIDH_EID11, 0x0005
        .equiv  C1RXM0EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID11_MASK, 0x0020

        .equiv  C1RXM0EIDH_EID12, 0x0006
        .equiv  C1RXM0EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID12_MASK, 0x0040

        .equiv  C1RXM0EIDH_EID13, 0x0007
        .equiv  C1RXM0EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID13_MASK, 0x0080

        .equiv  C1RXM0EIDH_EID14_C1RXM0EIDH, 0x0008
        .equiv  C1RXM0EIDH_EID14_C1RXM0EIDH_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID14_C1RXM0EIDH_MASK, 0x0100
        .equiv  EID14_C1RXM0EIDH, 0x0008

        .equiv  C1RXM0EIDH_EID15_C1RXM0EIDH, 0x0009
        .equiv  C1RXM0EIDH_EID15_C1RXM0EIDH_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID15_C1RXM0EIDH_MASK, 0x0200
        .equiv  EID15_C1RXM0EIDH, 0x0009

        .equiv  C1RXM0EIDH_EID16_C1RXM0EIDH, 0x000A
        .equiv  C1RXM0EIDH_EID16_C1RXM0EIDH_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID16_C1RXM0EIDH_MASK, 0x0400
        .equiv  EID16_C1RXM0EIDH, 0x000A

        .equiv  C1RXM0EIDH_EID17_C1RXM0EIDH, 0x000B
        .equiv  C1RXM0EIDH_EID17_C1RXM0EIDH_WIDTH, 0x0001
        .equiv  C1RXM0EIDH_EID17_C1RXM0EIDH_MASK, 0x0800
        .equiv  EID17_C1RXM0EIDH, 0x000B

;----- C1RXM0EIDL Bits -----------------------------------------------------
        .equiv  C1RXM0EIDL_EID0, 0x000A
        .equiv  C1RXM0EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID0_MASK, 0x0400

        .equiv  C1RXM0EIDL_EID1, 0x000B
        .equiv  C1RXM0EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID1_MASK, 0x0800

        .equiv  C1RXM0EIDL_EID2, 0x000C
        .equiv  C1RXM0EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID2_MASK, 0x1000

        .equiv  C1RXM0EIDL_EID3, 0x000D
        .equiv  C1RXM0EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID3_MASK, 0x2000

        .equiv  C1RXM0EIDL_EID4, 0x000E
        .equiv  C1RXM0EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID4_MASK, 0x4000

        .equiv  C1RXM0EIDL_EID5, 0x000F
        .equiv  C1RXM0EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXM0EIDL_EID5_MASK, 0x8000

        .equiv  C1RXM0EIDL_EID5_0, 0x000A
        .equiv  C1RXM0EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXM0EIDL_EID5_0_MASK, 0xFC00

;----- C1RXM1SID Bits -----------------------------------------------------
        .equiv  C1RXM1SID_MIDE, 0x0000
        .equiv  C1RXM1SID_MIDE_WIDTH, 0x0001
        .equiv  C1RXM1SID_MIDE_MASK, 0x0001

        .equiv  C1RXM1SID_SID0, 0x0002
        .equiv  C1RXM1SID_SID0_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID0_MASK, 0x0004

        .equiv  C1RXM1SID_SID1, 0x0003
        .equiv  C1RXM1SID_SID1_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID1_MASK, 0x0008

        .equiv  C1RXM1SID_SID2, 0x0004
        .equiv  C1RXM1SID_SID2_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID2_MASK, 0x0010

        .equiv  C1RXM1SID_SID3, 0x0005
        .equiv  C1RXM1SID_SID3_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID3_MASK, 0x0020

        .equiv  C1RXM1SID_SID4, 0x0006
        .equiv  C1RXM1SID_SID4_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID4_MASK, 0x0040

        .equiv  C1RXM1SID_SID5, 0x0007
        .equiv  C1RXM1SID_SID5_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID5_MASK, 0x0080

        .equiv  C1RXM1SID_SID6_C1RXM1SID, 0x0008
        .equiv  C1RXM1SID_SID6_C1RXM1SID_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID6_C1RXM1SID_MASK, 0x0100
        .equiv  SID6_C1RXM1SID, 0x0008

        .equiv  C1RXM1SID_SID7_C1RXM1SID, 0x0009
        .equiv  C1RXM1SID_SID7_C1RXM1SID_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID7_C1RXM1SID_MASK, 0x0200
        .equiv  SID7_C1RXM1SID, 0x0009

        .equiv  C1RXM1SID_SID8_C1RXM1SID, 0x000A
        .equiv  C1RXM1SID_SID8_C1RXM1SID_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID8_C1RXM1SID_MASK, 0x0400
        .equiv  SID8_C1RXM1SID, 0x000A

        .equiv  C1RXM1SID_SID9_C1RXM1SID, 0x000B
        .equiv  C1RXM1SID_SID9_C1RXM1SID_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID9_C1RXM1SID_MASK, 0x0800
        .equiv  SID9_C1RXM1SID, 0x000B

        .equiv  C1RXM1SID_SID10_C1RXM1SID, 0x000C
        .equiv  C1RXM1SID_SID10_C1RXM1SID_WIDTH, 0x0001
        .equiv  C1RXM1SID_SID10_C1RXM1SID_MASK, 0x1000
        .equiv  SID10_C1RXM1SID, 0x000C

        .equiv  C1RXM1SID_SID, 0x0002
        .equiv  C1RXM1SID_SID_WIDTH, 0x000B
        .equiv  C1RXM1SID_SID_MASK, 0x1FFC

;----- C1RXM1EIDH Bits -----------------------------------------------------
        .equiv  C1RXM1EIDH_EID6, 0x0000
        .equiv  C1RXM1EIDH_EID6_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID6_MASK, 0x0001

        .equiv  C1RXM1EIDH_EID7, 0x0001
        .equiv  C1RXM1EIDH_EID7_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID7_MASK, 0x0002

        .equiv  C1RXM1EIDH_EID8, 0x0002
        .equiv  C1RXM1EIDH_EID8_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID8_MASK, 0x0004

        .equiv  C1RXM1EIDH_EID9, 0x0003
        .equiv  C1RXM1EIDH_EID9_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID9_MASK, 0x0008

        .equiv  C1RXM1EIDH_EID10, 0x0004
        .equiv  C1RXM1EIDH_EID10_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID10_MASK, 0x0010

        .equiv  C1RXM1EIDH_EID11, 0x0005
        .equiv  C1RXM1EIDH_EID11_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID11_MASK, 0x0020

        .equiv  C1RXM1EIDH_EID12, 0x0006
        .equiv  C1RXM1EIDH_EID12_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID12_MASK, 0x0040

        .equiv  C1RXM1EIDH_EID13, 0x0007
        .equiv  C1RXM1EIDH_EID13_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID13_MASK, 0x0080

        .equiv  C1RXM1EIDH_EID14_C1RXM1EIDH, 0x0008
        .equiv  C1RXM1EIDH_EID14_C1RXM1EIDH_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID14_C1RXM1EIDH_MASK, 0x0100
        .equiv  EID14_C1RXM1EIDH, 0x0008

        .equiv  C1RXM1EIDH_EID15_C1RXM1EIDH, 0x0009
        .equiv  C1RXM1EIDH_EID15_C1RXM1EIDH_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID15_C1RXM1EIDH_MASK, 0x0200
        .equiv  EID15_C1RXM1EIDH, 0x0009

        .equiv  C1RXM1EIDH_EID16_C1RXM1EIDH, 0x000A
        .equiv  C1RXM1EIDH_EID16_C1RXM1EIDH_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID16_C1RXM1EIDH_MASK, 0x0400
        .equiv  EID16_C1RXM1EIDH, 0x000A

        .equiv  C1RXM1EIDH_EID17_C1RXM1EIDH, 0x000B
        .equiv  C1RXM1EIDH_EID17_C1RXM1EIDH_WIDTH, 0x0001
        .equiv  C1RXM1EIDH_EID17_C1RXM1EIDH_MASK, 0x0800
        .equiv  EID17_C1RXM1EIDH, 0x000B

;----- C1RXM1EIDL Bits -----------------------------------------------------
        .equiv  C1RXM1EIDL_EID0, 0x000A
        .equiv  C1RXM1EIDL_EID0_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID0_MASK, 0x0400

        .equiv  C1RXM1EIDL_EID1, 0x000B
        .equiv  C1RXM1EIDL_EID1_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID1_MASK, 0x0800

        .equiv  C1RXM1EIDL_EID2, 0x000C
        .equiv  C1RXM1EIDL_EID2_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID2_MASK, 0x1000

        .equiv  C1RXM1EIDL_EID3, 0x000D
        .equiv  C1RXM1EIDL_EID3_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID3_MASK, 0x2000

        .equiv  C1RXM1EIDL_EID4, 0x000E
        .equiv  C1RXM1EIDL_EID4_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID4_MASK, 0x4000

        .equiv  C1RXM1EIDL_EID5, 0x000F
        .equiv  C1RXM1EIDL_EID5_WIDTH, 0x0001
        .equiv  C1RXM1EIDL_EID5_MASK, 0x8000

        .equiv  C1RXM1EIDL_EID5_0, 0x000A
        .equiv  C1RXM1EIDL_EID5_0_WIDTH, 0x0006
        .equiv  C1RXM1EIDL_EID5_0_MASK, 0xFC00

;----- C1TX2SID Bits -----------------------------------------------------
        .equiv  C1TX2SID_TXIDE, 0x0000
        .equiv  C1TX2SID_TXIDE_WIDTH, 0x0001
        .equiv  C1TX2SID_TXIDE_MASK, 0x0001
        .equiv  TXIDE, 0x0000

        .equiv  C1TX2SID_SRR, 0x0001
        .equiv  C1TX2SID_SRR_WIDTH, 0x0001
        .equiv  C1TX2SID_SRR_MASK, 0x0002
        .equiv  SRR, 0x0001

        .equiv  C1TX2SID_SID0, 0x0002
        .equiv  C1TX2SID_SID0_WIDTH, 0x0001
        .equiv  C1TX2SID_SID0_MASK, 0x0004

        .equiv  C1TX2SID_SID1, 0x0003
        .equiv  C1TX2SID_SID1_WIDTH, 0x0001
        .equiv  C1TX2SID_SID1_MASK, 0x0008

        .equiv  C1TX2SID_SID2, 0x0004
        .equiv  C1TX2SID_SID2_WIDTH, 0x0001
        .equiv  C1TX2SID_SID2_MASK, 0x0010

        .equiv  C1TX2SID_SID3, 0x0005
        .equiv  C1TX2SID_SID3_WIDTH, 0x0001
        .equiv  C1TX2SID_SID3_MASK, 0x0020

        .equiv  C1TX2SID_SID4, 0x0006
        .equiv  C1TX2SID_SID4_WIDTH, 0x0001
        .equiv  C1TX2SID_SID4_MASK, 0x0040

        .equiv  C1TX2SID_SID5, 0x0007
        .equiv  C1TX2SID_SID5_WIDTH, 0x0001
        .equiv  C1TX2SID_SID5_MASK, 0x0080

        .equiv  C1TX2SID_SID6_C1TX2SID, 0x000B
        .equiv  C1TX2SID_SID6_C1TX2SID_WIDTH, 0x0001
        .equiv  C1TX2SID_SID6_C1TX2SID_MASK, 0x0800
        .equiv  SID6_C1TX2SID, 0x000B

        .equiv  C1TX2SID_SID7_C1TX2SID, 0x000C
        .equiv  C1TX2SID_SID7_C1TX2SID_WIDTH, 0x0001
        .equiv  C1TX2SID_SID7_C1TX2SID_MASK, 0x1000
        .equiv  SID7_C1TX2SID, 0x000C

        .equiv  C1TX2SID_SID8_C1TX2SID, 0x000D
        .equiv  C1TX2SID_SID8_C1TX2SID_WIDTH, 0x0001
        .equiv  C1TX2SID_SID8_C1TX2SID_MASK, 0x2000
        .equiv  SID8_C1TX2SID, 0x000D

        .equiv  C1TX2SID_SID9_C1TX2SID, 0x000E
        .equiv  C1TX2SID_SID9_C1TX2SID_WIDTH, 0x0001
        .equiv  C1TX2SID_SID9_C1TX2SID_MASK, 0x4000
        .equiv  SID9_C1TX2SID, 0x000E

        .equiv  C1TX2SID_SID10_C1TX2SID, 0x000F
        .equiv  C1TX2SID_SID10_C1TX2SID_WIDTH, 0x0001
        .equiv  C1TX2SID_SID10_C1TX2SID_MASK, 0x8000
        .equiv  SID10_C1TX2SID, 0x000F

        .equiv  C1TX2SID_SID5_0, 0x0002
        .equiv  C1TX2SID_SID5_0_WIDTH, 0x0006
        .equiv  C1TX2SID_SID5_0_MASK, 0x00FC

        .equiv  C1TX2SID_SID10_6, 0x000B
        .equiv  C1TX2SID_SID10_6_WIDTH, 0x0005
        .equiv  C1TX2SID_SID10_6_MASK, 0xF800

;----- C1TX2EID Bits -----------------------------------------------------
        .equiv  C1TX2EID_EID6, 0x0000
        .equiv  C1TX2EID_EID6_WIDTH, 0x0001
        .equiv  C1TX2EID_EID6_MASK, 0x0001

        .equiv  C1TX2EID_EID7, 0x0001
        .equiv  C1TX2EID_EID7_WIDTH, 0x0001
        .equiv  C1TX2EID_EID7_MASK, 0x0002

        .equiv  C1TX2EID_EID8, 0x0002
        .equiv  C1TX2EID_EID8_WIDTH, 0x0001
        .equiv  C1TX2EID_EID8_MASK, 0x0004

        .equiv  C1TX2EID_EID9, 0x0003
        .equiv  C1TX2EID_EID9_WIDTH, 0x0001
        .equiv  C1TX2EID_EID9_MASK, 0x0008

        .equiv  C1TX2EID_EID10, 0x0004
        .equiv  C1TX2EID_EID10_WIDTH, 0x0001
        .equiv  C1TX2EID_EID10_MASK, 0x0010

        .equiv  C1TX2EID_EID11, 0x0005
        .equiv  C1TX2EID_EID11_WIDTH, 0x0001
        .equiv  C1TX2EID_EID11_MASK, 0x0020

        .equiv  C1TX2EID_EID12, 0x0006
        .equiv  C1TX2EID_EID12_WIDTH, 0x0001
        .equiv  C1TX2EID_EID12_MASK, 0x0040

        .equiv  C1TX2EID_EID13, 0x0007
        .equiv  C1TX2EID_EID13_WIDTH, 0x0001
        .equiv  C1TX2EID_EID13_MASK, 0x0080

        .equiv  C1TX2EID_EID14_C1TX2EID, 0x000C
        .equiv  C1TX2EID_EID14_C1TX2EID_WIDTH, 0x0001
        .equiv  C1TX2EID_EID14_C1TX2EID_MASK, 0x1000
        .equiv  EID14_C1TX2EID, 0x000C

        .equiv  C1TX2EID_EID15_C1TX2EID, 0x000D
        .equiv  C1TX2EID_EID15_C1TX2EID_WIDTH, 0x0001
        .equiv  C1TX2EID_EID15_C1TX2EID_MASK, 0x2000
        .equiv  EID15_C1TX2EID, 0x000D

        .equiv  C1TX2EID_EID16_C1TX2EID, 0x000E
        .equiv  C1TX2EID_EID16_C1TX2EID_WIDTH, 0x0001
        .equiv  C1TX2EID_EID16_C1TX2EID_MASK, 0x4000
        .equiv  EID16_C1TX2EID, 0x000E

        .equiv  C1TX2EID_EID17_C1TX2EID, 0x000F
        .equiv  C1TX2EID_EID17_C1TX2EID_WIDTH, 0x0001
        .equiv  C1TX2EID_EID17_C1TX2EID_MASK, 0x8000
        .equiv  EID17_C1TX2EID, 0x000F

        .equiv  C1TX2EID_EID13_6, 0x0000
        .equiv  C1TX2EID_EID13_6_WIDTH, 0x0008
        .equiv  C1TX2EID_EID13_6_MASK, 0x00FF

        .equiv  C1TX2EID_EID17_14, 0x000C
        .equiv  C1TX2EID_EID17_14_WIDTH, 0x0004
        .equiv  C1TX2EID_EID17_14_MASK, 0xF000

;----- C1TX2DLC Bits -----------------------------------------------------
        .equiv  C1TX2DLC_DLC_C1TX2DLC, 0x0003
        .equiv  C1TX2DLC_DLC_C1TX2DLC_WIDTH, 0x0004
        .equiv  C1TX2DLC_DLC_C1TX2DLC_MASK, 0x0078

        .equiv  C1TX2DLC_TXRB0, 0x0007
        .equiv  C1TX2DLC_TXRB0_WIDTH, 0x0001
        .equiv  C1TX2DLC_TXRB0_MASK, 0x0080
        .equiv  TXRB0, 0x0007

        .equiv  C1TX2DLC_TXRB1, 0x0008
        .equiv  C1TX2DLC_TXRB1_WIDTH, 0x0001
        .equiv  C1TX2DLC_TXRB1_MASK, 0x0100
        .equiv  TXRB1, 0x0008

        .equiv  C1TX2DLC_TXRTR, 0x0009
        .equiv  C1TX2DLC_TXRTR_WIDTH, 0x0001
        .equiv  C1TX2DLC_TXRTR_MASK, 0x0200
        .equiv  TXRTR, 0x0009

        .equiv  C1TX2DLC_EID0, 0x000A
        .equiv  C1TX2DLC_EID0_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID0_MASK, 0x0400

        .equiv  C1TX2DLC_EID1, 0x000B
        .equiv  C1TX2DLC_EID1_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID1_MASK, 0x0800

        .equiv  C1TX2DLC_EID2, 0x000C
        .equiv  C1TX2DLC_EID2_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID2_MASK, 0x1000

        .equiv  C1TX2DLC_EID3, 0x000D
        .equiv  C1TX2DLC_EID3_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID3_MASK, 0x2000

        .equiv  C1TX2DLC_EID4, 0x000E
        .equiv  C1TX2DLC_EID4_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID4_MASK, 0x4000

        .equiv  C1TX2DLC_EID5, 0x000F
        .equiv  C1TX2DLC_EID5_WIDTH, 0x0001
        .equiv  C1TX2DLC_EID5_MASK, 0x8000

        .equiv  C1TX2DLC_EID5_0, 0x000A
        .equiv  C1TX2DLC_EID5_0_WIDTH, 0x0006
        .equiv  C1TX2DLC_EID5_0_MASK, 0xFC00

        .equiv  C1TX2DLC_DLC0_C1TX2DLC, 0x0003
        .equiv  C1TX2DLC_DLC0_C1TX2DLC_WIDTH, 0x0001
        .equiv  C1TX2DLC_DLC0_C1TX2DLC_MASK, 0x0008
        .equiv  DLC0_C1TX2DLC, 0x0003

        .equiv  C1TX2DLC_DLC1_C1TX2DLC, 0x0004
        .equiv  C1TX2DLC_DLC1_C1TX2DLC_WIDTH, 0x0001
        .equiv  C1TX2DLC_DLC1_C1TX2DLC_MASK, 0x0010
        .equiv  DLC1_C1TX2DLC, 0x0004

        .equiv  C1TX2DLC_DLC2_C1TX2DLC, 0x0005
        .equiv  C1TX2DLC_DLC2_C1TX2DLC_WIDTH, 0x0001
        .equiv  C1TX2DLC_DLC2_C1TX2DLC_MASK, 0x0020
        .equiv  DLC2_C1TX2DLC, 0x0005

        .equiv  C1TX2DLC_DLC3_C1TX2DLC, 0x0006
        .equiv  C1TX2DLC_DLC3_C1TX2DLC_WIDTH, 0x0001
        .equiv  C1TX2DLC_DLC3_C1TX2DLC_MASK, 0x0040
        .equiv  DLC3_C1TX2DLC, 0x0006

;----- C1TX2B1 Bits -----------------------------------------------------
        .equiv  C1TX2B1_TXB2D00, 0x0000
        .equiv  C1TX2B1_TXB2D00_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D00_MASK, 0x0001
        .equiv  TXB2D00, 0x0000

        .equiv  C1TX2B1_TXB2D01, 0x0001
        .equiv  C1TX2B1_TXB2D01_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D01_MASK, 0x0002
        .equiv  TXB2D01, 0x0001

        .equiv  C1TX2B1_TXB2D02, 0x0002
        .equiv  C1TX2B1_TXB2D02_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D02_MASK, 0x0004
        .equiv  TXB2D02, 0x0002

        .equiv  C1TX2B1_TXB2D03, 0x0003
        .equiv  C1TX2B1_TXB2D03_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D03_MASK, 0x0008
        .equiv  TXB2D03, 0x0003

        .equiv  C1TX2B1_TXB2D04, 0x0004
        .equiv  C1TX2B1_TXB2D04_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D04_MASK, 0x0010
        .equiv  TXB2D04, 0x0004

        .equiv  C1TX2B1_TXB2D05, 0x0005
        .equiv  C1TX2B1_TXB2D05_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D05_MASK, 0x0020
        .equiv  TXB2D05, 0x0005

        .equiv  C1TX2B1_TXB2D06, 0x0006
        .equiv  C1TX2B1_TXB2D06_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D06_MASK, 0x0040
        .equiv  TXB2D06, 0x0006

        .equiv  C1TX2B1_TXB2D07, 0x0007
        .equiv  C1TX2B1_TXB2D07_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D07_MASK, 0x0080
        .equiv  TXB2D07, 0x0007

        .equiv  C1TX2B1_TXB2D10, 0x0008
        .equiv  C1TX2B1_TXB2D10_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D10_MASK, 0x0100
        .equiv  TXB2D10, 0x0008

        .equiv  C1TX2B1_TXB2D11, 0x0009
        .equiv  C1TX2B1_TXB2D11_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D11_MASK, 0x0200
        .equiv  TXB2D11, 0x0009

        .equiv  C1TX2B1_TXB2D12, 0x000A
        .equiv  C1TX2B1_TXB2D12_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D12_MASK, 0x0400
        .equiv  TXB2D12, 0x000A

        .equiv  C1TX2B1_TXB2D13, 0x000B
        .equiv  C1TX2B1_TXB2D13_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D13_MASK, 0x0800
        .equiv  TXB2D13, 0x000B

        .equiv  C1TX2B1_TXB2D14, 0x000C
        .equiv  C1TX2B1_TXB2D14_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D14_MASK, 0x1000
        .equiv  TXB2D14, 0x000C

        .equiv  C1TX2B1_TXB2D15, 0x000D
        .equiv  C1TX2B1_TXB2D15_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D15_MASK, 0x2000
        .equiv  TXB2D15, 0x000D

        .equiv  C1TX2B1_TXB2D16, 0x000E
        .equiv  C1TX2B1_TXB2D16_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D16_MASK, 0x4000
        .equiv  TXB2D16, 0x000E

        .equiv  C1TX2B1_TXB2D17, 0x000F
        .equiv  C1TX2B1_TXB2D17_WIDTH, 0x0001
        .equiv  C1TX2B1_TXB2D17_MASK, 0x8000
        .equiv  TXB2D17, 0x000F

;----- C1TX2B2 Bits -----------------------------------------------------
        .equiv  C1TX2B2_TXB2D20, 0x0000
        .equiv  C1TX2B2_TXB2D20_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D20_MASK, 0x0001
        .equiv  TXB2D20, 0x0000

        .equiv  C1TX2B2_TXB2D21, 0x0001
        .equiv  C1TX2B2_TXB2D21_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D21_MASK, 0x0002
        .equiv  TXB2D21, 0x0001

        .equiv  C1TX2B2_TXB2D22, 0x0002
        .equiv  C1TX2B2_TXB2D22_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D22_MASK, 0x0004
        .equiv  TXB2D22, 0x0002

        .equiv  C1TX2B2_TXB2D23, 0x0003
        .equiv  C1TX2B2_TXB2D23_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D23_MASK, 0x0008
        .equiv  TXB2D23, 0x0003

        .equiv  C1TX2B2_TXB2D24, 0x0004
        .equiv  C1TX2B2_TXB2D24_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D24_MASK, 0x0010
        .equiv  TXB2D24, 0x0004

        .equiv  C1TX2B2_TXB2D25, 0x0005
        .equiv  C1TX2B2_TXB2D25_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D25_MASK, 0x0020
        .equiv  TXB2D25, 0x0005

        .equiv  C1TX2B2_TXB2D26, 0x0006
        .equiv  C1TX2B2_TXB2D26_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D26_MASK, 0x0040
        .equiv  TXB2D26, 0x0006

        .equiv  C1TX2B2_TXB2D27, 0x0007
        .equiv  C1TX2B2_TXB2D27_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D27_MASK, 0x0080
        .equiv  TXB2D27, 0x0007

        .equiv  C1TX2B2_TXB2D30, 0x0008
        .equiv  C1TX2B2_TXB2D30_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D30_MASK, 0x0100
        .equiv  TXB2D30, 0x0008

        .equiv  C1TX2B2_TXB2D31, 0x0009
        .equiv  C1TX2B2_TXB2D31_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D31_MASK, 0x0200
        .equiv  TXB2D31, 0x0009

        .equiv  C1TX2B2_TXB2D32, 0x000A
        .equiv  C1TX2B2_TXB2D32_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D32_MASK, 0x0400
        .equiv  TXB2D32, 0x000A

        .equiv  C1TX2B2_TXB2D33, 0x000B
        .equiv  C1TX2B2_TXB2D33_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D33_MASK, 0x0800
        .equiv  TXB2D33, 0x000B

        .equiv  C1TX2B2_TXB2D34, 0x000C
        .equiv  C1TX2B2_TXB2D34_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D34_MASK, 0x1000
        .equiv  TXB2D34, 0x000C

        .equiv  C1TX2B2_TXB2D35, 0x000D
        .equiv  C1TX2B2_TXB2D35_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D35_MASK, 0x2000
        .equiv  TXB2D35, 0x000D

        .equiv  C1TX2B2_TXB2D36, 0x000E
        .equiv  C1TX2B2_TXB2D36_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D36_MASK, 0x4000
        .equiv  TXB2D36, 0x000E

        .equiv  C1TX2B2_TXB2D37, 0x000F
        .equiv  C1TX2B2_TXB2D37_WIDTH, 0x0001
        .equiv  C1TX2B2_TXB2D37_MASK, 0x8000
        .equiv  TXB2D37, 0x000F

;----- C1TX2B3 Bits -----------------------------------------------------
        .equiv  C1TX2B3_TXB2D40, 0x0000
        .equiv  C1TX2B3_TXB2D40_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D40_MASK, 0x0001
        .equiv  TXB2D40, 0x0000

        .equiv  C1TX2B3_TXB2D41, 0x0001
        .equiv  C1TX2B3_TXB2D41_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D41_MASK, 0x0002
        .equiv  TXB2D41, 0x0001

        .equiv  C1TX2B3_TXB2D42, 0x0002
        .equiv  C1TX2B3_TXB2D42_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D42_MASK, 0x0004
        .equiv  TXB2D42, 0x0002

        .equiv  C1TX2B3_TXB2D43, 0x0003
        .equiv  C1TX2B3_TXB2D43_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D43_MASK, 0x0008
        .equiv  TXB2D43, 0x0003

        .equiv  C1TX2B3_TXB2D44, 0x0004
        .equiv  C1TX2B3_TXB2D44_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D44_MASK, 0x0010
        .equiv  TXB2D44, 0x0004

        .equiv  C1TX2B3_TXB2D45, 0x0005
        .equiv  C1TX2B3_TXB2D45_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D45_MASK, 0x0020
        .equiv  TXB2D45, 0x0005

        .equiv  C1TX2B3_TXB2D46, 0x0006
        .equiv  C1TX2B3_TXB2D46_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D46_MASK, 0x0040
        .equiv  TXB2D46, 0x0006

        .equiv  C1TX2B3_TXB2D47, 0x0007
        .equiv  C1TX2B3_TXB2D47_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D47_MASK, 0x0080
        .equiv  TXB2D47, 0x0007

        .equiv  C1TX2B3_TXB2D50, 0x0008
        .equiv  C1TX2B3_TXB2D50_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D50_MASK, 0x0100
        .equiv  TXB2D50, 0x0008

        .equiv  C1TX2B3_TXB2D51, 0x0009
        .equiv  C1TX2B3_TXB2D51_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D51_MASK, 0x0200
        .equiv  TXB2D51, 0x0009

        .equiv  C1TX2B3_TXB2D52, 0x000A
        .equiv  C1TX2B3_TXB2D52_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D52_MASK, 0x0400
        .equiv  TXB2D52, 0x000A

        .equiv  C1TX2B3_TXB2D53, 0x000B
        .equiv  C1TX2B3_TXB2D53_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D53_MASK, 0x0800
        .equiv  TXB2D53, 0x000B

        .equiv  C1TX2B3_TXB2D54, 0x000C
        .equiv  C1TX2B3_TXB2D54_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D54_MASK, 0x1000
        .equiv  TXB2D54, 0x000C

        .equiv  C1TX2B3_TXB2D55, 0x000D
        .equiv  C1TX2B3_TXB2D55_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D55_MASK, 0x2000
        .equiv  TXB2D55, 0x000D

        .equiv  C1TX2B3_TXB2D56, 0x000E
        .equiv  C1TX2B3_TXB2D56_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D56_MASK, 0x4000
        .equiv  TXB2D56, 0x000E

        .equiv  C1TX2B3_TXB2D57, 0x000F
        .equiv  C1TX2B3_TXB2D57_WIDTH, 0x0001
        .equiv  C1TX2B3_TXB2D57_MASK, 0x8000
        .equiv  TXB2D57, 0x000F

;----- C1TX2B4 Bits -----------------------------------------------------
        .equiv  C1TX2B4_TXB2D60, 0x0000
        .equiv  C1TX2B4_TXB2D60_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D60_MASK, 0x0001
        .equiv  TXB2D60, 0x0000

        .equiv  C1TX2B4_TXB2D61, 0x0001
        .equiv  C1TX2B4_TXB2D61_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D61_MASK, 0x0002
        .equiv  TXB2D61, 0x0001

        .equiv  C1TX2B4_TXB2D62, 0x0002
        .equiv  C1TX2B4_TXB2D62_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D62_MASK, 0x0004
        .equiv  TXB2D62, 0x0002

        .equiv  C1TX2B4_TXB2D63, 0x0003
        .equiv  C1TX2B4_TXB2D63_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D63_MASK, 0x0008
        .equiv  TXB2D63, 0x0003

        .equiv  C1TX2B4_TXB2D64, 0x0004
        .equiv  C1TX2B4_TXB2D64_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D64_MASK, 0x0010
        .equiv  TXB2D64, 0x0004

        .equiv  C1TX2B4_TXB2D65, 0x0005
        .equiv  C1TX2B4_TXB2D65_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D65_MASK, 0x0020
        .equiv  TXB2D65, 0x0005

        .equiv  C1TX2B4_TXB2D66, 0x0006
        .equiv  C1TX2B4_TXB2D66_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D66_MASK, 0x0040
        .equiv  TXB2D66, 0x0006

        .equiv  C1TX2B4_TXB2D67, 0x0007
        .equiv  C1TX2B4_TXB2D67_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D67_MASK, 0x0080
        .equiv  TXB2D67, 0x0007

        .equiv  C1TX2B4_TXB2D70, 0x0008
        .equiv  C1TX2B4_TXB2D70_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D70_MASK, 0x0100
        .equiv  TXB2D70, 0x0008

        .equiv  C1TX2B4_TXB2D71, 0x0009
        .equiv  C1TX2B4_TXB2D71_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D71_MASK, 0x0200
        .equiv  TXB2D71, 0x0009

        .equiv  C1TX2B4_TXB2D72, 0x000A
        .equiv  C1TX2B4_TXB2D72_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D72_MASK, 0x0400
        .equiv  TXB2D72, 0x000A

        .equiv  C1TX2B4_TXB2D73, 0x000B
        .equiv  C1TX2B4_TXB2D73_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D73_MASK, 0x0800
        .equiv  TXB2D73, 0x000B

        .equiv  C1TX2B4_TXB2D74, 0x000C
        .equiv  C1TX2B4_TXB2D74_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D74_MASK, 0x1000
        .equiv  TXB2D74, 0x000C

        .equiv  C1TX2B4_TXB2D75, 0x000D
        .equiv  C1TX2B4_TXB2D75_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D75_MASK, 0x2000
        .equiv  TXB2D75, 0x000D

        .equiv  C1TX2B4_TXB2D76, 0x000E
        .equiv  C1TX2B4_TXB2D76_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D76_MASK, 0x4000
        .equiv  TXB2D76, 0x000E

        .equiv  C1TX2B4_TXB2D77, 0x000F
        .equiv  C1TX2B4_TXB2D77_WIDTH, 0x0001
        .equiv  C1TX2B4_TXB2D77_MASK, 0x8000
        .equiv  TXB2D77, 0x000F

;----- C1TX2CON Bits -----------------------------------------------------
        .equiv  C1TX2CON_TXPRI, 0x0000
        .equiv  C1TX2CON_TXPRI_WIDTH, 0x0002
        .equiv  C1TX2CON_TXPRI_MASK, 0x0003

        .equiv  C1TX2CON_TXREQ, 0x0003
        .equiv  C1TX2CON_TXREQ_WIDTH, 0x0001
        .equiv  C1TX2CON_TXREQ_MASK, 0x0008
        .equiv  TXREQ, 0x0003

        .equiv  C1TX2CON_TXERR, 0x0004
        .equiv  C1TX2CON_TXERR_WIDTH, 0x0001
        .equiv  C1TX2CON_TXERR_MASK, 0x0010
        .equiv  TXERR, 0x0004

        .equiv  C1TX2CON_TXLARB, 0x0005
        .equiv  C1TX2CON_TXLARB_WIDTH, 0x0001
        .equiv  C1TX2CON_TXLARB_MASK, 0x0020
        .equiv  TXLARB, 0x0005

        .equiv  C1TX2CON_TXABT, 0x0006
        .equiv  C1TX2CON_TXABT_WIDTH, 0x0001
        .equiv  C1TX2CON_TXABT_MASK, 0x0040
        .equiv  TXABT, 0x0006

        .equiv  C1TX2CON_TXPRI0, 0x0000
        .equiv  C1TX2CON_TXPRI0_WIDTH, 0x0001
        .equiv  C1TX2CON_TXPRI0_MASK, 0x0001
        .equiv  TXPRI0, 0x0000

        .equiv  C1TX2CON_TXPRI1, 0x0001
        .equiv  C1TX2CON_TXPRI1_WIDTH, 0x0001
        .equiv  C1TX2CON_TXPRI1_MASK, 0x0002
        .equiv  TXPRI1, 0x0001

;----- C1TX1SID Bits -----------------------------------------------------
        .equiv  C1TX1SID_TXIDE, 0x0000
        .equiv  C1TX1SID_TXIDE_WIDTH, 0x0001
        .equiv  C1TX1SID_TXIDE_MASK, 0x0001

        .equiv  C1TX1SID_SRR, 0x0001
        .equiv  C1TX1SID_SRR_WIDTH, 0x0001
        .equiv  C1TX1SID_SRR_MASK, 0x0002

        .equiv  C1TX1SID_SID0, 0x0002
        .equiv  C1TX1SID_SID0_WIDTH, 0x0001
        .equiv  C1TX1SID_SID0_MASK, 0x0004

        .equiv  C1TX1SID_SID1, 0x0003
        .equiv  C1TX1SID_SID1_WIDTH, 0x0001
        .equiv  C1TX1SID_SID1_MASK, 0x0008

        .equiv  C1TX1SID_SID2, 0x0004
        .equiv  C1TX1SID_SID2_WIDTH, 0x0001
        .equiv  C1TX1SID_SID2_MASK, 0x0010

        .equiv  C1TX1SID_SID3, 0x0005
        .equiv  C1TX1SID_SID3_WIDTH, 0x0001
        .equiv  C1TX1SID_SID3_MASK, 0x0020

        .equiv  C1TX1SID_SID4, 0x0006
        .equiv  C1TX1SID_SID4_WIDTH, 0x0001
        .equiv  C1TX1SID_SID4_MASK, 0x0040

        .equiv  C1TX1SID_SID5, 0x0007
        .equiv  C1TX1SID_SID5_WIDTH, 0x0001
        .equiv  C1TX1SID_SID5_MASK, 0x0080

        .equiv  C1TX1SID_SID6_C1TX1SID, 0x000B
        .equiv  C1TX1SID_SID6_C1TX1SID_WIDTH, 0x0001
        .equiv  C1TX1SID_SID6_C1TX1SID_MASK, 0x0800
        .equiv  SID6_C1TX1SID, 0x000B

        .equiv  C1TX1SID_SID7_C1TX1SID, 0x000C
        .equiv  C1TX1SID_SID7_C1TX1SID_WIDTH, 0x0001
        .equiv  C1TX1SID_SID7_C1TX1SID_MASK, 0x1000
        .equiv  SID7_C1TX1SID, 0x000C

        .equiv  C1TX1SID_SID8_C1TX1SID, 0x000D
        .equiv  C1TX1SID_SID8_C1TX1SID_WIDTH, 0x0001
        .equiv  C1TX1SID_SID8_C1TX1SID_MASK, 0x2000
        .equiv  SID8_C1TX1SID, 0x000D

        .equiv  C1TX1SID_SID9_C1TX1SID, 0x000E
        .equiv  C1TX1SID_SID9_C1TX1SID_WIDTH, 0x0001
        .equiv  C1TX1SID_SID9_C1TX1SID_MASK, 0x4000
        .equiv  SID9_C1TX1SID, 0x000E

        .equiv  C1TX1SID_SID10_C1TX1SID, 0x000F
        .equiv  C1TX1SID_SID10_C1TX1SID_WIDTH, 0x0001
        .equiv  C1TX1SID_SID10_C1TX1SID_MASK, 0x8000
        .equiv  SID10_C1TX1SID, 0x000F

        .equiv  C1TX1SID_SID5_0, 0x0002
        .equiv  C1TX1SID_SID5_0_WIDTH, 0x0006
        .equiv  C1TX1SID_SID5_0_MASK, 0x00FC

        .equiv  C1TX1SID_SID10_6, 0x000B
        .equiv  C1TX1SID_SID10_6_WIDTH, 0x0005
        .equiv  C1TX1SID_SID10_6_MASK, 0xF800

;----- C1TX1EID Bits -----------------------------------------------------
        .equiv  C1TX1EID_EID6, 0x0000
        .equiv  C1TX1EID_EID6_WIDTH, 0x0001
        .equiv  C1TX1EID_EID6_MASK, 0x0001

        .equiv  C1TX1EID_EID7, 0x0001
        .equiv  C1TX1EID_EID7_WIDTH, 0x0001
        .equiv  C1TX1EID_EID7_MASK, 0x0002

        .equiv  C1TX1EID_EID8, 0x0002
        .equiv  C1TX1EID_EID8_WIDTH, 0x0001
        .equiv  C1TX1EID_EID8_MASK, 0x0004

        .equiv  C1TX1EID_EID9, 0x0003
        .equiv  C1TX1EID_EID9_WIDTH, 0x0001
        .equiv  C1TX1EID_EID9_MASK, 0x0008

        .equiv  C1TX1EID_EID10, 0x0004
        .equiv  C1TX1EID_EID10_WIDTH, 0x0001
        .equiv  C1TX1EID_EID10_MASK, 0x0010

        .equiv  C1TX1EID_EID11, 0x0005
        .equiv  C1TX1EID_EID11_WIDTH, 0x0001
        .equiv  C1TX1EID_EID11_MASK, 0x0020

        .equiv  C1TX1EID_EID12, 0x0006
        .equiv  C1TX1EID_EID12_WIDTH, 0x0001
        .equiv  C1TX1EID_EID12_MASK, 0x0040

        .equiv  C1TX1EID_EID13, 0x0007
        .equiv  C1TX1EID_EID13_WIDTH, 0x0001
        .equiv  C1TX1EID_EID13_MASK, 0x0080

        .equiv  C1TX1EID_EID14_C1TX1EID, 0x000C
        .equiv  C1TX1EID_EID14_C1TX1EID_WIDTH, 0x0001
        .equiv  C1TX1EID_EID14_C1TX1EID_MASK, 0x1000
        .equiv  EID14_C1TX1EID, 0x000C

        .equiv  C1TX1EID_EID15_C1TX1EID, 0x000D
        .equiv  C1TX1EID_EID15_C1TX1EID_WIDTH, 0x0001
        .equiv  C1TX1EID_EID15_C1TX1EID_MASK, 0x2000
        .equiv  EID15_C1TX1EID, 0x000D

        .equiv  C1TX1EID_EID16_C1TX1EID, 0x000E
        .equiv  C1TX1EID_EID16_C1TX1EID_WIDTH, 0x0001
        .equiv  C1TX1EID_EID16_C1TX1EID_MASK, 0x4000
        .equiv  EID16_C1TX1EID, 0x000E

        .equiv  C1TX1EID_EID17_C1TX1EID, 0x000F
        .equiv  C1TX1EID_EID17_C1TX1EID_WIDTH, 0x0001
        .equiv  C1TX1EID_EID17_C1TX1EID_MASK, 0x8000
        .equiv  EID17_C1TX1EID, 0x000F

        .equiv  C1TX1EID_EID13_6, 0x0000
        .equiv  C1TX1EID_EID13_6_WIDTH, 0x0008
        .equiv  C1TX1EID_EID13_6_MASK, 0x00FF

        .equiv  C1TX1EID_EID17_14, 0x000C
        .equiv  C1TX1EID_EID17_14_WIDTH, 0x0004
        .equiv  C1TX1EID_EID17_14_MASK, 0xF000

;----- C1TX1DLC Bits -----------------------------------------------------
        .equiv  C1TX1DLC_DLC_C1TX1DLC, 0x0003
        .equiv  C1TX1DLC_DLC_C1TX1DLC_WIDTH, 0x0004
        .equiv  C1TX1DLC_DLC_C1TX1DLC_MASK, 0x0078

        .equiv  C1TX1DLC_TXRB0, 0x0007
        .equiv  C1TX1DLC_TXRB0_WIDTH, 0x0001
        .equiv  C1TX1DLC_TXRB0_MASK, 0x0080

        .equiv  C1TX1DLC_TXRB1, 0x0008
        .equiv  C1TX1DLC_TXRB1_WIDTH, 0x0001
        .equiv  C1TX1DLC_TXRB1_MASK, 0x0100

        .equiv  C1TX1DLC_TXRTR, 0x0009
        .equiv  C1TX1DLC_TXRTR_WIDTH, 0x0001
        .equiv  C1TX1DLC_TXRTR_MASK, 0x0200

        .equiv  C1TX1DLC_EID0, 0x000A
        .equiv  C1TX1DLC_EID0_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID0_MASK, 0x0400

        .equiv  C1TX1DLC_EID1, 0x000B
        .equiv  C1TX1DLC_EID1_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID1_MASK, 0x0800

        .equiv  C1TX1DLC_EID2, 0x000C
        .equiv  C1TX1DLC_EID2_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID2_MASK, 0x1000

        .equiv  C1TX1DLC_EID3, 0x000D
        .equiv  C1TX1DLC_EID3_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID3_MASK, 0x2000

        .equiv  C1TX1DLC_EID4, 0x000E
        .equiv  C1TX1DLC_EID4_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID4_MASK, 0x4000

        .equiv  C1TX1DLC_EID5, 0x000F
        .equiv  C1TX1DLC_EID5_WIDTH, 0x0001
        .equiv  C1TX1DLC_EID5_MASK, 0x8000

        .equiv  C1TX1DLC_EID5_0, 0x000A
        .equiv  C1TX1DLC_EID5_0_WIDTH, 0x0006
        .equiv  C1TX1DLC_EID5_0_MASK, 0xFC00

        .equiv  C1TX1DLC_DLC0_C1TX1DLC, 0x0003
        .equiv  C1TX1DLC_DLC0_C1TX1DLC_WIDTH, 0x0001
        .equiv  C1TX1DLC_DLC0_C1TX1DLC_MASK, 0x0008
        .equiv  DLC0_C1TX1DLC, 0x0003

        .equiv  C1TX1DLC_DLC1_C1TX1DLC, 0x0004
        .equiv  C1TX1DLC_DLC1_C1TX1DLC_WIDTH, 0x0001
        .equiv  C1TX1DLC_DLC1_C1TX1DLC_MASK, 0x0010
        .equiv  DLC1_C1TX1DLC, 0x0004

        .equiv  C1TX1DLC_DLC2_C1TX1DLC, 0x0005
        .equiv  C1TX1DLC_DLC2_C1TX1DLC_WIDTH, 0x0001
        .equiv  C1TX1DLC_DLC2_C1TX1DLC_MASK, 0x0020
        .equiv  DLC2_C1TX1DLC, 0x0005

        .equiv  C1TX1DLC_DLC3_C1TX1DLC, 0x0006
        .equiv  C1TX1DLC_DLC3_C1TX1DLC_WIDTH, 0x0001
        .equiv  C1TX1DLC_DLC3_C1TX1DLC_MASK, 0x0040
        .equiv  DLC3_C1TX1DLC, 0x0006

;----- C1TX1B1 Bits -----------------------------------------------------
        .equiv  C1TX1B1_TXB1D00, 0x0000
        .equiv  C1TX1B1_TXB1D00_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D00_MASK, 0x0001
        .equiv  TXB1D00, 0x0000

        .equiv  C1TX1B1_TXB1D01, 0x0001
        .equiv  C1TX1B1_TXB1D01_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D01_MASK, 0x0002
        .equiv  TXB1D01, 0x0001

        .equiv  C1TX1B1_TXB1D02, 0x0002
        .equiv  C1TX1B1_TXB1D02_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D02_MASK, 0x0004
        .equiv  TXB1D02, 0x0002

        .equiv  C1TX1B1_TXB1D03, 0x0003
        .equiv  C1TX1B1_TXB1D03_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D03_MASK, 0x0008
        .equiv  TXB1D03, 0x0003

        .equiv  C1TX1B1_TXB1D04, 0x0004
        .equiv  C1TX1B1_TXB1D04_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D04_MASK, 0x0010
        .equiv  TXB1D04, 0x0004

        .equiv  C1TX1B1_TXB1D05, 0x0005
        .equiv  C1TX1B1_TXB1D05_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D05_MASK, 0x0020
        .equiv  TXB1D05, 0x0005

        .equiv  C1TX1B1_TXB1D06, 0x0006
        .equiv  C1TX1B1_TXB1D06_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D06_MASK, 0x0040
        .equiv  TXB1D06, 0x0006

        .equiv  C1TX1B1_TXB1D07, 0x0007
        .equiv  C1TX1B1_TXB1D07_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D07_MASK, 0x0080
        .equiv  TXB1D07, 0x0007

        .equiv  C1TX1B1_TXB1D10, 0x0008
        .equiv  C1TX1B1_TXB1D10_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D10_MASK, 0x0100
        .equiv  TXB1D10, 0x0008

        .equiv  C1TX1B1_TXB1D11, 0x0009
        .equiv  C1TX1B1_TXB1D11_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D11_MASK, 0x0200
        .equiv  TXB1D11, 0x0009

        .equiv  C1TX1B1_TXB1D12, 0x000A
        .equiv  C1TX1B1_TXB1D12_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D12_MASK, 0x0400
        .equiv  TXB1D12, 0x000A

        .equiv  C1TX1B1_TXB1D13, 0x000B
        .equiv  C1TX1B1_TXB1D13_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D13_MASK, 0x0800
        .equiv  TXB1D13, 0x000B

        .equiv  C1TX1B1_TXB1D14, 0x000C
        .equiv  C1TX1B1_TXB1D14_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D14_MASK, 0x1000
        .equiv  TXB1D14, 0x000C

        .equiv  C1TX1B1_TXB1D15, 0x000D
        .equiv  C1TX1B1_TXB1D15_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D15_MASK, 0x2000
        .equiv  TXB1D15, 0x000D

        .equiv  C1TX1B1_TXB1D16, 0x000E
        .equiv  C1TX1B1_TXB1D16_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D16_MASK, 0x4000
        .equiv  TXB1D16, 0x000E

        .equiv  C1TX1B1_TXB1D17, 0x000F
        .equiv  C1TX1B1_TXB1D17_WIDTH, 0x0001
        .equiv  C1TX1B1_TXB1D17_MASK, 0x8000
        .equiv  TXB1D17, 0x000F

;----- C1TX1B2 Bits -----------------------------------------------------
        .equiv  C1TX1B2_TXB1D20, 0x0000
        .equiv  C1TX1B2_TXB1D20_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D20_MASK, 0x0001
        .equiv  TXB1D20, 0x0000

        .equiv  C1TX1B2_TXB1D21, 0x0001
        .equiv  C1TX1B2_TXB1D21_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D21_MASK, 0x0002
        .equiv  TXB1D21, 0x0001

        .equiv  C1TX1B2_TXB1D22, 0x0002
        .equiv  C1TX1B2_TXB1D22_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D22_MASK, 0x0004
        .equiv  TXB1D22, 0x0002

        .equiv  C1TX1B2_TXB1D23, 0x0003
        .equiv  C1TX1B2_TXB1D23_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D23_MASK, 0x0008
        .equiv  TXB1D23, 0x0003

        .equiv  C1TX1B2_TXB1D24, 0x0004
        .equiv  C1TX1B2_TXB1D24_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D24_MASK, 0x0010
        .equiv  TXB1D24, 0x0004

        .equiv  C1TX1B2_TXB1D25, 0x0005
        .equiv  C1TX1B2_TXB1D25_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D25_MASK, 0x0020
        .equiv  TXB1D25, 0x0005

        .equiv  C1TX1B2_TXB1D26, 0x0006
        .equiv  C1TX1B2_TXB1D26_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D26_MASK, 0x0040
        .equiv  TXB1D26, 0x0006

        .equiv  C1TX1B2_TXB1D27, 0x0007
        .equiv  C1TX1B2_TXB1D27_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D27_MASK, 0x0080
        .equiv  TXB1D27, 0x0007

        .equiv  C1TX1B2_TXB1D30, 0x0008
        .equiv  C1TX1B2_TXB1D30_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D30_MASK, 0x0100
        .equiv  TXB1D30, 0x0008

        .equiv  C1TX1B2_TXB1D31, 0x0009
        .equiv  C1TX1B2_TXB1D31_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D31_MASK, 0x0200
        .equiv  TXB1D31, 0x0009

        .equiv  C1TX1B2_TXB1D32, 0x000A
        .equiv  C1TX1B2_TXB1D32_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D32_MASK, 0x0400
        .equiv  TXB1D32, 0x000A

        .equiv  C1TX1B2_TXB1D33, 0x000B
        .equiv  C1TX1B2_TXB1D33_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D33_MASK, 0x0800
        .equiv  TXB1D33, 0x000B

        .equiv  C1TX1B2_TXB1D34, 0x000C
        .equiv  C1TX1B2_TXB1D34_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D34_MASK, 0x1000
        .equiv  TXB1D34, 0x000C

        .equiv  C1TX1B2_TXB1D35, 0x000D
        .equiv  C1TX1B2_TXB1D35_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D35_MASK, 0x2000
        .equiv  TXB1D35, 0x000D

        .equiv  C1TX1B2_TXB1D36, 0x000E
        .equiv  C1TX1B2_TXB1D36_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D36_MASK, 0x4000
        .equiv  TXB1D36, 0x000E

        .equiv  C1TX1B2_TXB1D37, 0x000F
        .equiv  C1TX1B2_TXB1D37_WIDTH, 0x0001
        .equiv  C1TX1B2_TXB1D37_MASK, 0x8000
        .equiv  TXB1D37, 0x000F

;----- C1TX1B3 Bits -----------------------------------------------------
        .equiv  C1TX1B3_TXB1D40, 0x0000
        .equiv  C1TX1B3_TXB1D40_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D40_MASK, 0x0001
        .equiv  TXB1D40, 0x0000

        .equiv  C1TX1B3_TXB1D41, 0x0001
        .equiv  C1TX1B3_TXB1D41_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D41_MASK, 0x0002
        .equiv  TXB1D41, 0x0001

        .equiv  C1TX1B3_TXB1D42, 0x0002
        .equiv  C1TX1B3_TXB1D42_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D42_MASK, 0x0004
        .equiv  TXB1D42, 0x0002

        .equiv  C1TX1B3_TXB1D43, 0x0003
        .equiv  C1TX1B3_TXB1D43_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D43_MASK, 0x0008
        .equiv  TXB1D43, 0x0003

        .equiv  C1TX1B3_TXB1D44, 0x0004
        .equiv  C1TX1B3_TXB1D44_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D44_MASK, 0x0010
        .equiv  TXB1D44, 0x0004

        .equiv  C1TX1B3_TXB1D45, 0x0005
        .equiv  C1TX1B3_TXB1D45_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D45_MASK, 0x0020
        .equiv  TXB1D45, 0x0005

        .equiv  C1TX1B3_TXB1D46, 0x0006
        .equiv  C1TX1B3_TXB1D46_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D46_MASK, 0x0040
        .equiv  TXB1D46, 0x0006

        .equiv  C1TX1B3_TXB1D47, 0x0007
        .equiv  C1TX1B3_TXB1D47_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D47_MASK, 0x0080
        .equiv  TXB1D47, 0x0007

        .equiv  C1TX1B3_TXB1D50, 0x0008
        .equiv  C1TX1B3_TXB1D50_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D50_MASK, 0x0100
        .equiv  TXB1D50, 0x0008

        .equiv  C1TX1B3_TXB1D51, 0x0009
        .equiv  C1TX1B3_TXB1D51_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D51_MASK, 0x0200
        .equiv  TXB1D51, 0x0009

        .equiv  C1TX1B3_TXB1D52, 0x000A
        .equiv  C1TX1B3_TXB1D52_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D52_MASK, 0x0400
        .equiv  TXB1D52, 0x000A

        .equiv  C1TX1B3_TXB1D53, 0x000B
        .equiv  C1TX1B3_TXB1D53_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D53_MASK, 0x0800
        .equiv  TXB1D53, 0x000B

        .equiv  C1TX1B3_TXB1D54, 0x000C
        .equiv  C1TX1B3_TXB1D54_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D54_MASK, 0x1000
        .equiv  TXB1D54, 0x000C

        .equiv  C1TX1B3_TXB1D55, 0x000D
        .equiv  C1TX1B3_TXB1D55_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D55_MASK, 0x2000
        .equiv  TXB1D55, 0x000D

        .equiv  C1TX1B3_TXB1D56, 0x000E
        .equiv  C1TX1B3_TXB1D56_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D56_MASK, 0x4000
        .equiv  TXB1D56, 0x000E

        .equiv  C1TX1B3_TXB1D57, 0x000F
        .equiv  C1TX1B3_TXB1D57_WIDTH, 0x0001
        .equiv  C1TX1B3_TXB1D57_MASK, 0x8000
        .equiv  TXB1D57, 0x000F

;----- C1TX1B4 Bits -----------------------------------------------------
        .equiv  C1TX1B4_TXB1D60, 0x0000
        .equiv  C1TX1B4_TXB1D60_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D60_MASK, 0x0001
        .equiv  TXB1D60, 0x0000

        .equiv  C1TX1B4_TXB1D61, 0x0001
        .equiv  C1TX1B4_TXB1D61_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D61_MASK, 0x0002
        .equiv  TXB1D61, 0x0001

        .equiv  C1TX1B4_TXB1D62, 0x0002
        .equiv  C1TX1B4_TXB1D62_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D62_MASK, 0x0004
        .equiv  TXB1D62, 0x0002

        .equiv  C1TX1B4_TXB1D63, 0x0003
        .equiv  C1TX1B4_TXB1D63_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D63_MASK, 0x0008
        .equiv  TXB1D63, 0x0003

        .equiv  C1TX1B4_TXB1D64, 0x0004
        .equiv  C1TX1B4_TXB1D64_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D64_MASK, 0x0010
        .equiv  TXB1D64, 0x0004

        .equiv  C1TX1B4_TXB1D65, 0x0005
        .equiv  C1TX1B4_TXB1D65_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D65_MASK, 0x0020
        .equiv  TXB1D65, 0x0005

        .equiv  C1TX1B4_TXB1D66, 0x0006
        .equiv  C1TX1B4_TXB1D66_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D66_MASK, 0x0040
        .equiv  TXB1D66, 0x0006

        .equiv  C1TX1B4_TXB1D67, 0x0007
        .equiv  C1TX1B4_TXB1D67_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D67_MASK, 0x0080
        .equiv  TXB1D67, 0x0007

        .equiv  C1TX1B4_TXB1D70, 0x0008
        .equiv  C1TX1B4_TXB1D70_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D70_MASK, 0x0100
        .equiv  TXB1D70, 0x0008

        .equiv  C1TX1B4_TXB1D71, 0x0009
        .equiv  C1TX1B4_TXB1D71_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D71_MASK, 0x0200
        .equiv  TXB1D71, 0x0009

        .equiv  C1TX1B4_TXB1D72, 0x000A
        .equiv  C1TX1B4_TXB1D72_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D72_MASK, 0x0400
        .equiv  TXB1D72, 0x000A

        .equiv  C1TX1B4_TXB1D73, 0x000B
        .equiv  C1TX1B4_TXB1D73_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D73_MASK, 0x0800
        .equiv  TXB1D73, 0x000B

        .equiv  C1TX1B4_TXB1D74, 0x000C
        .equiv  C1TX1B4_TXB1D74_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D74_MASK, 0x1000
        .equiv  TXB1D74, 0x000C

        .equiv  C1TX1B4_TXB1D75, 0x000D
        .equiv  C1TX1B4_TXB1D75_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D75_MASK, 0x2000
        .equiv  TXB1D75, 0x000D

        .equiv  C1TX1B4_TXB1D76, 0x000E
        .equiv  C1TX1B4_TXB1D76_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D76_MASK, 0x4000
        .equiv  TXB1D76, 0x000E

        .equiv  C1TX1B4_TXB1D77, 0x000F
        .equiv  C1TX1B4_TXB1D77_WIDTH, 0x0001
        .equiv  C1TX1B4_TXB1D77_MASK, 0x8000
        .equiv  TXB1D77, 0x000F

;----- C1TX1CON Bits -----------------------------------------------------
        .equiv  C1TX1CON_TXPRI, 0x0000
        .equiv  C1TX1CON_TXPRI_WIDTH, 0x0002
        .equiv  C1TX1CON_TXPRI_MASK, 0x0003

        .equiv  C1TX1CON_TXREQ, 0x0003
        .equiv  C1TX1CON_TXREQ_WIDTH, 0x0001
        .equiv  C1TX1CON_TXREQ_MASK, 0x0008

        .equiv  C1TX1CON_TXERR, 0x0004
        .equiv  C1TX1CON_TXERR_WIDTH, 0x0001
        .equiv  C1TX1CON_TXERR_MASK, 0x0010

        .equiv  C1TX1CON_TXLARB, 0x0005
        .equiv  C1TX1CON_TXLARB_WIDTH, 0x0001
        .equiv  C1TX1CON_TXLARB_MASK, 0x0020

        .equiv  C1TX1CON_TXABT, 0x0006
        .equiv  C1TX1CON_TXABT_WIDTH, 0x0001
        .equiv  C1TX1CON_TXABT_MASK, 0x0040

        .equiv  C1TX1CON_TXPRI0, 0x0000
        .equiv  C1TX1CON_TXPRI0_WIDTH, 0x0001
        .equiv  C1TX1CON_TXPRI0_MASK, 0x0001

        .equiv  C1TX1CON_TXPRI1, 0x0001
        .equiv  C1TX1CON_TXPRI1_WIDTH, 0x0001
        .equiv  C1TX1CON_TXPRI1_MASK, 0x0002

;----- C1TX0SID Bits -----------------------------------------------------
        .equiv  C1TX0SID_TXIDE, 0x0000
        .equiv  C1TX0SID_TXIDE_WIDTH, 0x0001
        .equiv  C1TX0SID_TXIDE_MASK, 0x0001

        .equiv  C1TX0SID_SRR, 0x0001
        .equiv  C1TX0SID_SRR_WIDTH, 0x0001
        .equiv  C1TX0SID_SRR_MASK, 0x0002

        .equiv  C1TX0SID_SID0, 0x0002
        .equiv  C1TX0SID_SID0_WIDTH, 0x0001
        .equiv  C1TX0SID_SID0_MASK, 0x0004

        .equiv  C1TX0SID_SID1, 0x0003
        .equiv  C1TX0SID_SID1_WIDTH, 0x0001
        .equiv  C1TX0SID_SID1_MASK, 0x0008

        .equiv  C1TX0SID_SID2, 0x0004
        .equiv  C1TX0SID_SID2_WIDTH, 0x0001
        .equiv  C1TX0SID_SID2_MASK, 0x0010

        .equiv  C1TX0SID_SID3, 0x0005
        .equiv  C1TX0SID_SID3_WIDTH, 0x0001
        .equiv  C1TX0SID_SID3_MASK, 0x0020

        .equiv  C1TX0SID_SID4, 0x0006
        .equiv  C1TX0SID_SID4_WIDTH, 0x0001
        .equiv  C1TX0SID_SID4_MASK, 0x0040

        .equiv  C1TX0SID_SID5, 0x0007
        .equiv  C1TX0SID_SID5_WIDTH, 0x0001
        .equiv  C1TX0SID_SID5_MASK, 0x0080

        .equiv  C1TX0SID_SID6_C1TX0SID, 0x000B
        .equiv  C1TX0SID_SID6_C1TX0SID_WIDTH, 0x0001
        .equiv  C1TX0SID_SID6_C1TX0SID_MASK, 0x0800
        .equiv  SID6_C1TX0SID, 0x000B

        .equiv  C1TX0SID_SID7_C1TX0SID, 0x000C
        .equiv  C1TX0SID_SID7_C1TX0SID_WIDTH, 0x0001
        .equiv  C1TX0SID_SID7_C1TX0SID_MASK, 0x1000
        .equiv  SID7_C1TX0SID, 0x000C

        .equiv  C1TX0SID_SID8_C1TX0SID, 0x000D
        .equiv  C1TX0SID_SID8_C1TX0SID_WIDTH, 0x0001
        .equiv  C1TX0SID_SID8_C1TX0SID_MASK, 0x2000
        .equiv  SID8_C1TX0SID, 0x000D

        .equiv  C1TX0SID_SID9_C1TX0SID, 0x000E
        .equiv  C1TX0SID_SID9_C1TX0SID_WIDTH, 0x0001
        .equiv  C1TX0SID_SID9_C1TX0SID_MASK, 0x4000
        .equiv  SID9_C1TX0SID, 0x000E

        .equiv  C1TX0SID_SID10_C1TX0SID, 0x000F
        .equiv  C1TX0SID_SID10_C1TX0SID_WIDTH, 0x0001
        .equiv  C1TX0SID_SID10_C1TX0SID_MASK, 0x8000
        .equiv  SID10_C1TX0SID, 0x000F

        .equiv  C1TX0SID_SID5_0, 0x0002
        .equiv  C1TX0SID_SID5_0_WIDTH, 0x0006
        .equiv  C1TX0SID_SID5_0_MASK, 0x00FC

        .equiv  C1TX0SID_SID10_6, 0x000B
        .equiv  C1TX0SID_SID10_6_WIDTH, 0x0005
        .equiv  C1TX0SID_SID10_6_MASK, 0xF800

;----- C1TX0EID Bits -----------------------------------------------------
        .equiv  C1TX0EID_EID6, 0x0000
        .equiv  C1TX0EID_EID6_WIDTH, 0x0001
        .equiv  C1TX0EID_EID6_MASK, 0x0001

        .equiv  C1TX0EID_EID7, 0x0001
        .equiv  C1TX0EID_EID7_WIDTH, 0x0001
        .equiv  C1TX0EID_EID7_MASK, 0x0002

        .equiv  C1TX0EID_EID8, 0x0002
        .equiv  C1TX0EID_EID8_WIDTH, 0x0001
        .equiv  C1TX0EID_EID8_MASK, 0x0004

        .equiv  C1TX0EID_EID9, 0x0003
        .equiv  C1TX0EID_EID9_WIDTH, 0x0001
        .equiv  C1TX0EID_EID9_MASK, 0x0008

        .equiv  C1TX0EID_EID10, 0x0004
        .equiv  C1TX0EID_EID10_WIDTH, 0x0001
        .equiv  C1TX0EID_EID10_MASK, 0x0010

        .equiv  C1TX0EID_EID11, 0x0005
        .equiv  C1TX0EID_EID11_WIDTH, 0x0001
        .equiv  C1TX0EID_EID11_MASK, 0x0020

        .equiv  C1TX0EID_EID12, 0x0006
        .equiv  C1TX0EID_EID12_WIDTH, 0x0001
        .equiv  C1TX0EID_EID12_MASK, 0x0040

        .equiv  C1TX0EID_EID13, 0x0007
        .equiv  C1TX0EID_EID13_WIDTH, 0x0001
        .equiv  C1TX0EID_EID13_MASK, 0x0080

        .equiv  C1TX0EID_EID14_C1TX0EID, 0x000C
        .equiv  C1TX0EID_EID14_C1TX0EID_WIDTH, 0x0001
        .equiv  C1TX0EID_EID14_C1TX0EID_MASK, 0x1000
        .equiv  EID14_C1TX0EID, 0x000C

        .equiv  C1TX0EID_EID15_C1TX0EID, 0x000D
        .equiv  C1TX0EID_EID15_C1TX0EID_WIDTH, 0x0001
        .equiv  C1TX0EID_EID15_C1TX0EID_MASK, 0x2000
        .equiv  EID15_C1TX0EID, 0x000D

        .equiv  C1TX0EID_EID16_C1TX0EID, 0x000E
        .equiv  C1TX0EID_EID16_C1TX0EID_WIDTH, 0x0001
        .equiv  C1TX0EID_EID16_C1TX0EID_MASK, 0x4000
        .equiv  EID16_C1TX0EID, 0x000E

        .equiv  C1TX0EID_EID17_C1TX0EID, 0x000F
        .equiv  C1TX0EID_EID17_C1TX0EID_WIDTH, 0x0001
        .equiv  C1TX0EID_EID17_C1TX0EID_MASK, 0x8000
        .equiv  EID17_C1TX0EID, 0x000F

        .equiv  C1TX0EID_EID13_6, 0x0000
        .equiv  C1TX0EID_EID13_6_WIDTH, 0x0008
        .equiv  C1TX0EID_EID13_6_MASK, 0x00FF

        .equiv  C1TX0EID_EID17_14, 0x000C
        .equiv  C1TX0EID_EID17_14_WIDTH, 0x0004
        .equiv  C1TX0EID_EID17_14_MASK, 0xF000

;----- C1TX0DLC Bits -----------------------------------------------------
        .equiv  C1TX0DLC_DLC_C1TX0DLC, 0x0003
        .equiv  C1TX0DLC_DLC_C1TX0DLC_WIDTH, 0x0004
        .equiv  C1TX0DLC_DLC_C1TX0DLC_MASK, 0x0078

        .equiv  C1TX0DLC_TXRB0, 0x0007
        .equiv  C1TX0DLC_TXRB0_WIDTH, 0x0001
        .equiv  C1TX0DLC_TXRB0_MASK, 0x0080

        .equiv  C1TX0DLC_TXRB1, 0x0008
        .equiv  C1TX0DLC_TXRB1_WIDTH, 0x0001
        .equiv  C1TX0DLC_TXRB1_MASK, 0x0100

        .equiv  C1TX0DLC_TXRTR, 0x0009
        .equiv  C1TX0DLC_TXRTR_WIDTH, 0x0001
        .equiv  C1TX0DLC_TXRTR_MASK, 0x0200

        .equiv  C1TX0DLC_EID0, 0x000A
        .equiv  C1TX0DLC_EID0_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID0_MASK, 0x0400

        .equiv  C1TX0DLC_EID1, 0x000B
        .equiv  C1TX0DLC_EID1_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID1_MASK, 0x0800

        .equiv  C1TX0DLC_EID2, 0x000C
        .equiv  C1TX0DLC_EID2_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID2_MASK, 0x1000

        .equiv  C1TX0DLC_EID3, 0x000D
        .equiv  C1TX0DLC_EID3_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID3_MASK, 0x2000

        .equiv  C1TX0DLC_EID4, 0x000E
        .equiv  C1TX0DLC_EID4_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID4_MASK, 0x4000

        .equiv  C1TX0DLC_EID5, 0x000F
        .equiv  C1TX0DLC_EID5_WIDTH, 0x0001
        .equiv  C1TX0DLC_EID5_MASK, 0x8000

        .equiv  C1TX0DLC_EID5_0, 0x000A
        .equiv  C1TX0DLC_EID5_0_WIDTH, 0x0006
        .equiv  C1TX0DLC_EID5_0_MASK, 0xFC00

        .equiv  C1TX0DLC_DLC0_C1TX0DLC, 0x0003
        .equiv  C1TX0DLC_DLC0_C1TX0DLC_WIDTH, 0x0001
        .equiv  C1TX0DLC_DLC0_C1TX0DLC_MASK, 0x0008
        .equiv  DLC0_C1TX0DLC, 0x0003

        .equiv  C1TX0DLC_DLC1_C1TX0DLC, 0x0004
        .equiv  C1TX0DLC_DLC1_C1TX0DLC_WIDTH, 0x0001
        .equiv  C1TX0DLC_DLC1_C1TX0DLC_MASK, 0x0010
        .equiv  DLC1_C1TX0DLC, 0x0004

        .equiv  C1TX0DLC_DLC2_C1TX0DLC, 0x0005
        .equiv  C1TX0DLC_DLC2_C1TX0DLC_WIDTH, 0x0001
        .equiv  C1TX0DLC_DLC2_C1TX0DLC_MASK, 0x0020
        .equiv  DLC2_C1TX0DLC, 0x0005

        .equiv  C1TX0DLC_DLC3_C1TX0DLC, 0x0006
        .equiv  C1TX0DLC_DLC3_C1TX0DLC_WIDTH, 0x0001
        .equiv  C1TX0DLC_DLC3_C1TX0DLC_MASK, 0x0040
        .equiv  DLC3_C1TX0DLC, 0x0006

;----- C1TX0B1 Bits -----------------------------------------------------
        .equiv  C1TX0B1_TXB0D00, 0x0000
        .equiv  C1TX0B1_TXB0D00_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D00_MASK, 0x0001
        .equiv  TXB0D00, 0x0000

        .equiv  C1TX0B1_TXB0D01, 0x0001
        .equiv  C1TX0B1_TXB0D01_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D01_MASK, 0x0002
        .equiv  TXB0D01, 0x0001

        .equiv  C1TX0B1_TXB0D02, 0x0002
        .equiv  C1TX0B1_TXB0D02_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D02_MASK, 0x0004
        .equiv  TXB0D02, 0x0002

        .equiv  C1TX0B1_TXB0D03, 0x0003
        .equiv  C1TX0B1_TXB0D03_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D03_MASK, 0x0008
        .equiv  TXB0D03, 0x0003

        .equiv  C1TX0B1_TXB0D04, 0x0004
        .equiv  C1TX0B1_TXB0D04_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D04_MASK, 0x0010
        .equiv  TXB0D04, 0x0004

        .equiv  C1TX0B1_TXB0D05, 0x0005
        .equiv  C1TX0B1_TXB0D05_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D05_MASK, 0x0020
        .equiv  TXB0D05, 0x0005

        .equiv  C1TX0B1_TXB0D06, 0x0006
        .equiv  C1TX0B1_TXB0D06_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D06_MASK, 0x0040
        .equiv  TXB0D06, 0x0006

        .equiv  C1TX0B1_TXB0D07, 0x0007
        .equiv  C1TX0B1_TXB0D07_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D07_MASK, 0x0080
        .equiv  TXB0D07, 0x0007

        .equiv  C1TX0B1_TXB0D10, 0x0008
        .equiv  C1TX0B1_TXB0D10_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D10_MASK, 0x0100
        .equiv  TXB0D10, 0x0008

        .equiv  C1TX0B1_TXB0D11, 0x0009
        .equiv  C1TX0B1_TXB0D11_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D11_MASK, 0x0200
        .equiv  TXB0D11, 0x0009

        .equiv  C1TX0B1_TXB0D12, 0x000A
        .equiv  C1TX0B1_TXB0D12_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D12_MASK, 0x0400
        .equiv  TXB0D12, 0x000A

        .equiv  C1TX0B1_TXB0D13, 0x000B
        .equiv  C1TX0B1_TXB0D13_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D13_MASK, 0x0800
        .equiv  TXB0D13, 0x000B

        .equiv  C1TX0B1_TXB0D14, 0x000C
        .equiv  C1TX0B1_TXB0D14_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D14_MASK, 0x1000
        .equiv  TXB0D14, 0x000C

        .equiv  C1TX0B1_TXB0D15, 0x000D
        .equiv  C1TX0B1_TXB0D15_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D15_MASK, 0x2000
        .equiv  TXB0D15, 0x000D

        .equiv  C1TX0B1_TXB0D16, 0x000E
        .equiv  C1TX0B1_TXB0D16_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D16_MASK, 0x4000
        .equiv  TXB0D16, 0x000E

        .equiv  C1TX0B1_TXB0D17, 0x000F
        .equiv  C1TX0B1_TXB0D17_WIDTH, 0x0001
        .equiv  C1TX0B1_TXB0D17_MASK, 0x8000
        .equiv  TXB0D17, 0x000F

;----- C1TX0B2 Bits -----------------------------------------------------
        .equiv  C1TX0B2_TXB0D20, 0x0000
        .equiv  C1TX0B2_TXB0D20_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D20_MASK, 0x0001
        .equiv  TXB0D20, 0x0000

        .equiv  C1TX0B2_TXB0D21, 0x0001
        .equiv  C1TX0B2_TXB0D21_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D21_MASK, 0x0002
        .equiv  TXB0D21, 0x0001

        .equiv  C1TX0B2_TXB0D22, 0x0002
        .equiv  C1TX0B2_TXB0D22_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D22_MASK, 0x0004
        .equiv  TXB0D22, 0x0002

        .equiv  C1TX0B2_TXB0D23, 0x0003
        .equiv  C1TX0B2_TXB0D23_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D23_MASK, 0x0008
        .equiv  TXB0D23, 0x0003

        .equiv  C1TX0B2_TXB0D24, 0x0004
        .equiv  C1TX0B2_TXB0D24_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D24_MASK, 0x0010
        .equiv  TXB0D24, 0x0004

        .equiv  C1TX0B2_TXB0D25, 0x0005
        .equiv  C1TX0B2_TXB0D25_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D25_MASK, 0x0020
        .equiv  TXB0D25, 0x0005

        .equiv  C1TX0B2_TXB0D26, 0x0006
        .equiv  C1TX0B2_TXB0D26_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D26_MASK, 0x0040
        .equiv  TXB0D26, 0x0006

        .equiv  C1TX0B2_TXB0D27, 0x0007
        .equiv  C1TX0B2_TXB0D27_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D27_MASK, 0x0080
        .equiv  TXB0D27, 0x0007

        .equiv  C1TX0B2_TXB0D30, 0x0008
        .equiv  C1TX0B2_TXB0D30_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D30_MASK, 0x0100
        .equiv  TXB0D30, 0x0008

        .equiv  C1TX0B2_TXB0D31, 0x0009
        .equiv  C1TX0B2_TXB0D31_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D31_MASK, 0x0200
        .equiv  TXB0D31, 0x0009

        .equiv  C1TX0B2_TXB0D32, 0x000A
        .equiv  C1TX0B2_TXB0D32_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D32_MASK, 0x0400
        .equiv  TXB0D32, 0x000A

        .equiv  C1TX0B2_TXB0D33, 0x000B
        .equiv  C1TX0B2_TXB0D33_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D33_MASK, 0x0800
        .equiv  TXB0D33, 0x000B

        .equiv  C1TX0B2_TXB0D34, 0x000C
        .equiv  C1TX0B2_TXB0D34_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D34_MASK, 0x1000
        .equiv  TXB0D34, 0x000C

        .equiv  C1TX0B2_TXB0D35, 0x000D
        .equiv  C1TX0B2_TXB0D35_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D35_MASK, 0x2000
        .equiv  TXB0D35, 0x000D

        .equiv  C1TX0B2_TXB0D36, 0x000E
        .equiv  C1TX0B2_TXB0D36_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D36_MASK, 0x4000
        .equiv  TXB0D36, 0x000E

        .equiv  C1TX0B2_TXB0D37, 0x000F
        .equiv  C1TX0B2_TXB0D37_WIDTH, 0x0001
        .equiv  C1TX0B2_TXB0D37_MASK, 0x8000
        .equiv  TXB0D37, 0x000F

;----- C1TX0B3 Bits -----------------------------------------------------
        .equiv  C1TX0B3_TXB0D40, 0x0000
        .equiv  C1TX0B3_TXB0D40_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D40_MASK, 0x0001
        .equiv  TXB0D40, 0x0000

        .equiv  C1TX0B3_TXB0D41, 0x0001
        .equiv  C1TX0B3_TXB0D41_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D41_MASK, 0x0002
        .equiv  TXB0D41, 0x0001

        .equiv  C1TX0B3_TXB0D42, 0x0002
        .equiv  C1TX0B3_TXB0D42_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D42_MASK, 0x0004
        .equiv  TXB0D42, 0x0002

        .equiv  C1TX0B3_TXB0D43, 0x0003
        .equiv  C1TX0B3_TXB0D43_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D43_MASK, 0x0008
        .equiv  TXB0D43, 0x0003

        .equiv  C1TX0B3_TXB0D44, 0x0004
        .equiv  C1TX0B3_TXB0D44_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D44_MASK, 0x0010
        .equiv  TXB0D44, 0x0004

        .equiv  C1TX0B3_TXB0D45, 0x0005
        .equiv  C1TX0B3_TXB0D45_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D45_MASK, 0x0020
        .equiv  TXB0D45, 0x0005

        .equiv  C1TX0B3_TXB0D46, 0x0006
        .equiv  C1TX0B3_TXB0D46_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D46_MASK, 0x0040
        .equiv  TXB0D46, 0x0006

        .equiv  C1TX0B3_TXB0D47, 0x0007
        .equiv  C1TX0B3_TXB0D47_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D47_MASK, 0x0080
        .equiv  TXB0D47, 0x0007

        .equiv  C1TX0B3_TXB0D50, 0x0008
        .equiv  C1TX0B3_TXB0D50_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D50_MASK, 0x0100
        .equiv  TXB0D50, 0x0008

        .equiv  C1TX0B3_TXB0D51, 0x0009
        .equiv  C1TX0B3_TXB0D51_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D51_MASK, 0x0200
        .equiv  TXB0D51, 0x0009

        .equiv  C1TX0B3_TXB0D52, 0x000A
        .equiv  C1TX0B3_TXB0D52_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D52_MASK, 0x0400
        .equiv  TXB0D52, 0x000A

        .equiv  C1TX0B3_TXB0D53, 0x000B
        .equiv  C1TX0B3_TXB0D53_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D53_MASK, 0x0800
        .equiv  TXB0D53, 0x000B

        .equiv  C1TX0B3_TXB0D54, 0x000C
        .equiv  C1TX0B3_TXB0D54_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D54_MASK, 0x1000
        .equiv  TXB0D54, 0x000C

        .equiv  C1TX0B3_TXB0D55, 0x000D
        .equiv  C1TX0B3_TXB0D55_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D55_MASK, 0x2000
        .equiv  TXB0D55, 0x000D

        .equiv  C1TX0B3_TXB0D56, 0x000E
        .equiv  C1TX0B3_TXB0D56_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D56_MASK, 0x4000
        .equiv  TXB0D56, 0x000E

        .equiv  C1TX0B3_TXB0D57, 0x000F
        .equiv  C1TX0B3_TXB0D57_WIDTH, 0x0001
        .equiv  C1TX0B3_TXB0D57_MASK, 0x8000
        .equiv  TXB0D57, 0x000F

;----- C1TX0B4 Bits -----------------------------------------------------
        .equiv  C1TX0B4_TXB0D60, 0x0000
        .equiv  C1TX0B4_TXB0D60_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D60_MASK, 0x0001
        .equiv  TXB0D60, 0x0000

        .equiv  C1TX0B4_TXB0D61, 0x0001
        .equiv  C1TX0B4_TXB0D61_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D61_MASK, 0x0002
        .equiv  TXB0D61, 0x0001

        .equiv  C1TX0B4_TXB0D62, 0x0002
        .equiv  C1TX0B4_TXB0D62_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D62_MASK, 0x0004
        .equiv  TXB0D62, 0x0002

        .equiv  C1TX0B4_TXB0D63, 0x0003
        .equiv  C1TX0B4_TXB0D63_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D63_MASK, 0x0008
        .equiv  TXB0D63, 0x0003

        .equiv  C1TX0B4_TXB0D64, 0x0004
        .equiv  C1TX0B4_TXB0D64_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D64_MASK, 0x0010
        .equiv  TXB0D64, 0x0004

        .equiv  C1TX0B4_TXB0D65, 0x0005
        .equiv  C1TX0B4_TXB0D65_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D65_MASK, 0x0020
        .equiv  TXB0D65, 0x0005

        .equiv  C1TX0B4_TXB0D66, 0x0006
        .equiv  C1TX0B4_TXB0D66_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D66_MASK, 0x0040
        .equiv  TXB0D66, 0x0006

        .equiv  C1TX0B4_TXB0D67, 0x0007
        .equiv  C1TX0B4_TXB0D67_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D67_MASK, 0x0080
        .equiv  TXB0D67, 0x0007

        .equiv  C1TX0B4_TXB0D70, 0x0008
        .equiv  C1TX0B4_TXB0D70_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D70_MASK, 0x0100
        .equiv  TXB0D70, 0x0008

        .equiv  C1TX0B4_TXB0D71, 0x0009
        .equiv  C1TX0B4_TXB0D71_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D71_MASK, 0x0200
        .equiv  TXB0D71, 0x0009

        .equiv  C1TX0B4_TXB0D72, 0x000A
        .equiv  C1TX0B4_TXB0D72_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D72_MASK, 0x0400
        .equiv  TXB0D72, 0x000A

        .equiv  C1TX0B4_TXB0D73, 0x000B
        .equiv  C1TX0B4_TXB0D73_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D73_MASK, 0x0800
        .equiv  TXB0D73, 0x000B

        .equiv  C1TX0B4_TXB0D74, 0x000C
        .equiv  C1TX0B4_TXB0D74_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D74_MASK, 0x1000
        .equiv  TXB0D74, 0x000C

        .equiv  C1TX0B4_TXB0D75, 0x000D
        .equiv  C1TX0B4_TXB0D75_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D75_MASK, 0x2000
        .equiv  TXB0D75, 0x000D

        .equiv  C1TX0B4_TXB0D76, 0x000E
        .equiv  C1TX0B4_TXB0D76_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D76_MASK, 0x4000
        .equiv  TXB0D76, 0x000E

        .equiv  C1TX0B4_TXB0D77, 0x000F
        .equiv  C1TX0B4_TXB0D77_WIDTH, 0x0001
        .equiv  C1TX0B4_TXB0D77_MASK, 0x8000
        .equiv  TXB0D77, 0x000F

;----- C1TX0CON Bits -----------------------------------------------------
        .equiv  C1TX0CON_TXPRI, 0x0000
        .equiv  C1TX0CON_TXPRI_WIDTH, 0x0002
        .equiv  C1TX0CON_TXPRI_MASK, 0x0003

        .equiv  C1TX0CON_TXREQ, 0x0003
        .equiv  C1TX0CON_TXREQ_WIDTH, 0x0001
        .equiv  C1TX0CON_TXREQ_MASK, 0x0008

        .equiv  C1TX0CON_TXERR, 0x0004
        .equiv  C1TX0CON_TXERR_WIDTH, 0x0001
        .equiv  C1TX0CON_TXERR_MASK, 0x0010

        .equiv  C1TX0CON_TXLARB, 0x0005
        .equiv  C1TX0CON_TXLARB_WIDTH, 0x0001
        .equiv  C1TX0CON_TXLARB_MASK, 0x0020

        .equiv  C1TX0CON_TXABT, 0x0006
        .equiv  C1TX0CON_TXABT_WIDTH, 0x0001
        .equiv  C1TX0CON_TXABT_MASK, 0x0040

        .equiv  C1TX0CON_TXPRI0, 0x0000
        .equiv  C1TX0CON_TXPRI0_WIDTH, 0x0001
        .equiv  C1TX0CON_TXPRI0_MASK, 0x0001

        .equiv  C1TX0CON_TXPRI1, 0x0001
        .equiv  C1TX0CON_TXPRI1_WIDTH, 0x0001
        .equiv  C1TX0CON_TXPRI1_MASK, 0x0002

;----- C1RX1SID Bits -----------------------------------------------------
        .equiv  C1RX1SID_RXIDE, 0x0000
        .equiv  C1RX1SID_RXIDE_WIDTH, 0x0001
        .equiv  C1RX1SID_RXIDE_MASK, 0x0001
        .equiv  RXIDE, 0x0000

        .equiv  C1RX1SID_SRR, 0x0001
        .equiv  C1RX1SID_SRR_WIDTH, 0x0001
        .equiv  C1RX1SID_SRR_MASK, 0x0002

        .equiv  C1RX1SID_SID0, 0x0002
        .equiv  C1RX1SID_SID0_WIDTH, 0x0001
        .equiv  C1RX1SID_SID0_MASK, 0x0004

        .equiv  C1RX1SID_SID1, 0x0003
        .equiv  C1RX1SID_SID1_WIDTH, 0x0001
        .equiv  C1RX1SID_SID1_MASK, 0x0008

        .equiv  C1RX1SID_SID2, 0x0004
        .equiv  C1RX1SID_SID2_WIDTH, 0x0001
        .equiv  C1RX1SID_SID2_MASK, 0x0010

        .equiv  C1RX1SID_SID3, 0x0005
        .equiv  C1RX1SID_SID3_WIDTH, 0x0001
        .equiv  C1RX1SID_SID3_MASK, 0x0020

        .equiv  C1RX1SID_SID4, 0x0006
        .equiv  C1RX1SID_SID4_WIDTH, 0x0001
        .equiv  C1RX1SID_SID4_MASK, 0x0040

        .equiv  C1RX1SID_SID5, 0x0007
        .equiv  C1RX1SID_SID5_WIDTH, 0x0001
        .equiv  C1RX1SID_SID5_MASK, 0x0080

        .equiv  C1RX1SID_SID6_C1RX1SID, 0x0008
        .equiv  C1RX1SID_SID6_C1RX1SID_WIDTH, 0x0001
        .equiv  C1RX1SID_SID6_C1RX1SID_MASK, 0x0100
        .equiv  SID6_C1RX1SID, 0x0008

        .equiv  C1RX1SID_SID7_C1RX1SID, 0x0009
        .equiv  C1RX1SID_SID7_C1RX1SID_WIDTH, 0x0001
        .equiv  C1RX1SID_SID7_C1RX1SID_MASK, 0x0200
        .equiv  SID7_C1RX1SID, 0x0009

        .equiv  C1RX1SID_SID8_C1RX1SID, 0x000A
        .equiv  C1RX1SID_SID8_C1RX1SID_WIDTH, 0x0001
        .equiv  C1RX1SID_SID8_C1RX1SID_MASK, 0x0400
        .equiv  SID8_C1RX1SID, 0x000A

        .equiv  C1RX1SID_SID9_C1RX1SID, 0x000B
        .equiv  C1RX1SID_SID9_C1RX1SID_WIDTH, 0x0001
        .equiv  C1RX1SID_SID9_C1RX1SID_MASK, 0x0800
        .equiv  SID9_C1RX1SID, 0x000B

        .equiv  C1RX1SID_SID10_C1RX1SID, 0x000C
        .equiv  C1RX1SID_SID10_C1RX1SID_WIDTH, 0x0001
        .equiv  C1RX1SID_SID10_C1RX1SID_MASK, 0x1000
        .equiv  SID10_C1RX1SID, 0x000C

        .equiv  C1RX1SID_SID, 0x0002
        .equiv  C1RX1SID_SID_WIDTH, 0x000B
        .equiv  C1RX1SID_SID_MASK, 0x1FFC

;----- C1RX1EID Bits -----------------------------------------------------
        .equiv  C1RX1EID_EID6, 0x0000
        .equiv  C1RX1EID_EID6_WIDTH, 0x0001
        .equiv  C1RX1EID_EID6_MASK, 0x0001

        .equiv  C1RX1EID_EID7, 0x0001
        .equiv  C1RX1EID_EID7_WIDTH, 0x0001
        .equiv  C1RX1EID_EID7_MASK, 0x0002

        .equiv  C1RX1EID_EID8, 0x0002
        .equiv  C1RX1EID_EID8_WIDTH, 0x0001
        .equiv  C1RX1EID_EID8_MASK, 0x0004

        .equiv  C1RX1EID_EID9, 0x0003
        .equiv  C1RX1EID_EID9_WIDTH, 0x0001
        .equiv  C1RX1EID_EID9_MASK, 0x0008

        .equiv  C1RX1EID_EID10, 0x0004
        .equiv  C1RX1EID_EID10_WIDTH, 0x0001
        .equiv  C1RX1EID_EID10_MASK, 0x0010

        .equiv  C1RX1EID_EID11, 0x0005
        .equiv  C1RX1EID_EID11_WIDTH, 0x0001
        .equiv  C1RX1EID_EID11_MASK, 0x0020

        .equiv  C1RX1EID_EID12, 0x0006
        .equiv  C1RX1EID_EID12_WIDTH, 0x0001
        .equiv  C1RX1EID_EID12_MASK, 0x0040

        .equiv  C1RX1EID_EID13, 0x0007
        .equiv  C1RX1EID_EID13_WIDTH, 0x0001
        .equiv  C1RX1EID_EID13_MASK, 0x0080

        .equiv  C1RX1EID_EID14_C1RX1EID, 0x0008
        .equiv  C1RX1EID_EID14_C1RX1EID_WIDTH, 0x0001
        .equiv  C1RX1EID_EID14_C1RX1EID_MASK, 0x0100
        .equiv  EID14_C1RX1EID, 0x0008

        .equiv  C1RX1EID_EID15_C1RX1EID, 0x0009
        .equiv  C1RX1EID_EID15_C1RX1EID_WIDTH, 0x0001
        .equiv  C1RX1EID_EID15_C1RX1EID_MASK, 0x0200
        .equiv  EID15_C1RX1EID, 0x0009

        .equiv  C1RX1EID_EID16_C1RX1EID, 0x000A
        .equiv  C1RX1EID_EID16_C1RX1EID_WIDTH, 0x0001
        .equiv  C1RX1EID_EID16_C1RX1EID_MASK, 0x0400
        .equiv  EID16_C1RX1EID, 0x000A

        .equiv  C1RX1EID_EID17_C1RX1EID, 0x000B
        .equiv  C1RX1EID_EID17_C1RX1EID_WIDTH, 0x0001
        .equiv  C1RX1EID_EID17_C1RX1EID_MASK, 0x0800
        .equiv  EID17_C1RX1EID, 0x000B

;----- C1RX1DLC Bits -----------------------------------------------------
        .equiv  C1RX1DLC_DLC_C1RX1DLC, 0x0000
        .equiv  C1RX1DLC_DLC_C1RX1DLC_WIDTH, 0x0004
        .equiv  C1RX1DLC_DLC_C1RX1DLC_MASK, 0x000F

        .equiv  C1RX1DLC_RXRB0, 0x0004
        .equiv  C1RX1DLC_RXRB0_WIDTH, 0x0001
        .equiv  C1RX1DLC_RXRB0_MASK, 0x0010
        .equiv  RXRB0, 0x0004

        .equiv  C1RX1DLC_RXRB1, 0x0008
        .equiv  C1RX1DLC_RXRB1_WIDTH, 0x0001
        .equiv  C1RX1DLC_RXRB1_MASK, 0x0100
        .equiv  RXRB1, 0x0008

        .equiv  C1RX1DLC_RXRTR, 0x0009
        .equiv  C1RX1DLC_RXRTR_WIDTH, 0x0001
        .equiv  C1RX1DLC_RXRTR_MASK, 0x0200
        .equiv  RXRTR, 0x0009

        .equiv  C1RX1DLC_EID0, 0x000A
        .equiv  C1RX1DLC_EID0_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID0_MASK, 0x0400

        .equiv  C1RX1DLC_EID1, 0x000B
        .equiv  C1RX1DLC_EID1_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID1_MASK, 0x0800

        .equiv  C1RX1DLC_EID2, 0x000C
        .equiv  C1RX1DLC_EID2_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID2_MASK, 0x1000

        .equiv  C1RX1DLC_EID3, 0x000D
        .equiv  C1RX1DLC_EID3_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID3_MASK, 0x2000

        .equiv  C1RX1DLC_EID4, 0x000E
        .equiv  C1RX1DLC_EID4_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID4_MASK, 0x4000

        .equiv  C1RX1DLC_EID5, 0x000F
        .equiv  C1RX1DLC_EID5_WIDTH, 0x0001
        .equiv  C1RX1DLC_EID5_MASK, 0x8000

        .equiv  C1RX1DLC_EID5_0, 0x000A
        .equiv  C1RX1DLC_EID5_0_WIDTH, 0x0006
        .equiv  C1RX1DLC_EID5_0_MASK, 0xFC00

        .equiv  C1RX1DLC_DLC0_C1RX1DLC, 0x0000
        .equiv  C1RX1DLC_DLC0_C1RX1DLC_WIDTH, 0x0001
        .equiv  C1RX1DLC_DLC0_C1RX1DLC_MASK, 0x0001
        .equiv  DLC0_C1RX1DLC, 0x0000

        .equiv  C1RX1DLC_DLC1_C1RX1DLC, 0x0001
        .equiv  C1RX1DLC_DLC1_C1RX1DLC_WIDTH, 0x0001
        .equiv  C1RX1DLC_DLC1_C1RX1DLC_MASK, 0x0002
        .equiv  DLC1_C1RX1DLC, 0x0001

        .equiv  C1RX1DLC_DLC2_C1RX1DLC, 0x0002
        .equiv  C1RX1DLC_DLC2_C1RX1DLC_WIDTH, 0x0001
        .equiv  C1RX1DLC_DLC2_C1RX1DLC_MASK, 0x0004
        .equiv  DLC2_C1RX1DLC, 0x0002

        .equiv  C1RX1DLC_DLC3_C1RX1DLC, 0x0003
        .equiv  C1RX1DLC_DLC3_C1RX1DLC_WIDTH, 0x0001
        .equiv  C1RX1DLC_DLC3_C1RX1DLC_MASK, 0x0008
        .equiv  DLC3_C1RX1DLC, 0x0003

;----- C1RX1B1 Bits -----------------------------------------------------
        .equiv  C1RX1B1_TXB1D00, 0x0000
        .equiv  C1RX1B1_TXB1D00_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D00_MASK, 0x0001

        .equiv  C1RX1B1_TXB1D01, 0x0001
        .equiv  C1RX1B1_TXB1D01_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D01_MASK, 0x0002

        .equiv  C1RX1B1_TXB1D02, 0x0002
        .equiv  C1RX1B1_TXB1D02_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D02_MASK, 0x0004

        .equiv  C1RX1B1_TXB1D03, 0x0003
        .equiv  C1RX1B1_TXB1D03_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D03_MASK, 0x0008

        .equiv  C1RX1B1_TXB1D04, 0x0004
        .equiv  C1RX1B1_TXB1D04_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D04_MASK, 0x0010

        .equiv  C1RX1B1_TXB1D05, 0x0005
        .equiv  C1RX1B1_TXB1D05_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D05_MASK, 0x0020

        .equiv  C1RX1B1_TXB1D06, 0x0006
        .equiv  C1RX1B1_TXB1D06_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D06_MASK, 0x0040

        .equiv  C1RX1B1_TXB1D07, 0x0007
        .equiv  C1RX1B1_TXB1D07_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D07_MASK, 0x0080

        .equiv  C1RX1B1_TXB1D10, 0x0008
        .equiv  C1RX1B1_TXB1D10_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D10_MASK, 0x0100

        .equiv  C1RX1B1_TXB1D11, 0x0009
        .equiv  C1RX1B1_TXB1D11_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D11_MASK, 0x0200

        .equiv  C1RX1B1_TXB1D12, 0x000A
        .equiv  C1RX1B1_TXB1D12_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D12_MASK, 0x0400

        .equiv  C1RX1B1_TXB1D13, 0x000B
        .equiv  C1RX1B1_TXB1D13_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D13_MASK, 0x0800

        .equiv  C1RX1B1_TXB1D14, 0x000C
        .equiv  C1RX1B1_TXB1D14_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D14_MASK, 0x1000

        .equiv  C1RX1B1_TXB1D15, 0x000D
        .equiv  C1RX1B1_TXB1D15_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D15_MASK, 0x2000

        .equiv  C1RX1B1_TXB1D16, 0x000E
        .equiv  C1RX1B1_TXB1D16_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D16_MASK, 0x4000

        .equiv  C1RX1B1_TXB1D17, 0x000F
        .equiv  C1RX1B1_TXB1D17_WIDTH, 0x0001
        .equiv  C1RX1B1_TXB1D17_MASK, 0x8000

;----- C1RX1B2 Bits -----------------------------------------------------
        .equiv  C1RX1B2_TXB1D20, 0x0000
        .equiv  C1RX1B2_TXB1D20_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D20_MASK, 0x0001

        .equiv  C1RX1B2_TXB1D21, 0x0001
        .equiv  C1RX1B2_TXB1D21_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D21_MASK, 0x0002

        .equiv  C1RX1B2_TXB1D22, 0x0002
        .equiv  C1RX1B2_TXB1D22_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D22_MASK, 0x0004

        .equiv  C1RX1B2_TXB1D23, 0x0003
        .equiv  C1RX1B2_TXB1D23_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D23_MASK, 0x0008

        .equiv  C1RX1B2_TXB1D24, 0x0004
        .equiv  C1RX1B2_TXB1D24_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D24_MASK, 0x0010

        .equiv  C1RX1B2_TXB1D25, 0x0005
        .equiv  C1RX1B2_TXB1D25_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D25_MASK, 0x0020

        .equiv  C1RX1B2_TXB1D26, 0x0006
        .equiv  C1RX1B2_TXB1D26_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D26_MASK, 0x0040

        .equiv  C1RX1B2_TXB1D27, 0x0007
        .equiv  C1RX1B2_TXB1D27_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D27_MASK, 0x0080

        .equiv  C1RX1B2_TXB1D30, 0x0008
        .equiv  C1RX1B2_TXB1D30_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D30_MASK, 0x0100

        .equiv  C1RX1B2_TXB1D31, 0x0009
        .equiv  C1RX1B2_TXB1D31_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D31_MASK, 0x0200

        .equiv  C1RX1B2_TXB1D32, 0x000A
        .equiv  C1RX1B2_TXB1D32_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D32_MASK, 0x0400

        .equiv  C1RX1B2_TXB1D33, 0x000B
        .equiv  C1RX1B2_TXB1D33_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D33_MASK, 0x0800

        .equiv  C1RX1B2_TXB1D34, 0x000C
        .equiv  C1RX1B2_TXB1D34_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D34_MASK, 0x1000

        .equiv  C1RX1B2_TXB1D35, 0x000D
        .equiv  C1RX1B2_TXB1D35_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D35_MASK, 0x2000

        .equiv  C1RX1B2_TXB1D36, 0x000E
        .equiv  C1RX1B2_TXB1D36_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D36_MASK, 0x4000

        .equiv  C1RX1B2_TXB1D37, 0x000F
        .equiv  C1RX1B2_TXB1D37_WIDTH, 0x0001
        .equiv  C1RX1B2_TXB1D37_MASK, 0x8000

;----- C1RX1B3 Bits -----------------------------------------------------
        .equiv  C1RX1B3_TXB1D40, 0x0000
        .equiv  C1RX1B3_TXB1D40_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D40_MASK, 0x0001

        .equiv  C1RX1B3_TXB1D41, 0x0001
        .equiv  C1RX1B3_TXB1D41_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D41_MASK, 0x0002

        .equiv  C1RX1B3_TXB1D42, 0x0002
        .equiv  C1RX1B3_TXB1D42_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D42_MASK, 0x0004

        .equiv  C1RX1B3_TXB1D43, 0x0003
        .equiv  C1RX1B3_TXB1D43_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D43_MASK, 0x0008

        .equiv  C1RX1B3_TXB1D44, 0x0004
        .equiv  C1RX1B3_TXB1D44_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D44_MASK, 0x0010

        .equiv  C1RX1B3_TXB1D45, 0x0005
        .equiv  C1RX1B3_TXB1D45_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D45_MASK, 0x0020

        .equiv  C1RX1B3_TXB1D46, 0x0006
        .equiv  C1RX1B3_TXB1D46_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D46_MASK, 0x0040

        .equiv  C1RX1B3_TXB1D47, 0x0007
        .equiv  C1RX1B3_TXB1D47_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D47_MASK, 0x0080

        .equiv  C1RX1B3_TXB1D50, 0x0008
        .equiv  C1RX1B3_TXB1D50_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D50_MASK, 0x0100

        .equiv  C1RX1B3_TXB1D51, 0x0009
        .equiv  C1RX1B3_TXB1D51_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D51_MASK, 0x0200

        .equiv  C1RX1B3_TXB1D52, 0x000A
        .equiv  C1RX1B3_TXB1D52_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D52_MASK, 0x0400

        .equiv  C1RX1B3_TXB1D53, 0x000B
        .equiv  C1RX1B3_TXB1D53_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D53_MASK, 0x0800

        .equiv  C1RX1B3_TXB1D54, 0x000C
        .equiv  C1RX1B3_TXB1D54_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D54_MASK, 0x1000

        .equiv  C1RX1B3_TXB1D55, 0x000D
        .equiv  C1RX1B3_TXB1D55_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D55_MASK, 0x2000

        .equiv  C1RX1B3_TXB1D56, 0x000E
        .equiv  C1RX1B3_TXB1D56_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D56_MASK, 0x4000

        .equiv  C1RX1B3_TXB1D57, 0x000F
        .equiv  C1RX1B3_TXB1D57_WIDTH, 0x0001
        .equiv  C1RX1B3_TXB1D57_MASK, 0x8000

;----- C1RX1B4 Bits -----------------------------------------------------
        .equiv  C1RX1B4_TXB1D60, 0x0000
        .equiv  C1RX1B4_TXB1D60_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D60_MASK, 0x0001

        .equiv  C1RX1B4_TXB1D61, 0x0001
        .equiv  C1RX1B4_TXB1D61_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D61_MASK, 0x0002

        .equiv  C1RX1B4_TXB1D62, 0x0002
        .equiv  C1RX1B4_TXB1D62_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D62_MASK, 0x0004

        .equiv  C1RX1B4_TXB1D63, 0x0003
        .equiv  C1RX1B4_TXB1D63_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D63_MASK, 0x0008

        .equiv  C1RX1B4_TXB1D64, 0x0004
        .equiv  C1RX1B4_TXB1D64_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D64_MASK, 0x0010

        .equiv  C1RX1B4_TXB1D65, 0x0005
        .equiv  C1RX1B4_TXB1D65_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D65_MASK, 0x0020

        .equiv  C1RX1B4_TXB1D66, 0x0006
        .equiv  C1RX1B4_TXB1D66_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D66_MASK, 0x0040

        .equiv  C1RX1B4_TXB1D67, 0x0007
        .equiv  C1RX1B4_TXB1D67_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D67_MASK, 0x0080

        .equiv  C1RX1B4_TXB1D70, 0x0008
        .equiv  C1RX1B4_TXB1D70_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D70_MASK, 0x0100

        .equiv  C1RX1B4_TXB1D71, 0x0009
        .equiv  C1RX1B4_TXB1D71_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D71_MASK, 0x0200

        .equiv  C1RX1B4_TXB1D72, 0x000A
        .equiv  C1RX1B4_TXB1D72_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D72_MASK, 0x0400

        .equiv  C1RX1B4_TXB1D73, 0x000B
        .equiv  C1RX1B4_TXB1D73_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D73_MASK, 0x0800

        .equiv  C1RX1B4_TXB1D74, 0x000C
        .equiv  C1RX1B4_TXB1D74_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D74_MASK, 0x1000

        .equiv  C1RX1B4_TXB1D75, 0x000D
        .equiv  C1RX1B4_TXB1D75_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D75_MASK, 0x2000

        .equiv  C1RX1B4_TXB1D76, 0x000E
        .equiv  C1RX1B4_TXB1D76_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D76_MASK, 0x4000

        .equiv  C1RX1B4_TXB1D77, 0x000F
        .equiv  C1RX1B4_TXB1D77_WIDTH, 0x0001
        .equiv  C1RX1B4_TXB1D77_MASK, 0x8000

;----- C1RX1CON Bits -----------------------------------------------------
        .equiv  C1RX1CON_FILHIT, 0x0000
        .equiv  C1RX1CON_FILHIT_WIDTH, 0x0003
        .equiv  C1RX1CON_FILHIT_MASK, 0x0007

        .equiv  C1RX1CON_RXRTRRO, 0x0003
        .equiv  C1RX1CON_RXRTRRO_WIDTH, 0x0001
        .equiv  C1RX1CON_RXRTRRO_MASK, 0x0008
        .equiv  RXRTRRO, 0x0003

        .equiv  C1RX1CON_RXFUL, 0x0007
        .equiv  C1RX1CON_RXFUL_WIDTH, 0x0001
        .equiv  C1RX1CON_RXFUL_MASK, 0x0080
        .equiv  RXFUL, 0x0007

        .equiv  C1RX1CON_FILHIT0, 0x0000
        .equiv  C1RX1CON_FILHIT0_WIDTH, 0x0001
        .equiv  C1RX1CON_FILHIT0_MASK, 0x0001
        .equiv  FILHIT0, 0x0000

        .equiv  C1RX1CON_FILHIT1, 0x0001
        .equiv  C1RX1CON_FILHIT1_WIDTH, 0x0001
        .equiv  C1RX1CON_FILHIT1_MASK, 0x0002
        .equiv  FILHIT1, 0x0001

        .equiv  C1RX1CON_FILHIT2, 0x0002
        .equiv  C1RX1CON_FILHIT2_WIDTH, 0x0001
        .equiv  C1RX1CON_FILHIT2_MASK, 0x0004
        .equiv  FILHIT2, 0x0002

;----- C1RX0SID Bits -----------------------------------------------------
        .equiv  C1RX0SID_RXIDE, 0x0000
        .equiv  C1RX0SID_RXIDE_WIDTH, 0x0001
        .equiv  C1RX0SID_RXIDE_MASK, 0x0001

        .equiv  C1RX0SID_SRR, 0x0001
        .equiv  C1RX0SID_SRR_WIDTH, 0x0001
        .equiv  C1RX0SID_SRR_MASK, 0x0002

        .equiv  C1RX0SID_SID0, 0x0002
        .equiv  C1RX0SID_SID0_WIDTH, 0x0001
        .equiv  C1RX0SID_SID0_MASK, 0x0004

        .equiv  C1RX0SID_SID1, 0x0003
        .equiv  C1RX0SID_SID1_WIDTH, 0x0001
        .equiv  C1RX0SID_SID1_MASK, 0x0008

        .equiv  C1RX0SID_SID2, 0x0004
        .equiv  C1RX0SID_SID2_WIDTH, 0x0001
        .equiv  C1RX0SID_SID2_MASK, 0x0010

        .equiv  C1RX0SID_SID3, 0x0005
        .equiv  C1RX0SID_SID3_WIDTH, 0x0001
        .equiv  C1RX0SID_SID3_MASK, 0x0020

        .equiv  C1RX0SID_SID4, 0x0006
        .equiv  C1RX0SID_SID4_WIDTH, 0x0001
        .equiv  C1RX0SID_SID4_MASK, 0x0040

        .equiv  C1RX0SID_SID5, 0x0007
        .equiv  C1RX0SID_SID5_WIDTH, 0x0001
        .equiv  C1RX0SID_SID5_MASK, 0x0080

        .equiv  C1RX0SID_SID6_C1RX0SID, 0x0008
        .equiv  C1RX0SID_SID6_C1RX0SID_WIDTH, 0x0001
        .equiv  C1RX0SID_SID6_C1RX0SID_MASK, 0x0100
        .equiv  SID6_C1RX0SID, 0x0008

        .equiv  C1RX0SID_SID7_C1RX0SID, 0x0009
        .equiv  C1RX0SID_SID7_C1RX0SID_WIDTH, 0x0001
        .equiv  C1RX0SID_SID7_C1RX0SID_MASK, 0x0200
        .equiv  SID7_C1RX0SID, 0x0009

        .equiv  C1RX0SID_SID8_C1RX0SID, 0x000A
        .equiv  C1RX0SID_SID8_C1RX0SID_WIDTH, 0x0001
        .equiv  C1RX0SID_SID8_C1RX0SID_MASK, 0x0400
        .equiv  SID8_C1RX0SID, 0x000A

        .equiv  C1RX0SID_SID9_C1RX0SID, 0x000B
        .equiv  C1RX0SID_SID9_C1RX0SID_WIDTH, 0x0001
        .equiv  C1RX0SID_SID9_C1RX0SID_MASK, 0x0800
        .equiv  SID9_C1RX0SID, 0x000B

        .equiv  C1RX0SID_SID10_C1RX0SID, 0x000C
        .equiv  C1RX0SID_SID10_C1RX0SID_WIDTH, 0x0001
        .equiv  C1RX0SID_SID10_C1RX0SID_MASK, 0x1000
        .equiv  SID10_C1RX0SID, 0x000C

        .equiv  C1RX0SID_SID, 0x0002
        .equiv  C1RX0SID_SID_WIDTH, 0x000B
        .equiv  C1RX0SID_SID_MASK, 0x1FFC

;----- C1RX0EID Bits -----------------------------------------------------
        .equiv  C1RX0EID_EID6, 0x0000
        .equiv  C1RX0EID_EID6_WIDTH, 0x0001
        .equiv  C1RX0EID_EID6_MASK, 0x0001

        .equiv  C1RX0EID_EID7, 0x0001
        .equiv  C1RX0EID_EID7_WIDTH, 0x0001
        .equiv  C1RX0EID_EID7_MASK, 0x0002

        .equiv  C1RX0EID_EID8, 0x0002
        .equiv  C1RX0EID_EID8_WIDTH, 0x0001
        .equiv  C1RX0EID_EID8_MASK, 0x0004

        .equiv  C1RX0EID_EID9, 0x0003
        .equiv  C1RX0EID_EID9_WIDTH, 0x0001
        .equiv  C1RX0EID_EID9_MASK, 0x0008

        .equiv  C1RX0EID_EID10, 0x0004
        .equiv  C1RX0EID_EID10_WIDTH, 0x0001
        .equiv  C1RX0EID_EID10_MASK, 0x0010

        .equiv  C1RX0EID_EID11, 0x0005
        .equiv  C1RX0EID_EID11_WIDTH, 0x0001
        .equiv  C1RX0EID_EID11_MASK, 0x0020

        .equiv  C1RX0EID_EID12, 0x0006
        .equiv  C1RX0EID_EID12_WIDTH, 0x0001
        .equiv  C1RX0EID_EID12_MASK, 0x0040

        .equiv  C1RX0EID_EID13, 0x0007
        .equiv  C1RX0EID_EID13_WIDTH, 0x0001
        .equiv  C1RX0EID_EID13_MASK, 0x0080

        .equiv  C1RX0EID_EID14_C1RX0EID, 0x0008
        .equiv  C1RX0EID_EID14_C1RX0EID_WIDTH, 0x0001
        .equiv  C1RX0EID_EID14_C1RX0EID_MASK, 0x0100
        .equiv  EID14_C1RX0EID, 0x0008

        .equiv  C1RX0EID_EID15_C1RX0EID, 0x0009
        .equiv  C1RX0EID_EID15_C1RX0EID_WIDTH, 0x0001
        .equiv  C1RX0EID_EID15_C1RX0EID_MASK, 0x0200
        .equiv  EID15_C1RX0EID, 0x0009

        .equiv  C1RX0EID_EID16_C1RX0EID, 0x000A
        .equiv  C1RX0EID_EID16_C1RX0EID_WIDTH, 0x0001
        .equiv  C1RX0EID_EID16_C1RX0EID_MASK, 0x0400
        .equiv  EID16_C1RX0EID, 0x000A

        .equiv  C1RX0EID_EID17_C1RX0EID, 0x000B
        .equiv  C1RX0EID_EID17_C1RX0EID_WIDTH, 0x0001
        .equiv  C1RX0EID_EID17_C1RX0EID_MASK, 0x0800
        .equiv  EID17_C1RX0EID, 0x000B

;----- C1RX0DLC Bits -----------------------------------------------------
        .equiv  C1RX0DLC_DLC_C1RX0DLC, 0x0000
        .equiv  C1RX0DLC_DLC_C1RX0DLC_WIDTH, 0x0004
        .equiv  C1RX0DLC_DLC_C1RX0DLC_MASK, 0x000F

        .equiv  C1RX0DLC_RXRB0, 0x0004
        .equiv  C1RX0DLC_RXRB0_WIDTH, 0x0001
        .equiv  C1RX0DLC_RXRB0_MASK, 0x0010

        .equiv  C1RX0DLC_RXRB1, 0x0008
        .equiv  C1RX0DLC_RXRB1_WIDTH, 0x0001
        .equiv  C1RX0DLC_RXRB1_MASK, 0x0100

        .equiv  C1RX0DLC_RXRTR, 0x0009
        .equiv  C1RX0DLC_RXRTR_WIDTH, 0x0001
        .equiv  C1RX0DLC_RXRTR_MASK, 0x0200

        .equiv  C1RX0DLC_EID0, 0x000A
        .equiv  C1RX0DLC_EID0_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID0_MASK, 0x0400

        .equiv  C1RX0DLC_EID1, 0x000B
        .equiv  C1RX0DLC_EID1_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID1_MASK, 0x0800

        .equiv  C1RX0DLC_EID2, 0x000C
        .equiv  C1RX0DLC_EID2_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID2_MASK, 0x1000

        .equiv  C1RX0DLC_EID3, 0x000D
        .equiv  C1RX0DLC_EID3_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID3_MASK, 0x2000

        .equiv  C1RX0DLC_EID4, 0x000E
        .equiv  C1RX0DLC_EID4_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID4_MASK, 0x4000

        .equiv  C1RX0DLC_EID5, 0x000F
        .equiv  C1RX0DLC_EID5_WIDTH, 0x0001
        .equiv  C1RX0DLC_EID5_MASK, 0x8000

        .equiv  C1RX0DLC_EID5_0, 0x000A
        .equiv  C1RX0DLC_EID5_0_WIDTH, 0x0006
        .equiv  C1RX0DLC_EID5_0_MASK, 0xFC00

        .equiv  C1RX0DLC_DLC0_C1RX0DLC, 0x0000
        .equiv  C1RX0DLC_DLC0_C1RX0DLC_WIDTH, 0x0001
        .equiv  C1RX0DLC_DLC0_C1RX0DLC_MASK, 0x0001
        .equiv  DLC0_C1RX0DLC, 0x0000

        .equiv  C1RX0DLC_DLC1_C1RX0DLC, 0x0001
        .equiv  C1RX0DLC_DLC1_C1RX0DLC_WIDTH, 0x0001
        .equiv  C1RX0DLC_DLC1_C1RX0DLC_MASK, 0x0002
        .equiv  DLC1_C1RX0DLC, 0x0001

        .equiv  C1RX0DLC_DLC2_C1RX0DLC, 0x0002
        .equiv  C1RX0DLC_DLC2_C1RX0DLC_WIDTH, 0x0001
        .equiv  C1RX0DLC_DLC2_C1RX0DLC_MASK, 0x0004
        .equiv  DLC2_C1RX0DLC, 0x0002

        .equiv  C1RX0DLC_DLC3_C1RX0DLC, 0x0003
        .equiv  C1RX0DLC_DLC3_C1RX0DLC_WIDTH, 0x0001
        .equiv  C1RX0DLC_DLC3_C1RX0DLC_MASK, 0x0008
        .equiv  DLC3_C1RX0DLC, 0x0003

;----- C1RX0B1 Bits -----------------------------------------------------
        .equiv  C1RX0B1_TXB0D00, 0x0000
        .equiv  C1RX0B1_TXB0D00_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D00_MASK, 0x0001

        .equiv  C1RX0B1_TXB0D01, 0x0001
        .equiv  C1RX0B1_TXB0D01_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D01_MASK, 0x0002

        .equiv  C1RX0B1_TXB0D02, 0x0002
        .equiv  C1RX0B1_TXB0D02_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D02_MASK, 0x0004

        .equiv  C1RX0B1_TXB0D03, 0x0003
        .equiv  C1RX0B1_TXB0D03_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D03_MASK, 0x0008

        .equiv  C1RX0B1_TXB0D04, 0x0004
        .equiv  C1RX0B1_TXB0D04_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D04_MASK, 0x0010

        .equiv  C1RX0B1_TXB0D05, 0x0005
        .equiv  C1RX0B1_TXB0D05_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D05_MASK, 0x0020

        .equiv  C1RX0B1_TXB0D06, 0x0006
        .equiv  C1RX0B1_TXB0D06_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D06_MASK, 0x0040

        .equiv  C1RX0B1_TXB0D07, 0x0007
        .equiv  C1RX0B1_TXB0D07_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D07_MASK, 0x0080

        .equiv  C1RX0B1_TXB0D10, 0x0008
        .equiv  C1RX0B1_TXB0D10_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D10_MASK, 0x0100

        .equiv  C1RX0B1_TXB0D11, 0x0009
        .equiv  C1RX0B1_TXB0D11_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D11_MASK, 0x0200

        .equiv  C1RX0B1_TXB0D12, 0x000A
        .equiv  C1RX0B1_TXB0D12_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D12_MASK, 0x0400

        .equiv  C1RX0B1_TXB0D13, 0x000B
        .equiv  C1RX0B1_TXB0D13_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D13_MASK, 0x0800

        .equiv  C1RX0B1_TXB0D14, 0x000C
        .equiv  C1RX0B1_TXB0D14_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D14_MASK, 0x1000

        .equiv  C1RX0B1_TXB0D15, 0x000D
        .equiv  C1RX0B1_TXB0D15_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D15_MASK, 0x2000

        .equiv  C1RX0B1_TXB0D16, 0x000E
        .equiv  C1RX0B1_TXB0D16_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D16_MASK, 0x4000

        .equiv  C1RX0B1_TXB0D17, 0x000F
        .equiv  C1RX0B1_TXB0D17_WIDTH, 0x0001
        .equiv  C1RX0B1_TXB0D17_MASK, 0x8000

;----- C1RX0B2 Bits -----------------------------------------------------
        .equiv  C1RX0B2_TXB0D20, 0x0000
        .equiv  C1RX0B2_TXB0D20_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D20_MASK, 0x0001

        .equiv  C1RX0B2_TXB0D21, 0x0001
        .equiv  C1RX0B2_TXB0D21_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D21_MASK, 0x0002

        .equiv  C1RX0B2_TXB0D22, 0x0002
        .equiv  C1RX0B2_TXB0D22_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D22_MASK, 0x0004

        .equiv  C1RX0B2_TXB0D23, 0x0003
        .equiv  C1RX0B2_TXB0D23_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D23_MASK, 0x0008

        .equiv  C1RX0B2_TXB0D24, 0x0004
        .equiv  C1RX0B2_TXB0D24_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D24_MASK, 0x0010

        .equiv  C1RX0B2_TXB0D25, 0x0005
        .equiv  C1RX0B2_TXB0D25_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D25_MASK, 0x0020

        .equiv  C1RX0B2_TXB0D26, 0x0006
        .equiv  C1RX0B2_TXB0D26_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D26_MASK, 0x0040

        .equiv  C1RX0B2_TXB0D27, 0x0007
        .equiv  C1RX0B2_TXB0D27_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D27_MASK, 0x0080

        .equiv  C1RX0B2_TXB0D30, 0x0008
        .equiv  C1RX0B2_TXB0D30_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D30_MASK, 0x0100

        .equiv  C1RX0B2_TXB0D31, 0x0009
        .equiv  C1RX0B2_TXB0D31_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D31_MASK, 0x0200

        .equiv  C1RX0B2_TXB0D32, 0x000A
        .equiv  C1RX0B2_TXB0D32_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D32_MASK, 0x0400

        .equiv  C1RX0B2_TXB0D33, 0x000B
        .equiv  C1RX0B2_TXB0D33_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D33_MASK, 0x0800

        .equiv  C1RX0B2_TXB0D34, 0x000C
        .equiv  C1RX0B2_TXB0D34_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D34_MASK, 0x1000

        .equiv  C1RX0B2_TXB0D35, 0x000D
        .equiv  C1RX0B2_TXB0D35_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D35_MASK, 0x2000

        .equiv  C1RX0B2_TXB0D36, 0x000E
        .equiv  C1RX0B2_TXB0D36_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D36_MASK, 0x4000

        .equiv  C1RX0B2_TXB0D37, 0x000F
        .equiv  C1RX0B2_TXB0D37_WIDTH, 0x0001
        .equiv  C1RX0B2_TXB0D37_MASK, 0x8000

;----- C1RX0B3 Bits -----------------------------------------------------
        .equiv  C1RX0B3_TXB0D40, 0x0000
        .equiv  C1RX0B3_TXB0D40_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D40_MASK, 0x0001

        .equiv  C1RX0B3_TXB0D41, 0x0001
        .equiv  C1RX0B3_TXB0D41_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D41_MASK, 0x0002

        .equiv  C1RX0B3_TXB0D42, 0x0002
        .equiv  C1RX0B3_TXB0D42_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D42_MASK, 0x0004

        .equiv  C1RX0B3_TXB0D43, 0x0003
        .equiv  C1RX0B3_TXB0D43_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D43_MASK, 0x0008

        .equiv  C1RX0B3_TXB0D44, 0x0004
        .equiv  C1RX0B3_TXB0D44_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D44_MASK, 0x0010

        .equiv  C1RX0B3_TXB0D45, 0x0005
        .equiv  C1RX0B3_TXB0D45_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D45_MASK, 0x0020

        .equiv  C1RX0B3_TXB0D46, 0x0006
        .equiv  C1RX0B3_TXB0D46_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D46_MASK, 0x0040

        .equiv  C1RX0B3_TXB0D47, 0x0007
        .equiv  C1RX0B3_TXB0D47_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D47_MASK, 0x0080

        .equiv  C1RX0B3_TXB0D50, 0x0008
        .equiv  C1RX0B3_TXB0D50_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D50_MASK, 0x0100

        .equiv  C1RX0B3_TXB0D51, 0x0009
        .equiv  C1RX0B3_TXB0D51_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D51_MASK, 0x0200

        .equiv  C1RX0B3_TXB0D52, 0x000A
        .equiv  C1RX0B3_TXB0D52_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D52_MASK, 0x0400

        .equiv  C1RX0B3_TXB0D53, 0x000B
        .equiv  C1RX0B3_TXB0D53_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D53_MASK, 0x0800

        .equiv  C1RX0B3_TXB0D54, 0x000C
        .equiv  C1RX0B3_TXB0D54_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D54_MASK, 0x1000

        .equiv  C1RX0B3_TXB0D55, 0x000D
        .equiv  C1RX0B3_TXB0D55_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D55_MASK, 0x2000

        .equiv  C1RX0B3_TXB0D56, 0x000E
        .equiv  C1RX0B3_TXB0D56_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D56_MASK, 0x4000

        .equiv  C1RX0B3_TXB0D57, 0x000F
        .equiv  C1RX0B3_TXB0D57_WIDTH, 0x0001
        .equiv  C1RX0B3_TXB0D57_MASK, 0x8000

;----- C1RX0B4 Bits -----------------------------------------------------
        .equiv  C1RX0B4_TXB0D60, 0x0000
        .equiv  C1RX0B4_TXB0D60_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D60_MASK, 0x0001

        .equiv  C1RX0B4_TXB0D61, 0x0001
        .equiv  C1RX0B4_TXB0D61_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D61_MASK, 0x0002

        .equiv  C1RX0B4_TXB0D62, 0x0002
        .equiv  C1RX0B4_TXB0D62_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D62_MASK, 0x0004

        .equiv  C1RX0B4_TXB0D63, 0x0003
        .equiv  C1RX0B4_TXB0D63_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D63_MASK, 0x0008

        .equiv  C1RX0B4_TXB0D64, 0x0004
        .equiv  C1RX0B4_TXB0D64_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D64_MASK, 0x0010

        .equiv  C1RX0B4_TXB0D65, 0x0005
        .equiv  C1RX0B4_TXB0D65_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D65_MASK, 0x0020

        .equiv  C1RX0B4_TXB0D66, 0x0006
        .equiv  C1RX0B4_TXB0D66_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D66_MASK, 0x0040

        .equiv  C1RX0B4_TXB0D67, 0x0007
        .equiv  C1RX0B4_TXB0D67_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D67_MASK, 0x0080

        .equiv  C1RX0B4_TXB0D70, 0x0008
        .equiv  C1RX0B4_TXB0D70_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D70_MASK, 0x0100

        .equiv  C1RX0B4_TXB0D71, 0x0009
        .equiv  C1RX0B4_TXB0D71_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D71_MASK, 0x0200

        .equiv  C1RX0B4_TXB0D72, 0x000A
        .equiv  C1RX0B4_TXB0D72_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D72_MASK, 0x0400

        .equiv  C1RX0B4_TXB0D73, 0x000B
        .equiv  C1RX0B4_TXB0D73_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D73_MASK, 0x0800

        .equiv  C1RX0B4_TXB0D74, 0x000C
        .equiv  C1RX0B4_TXB0D74_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D74_MASK, 0x1000

        .equiv  C1RX0B4_TXB0D75, 0x000D
        .equiv  C1RX0B4_TXB0D75_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D75_MASK, 0x2000

        .equiv  C1RX0B4_TXB0D76, 0x000E
        .equiv  C1RX0B4_TXB0D76_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D76_MASK, 0x4000

        .equiv  C1RX0B4_TXB0D77, 0x000F
        .equiv  C1RX0B4_TXB0D77_WIDTH, 0x0001
        .equiv  C1RX0B4_TXB0D77_MASK, 0x8000

;----- C1RX0CON Bits -----------------------------------------------------
        .equiv  C1RX0CON_FILHIT0, 0x0000
        .equiv  C1RX0CON_FILHIT0_WIDTH, 0x0001
        .equiv  C1RX0CON_FILHIT0_MASK, 0x0001

        .equiv  C1RX0CON_JTOFF, 0x0001
        .equiv  C1RX0CON_JTOFF_WIDTH, 0x0001
        .equiv  C1RX0CON_JTOFF_MASK, 0x0002
        .equiv  JTOFF, 0x0001

        .equiv  C1RX0CON_DBEN, 0x0002
        .equiv  C1RX0CON_DBEN_WIDTH, 0x0001
        .equiv  C1RX0CON_DBEN_MASK, 0x0004
        .equiv  DBEN, 0x0002

        .equiv  C1RX0CON_RXRTRRO, 0x0003
        .equiv  C1RX0CON_RXRTRRO_WIDTH, 0x0001
        .equiv  C1RX0CON_RXRTRRO_MASK, 0x0008

        .equiv  C1RX0CON_RXFUL, 0x0007
        .equiv  C1RX0CON_RXFUL_WIDTH, 0x0001
        .equiv  C1RX0CON_RXFUL_MASK, 0x0080

        .equiv  C1RX0CON_FILHIT, 0x0000
        .equiv  C1RX0CON_FILHIT_WIDTH, 0x0001
        .equiv  C1RX0CON_FILHIT_MASK, 0x0001
        .equiv  FILHIT, 0x0000

        .equiv  C1RX0CON_RXB0DBEN, 0x0002
        .equiv  C1RX0CON_RXB0DBEN_WIDTH, 0x0001
        .equiv  C1RX0CON_RXB0DBEN_MASK, 0x0004
        .equiv  RXB0DBEN, 0x0002

;----- C1CTRL Bits -----------------------------------------------------
        .equiv  C1CTRL_ICODE, 0x0001
        .equiv  C1CTRL_ICODE_WIDTH, 0x0003
        .equiv  C1CTRL_ICODE_MASK, 0x000E

        .equiv  C1CTRL_OPMODE, 0x0005
        .equiv  C1CTRL_OPMODE_WIDTH, 0x0003
        .equiv  C1CTRL_OPMODE_MASK, 0x00E0

        .equiv  C1CTRL_REQOP, 0x0008
        .equiv  C1CTRL_REQOP_WIDTH, 0x0003
        .equiv  C1CTRL_REQOP_MASK, 0x0700

        .equiv  C1CTRL_CANCKS, 0x000B
        .equiv  C1CTRL_CANCKS_WIDTH, 0x0001
        .equiv  C1CTRL_CANCKS_MASK, 0x0800
        .equiv  CANCKS, 0x000B

        .equiv  C1CTRL_ABAT, 0x000C
        .equiv  C1CTRL_ABAT_WIDTH, 0x0001
        .equiv  C1CTRL_ABAT_MASK, 0x1000
        .equiv  ABAT, 0x000C

        .equiv  C1CTRL_CANSIDL, 0x000D
        .equiv  C1CTRL_CANSIDL_WIDTH, 0x0001
        .equiv  C1CTRL_CANSIDL_MASK, 0x2000
        .equiv  CANSIDL, 0x000D

        .equiv  C1CTRL_CANFRZ, 0x000E
        .equiv  C1CTRL_CANFRZ_WIDTH, 0x0001
        .equiv  C1CTRL_CANFRZ_MASK, 0x4000
        .equiv  CANFRZ, 0x000E

        .equiv  C1CTRL_CANCAP, 0x000F
        .equiv  C1CTRL_CANCAP_WIDTH, 0x0001
        .equiv  C1CTRL_CANCAP_MASK, 0x8000
        .equiv  CANCAP, 0x000F

        .equiv  C1CTRL_ICODE0, 0x0001
        .equiv  C1CTRL_ICODE0_WIDTH, 0x0001
        .equiv  C1CTRL_ICODE0_MASK, 0x0002
        .equiv  ICODE0, 0x0001

        .equiv  C1CTRL_ICODE1, 0x0002
        .equiv  C1CTRL_ICODE1_WIDTH, 0x0001
        .equiv  C1CTRL_ICODE1_MASK, 0x0004
        .equiv  ICODE1, 0x0002

        .equiv  C1CTRL_ICODE2, 0x0003
        .equiv  C1CTRL_ICODE2_WIDTH, 0x0001
        .equiv  C1CTRL_ICODE2_MASK, 0x0008
        .equiv  ICODE2, 0x0003

        .equiv  C1CTRL_OPMODE0, 0x0005
        .equiv  C1CTRL_OPMODE0_WIDTH, 0x0001
        .equiv  C1CTRL_OPMODE0_MASK, 0x0020
        .equiv  OPMODE0, 0x0005

        .equiv  C1CTRL_OPMODE1, 0x0006
        .equiv  C1CTRL_OPMODE1_WIDTH, 0x0001
        .equiv  C1CTRL_OPMODE1_MASK, 0x0040
        .equiv  OPMODE1, 0x0006

        .equiv  C1CTRL_OPMODE2, 0x0007
        .equiv  C1CTRL_OPMODE2_WIDTH, 0x0001
        .equiv  C1CTRL_OPMODE2_MASK, 0x0080
        .equiv  OPMODE2, 0x0007

        .equiv  C1CTRL_REQOP0, 0x0008
        .equiv  C1CTRL_REQOP0_WIDTH, 0x0001
        .equiv  C1CTRL_REQOP0_MASK, 0x0100
        .equiv  REQOP0, 0x0008

        .equiv  C1CTRL_REQOP1, 0x0009
        .equiv  C1CTRL_REQOP1_WIDTH, 0x0001
        .equiv  C1CTRL_REQOP1_MASK, 0x0200
        .equiv  REQOP1, 0x0009

        .equiv  C1CTRL_REQOP2, 0x000A
        .equiv  C1CTRL_REQOP2_WIDTH, 0x0001
        .equiv  C1CTRL_REQOP2_MASK, 0x0400
        .equiv  REQOP2, 0x000A

        .equiv  C1CTRL_CSIDL, 0x000D
        .equiv  C1CTRL_CSIDL_WIDTH, 0x0001
        .equiv  C1CTRL_CSIDL_MASK, 0x2000
        .equiv  CSIDL, 0x000D

;----- C1CFG1 Bits -----------------------------------------------------
        .equiv  C1CFG1_BRP, 0x0000
        .equiv  C1CFG1_BRP_WIDTH, 0x0006
        .equiv  C1CFG1_BRP_MASK, 0x003F

        .equiv  C1CFG1_SJW, 0x0006
        .equiv  C1CFG1_SJW_WIDTH, 0x0002
        .equiv  C1CFG1_SJW_MASK, 0x00C0

        .equiv  C1CFG1_BRP0, 0x0000
        .equiv  C1CFG1_BRP0_WIDTH, 0x0001
        .equiv  C1CFG1_BRP0_MASK, 0x0001
        .equiv  BRP0, 0x0000

        .equiv  C1CFG1_BRP1, 0x0001
        .equiv  C1CFG1_BRP1_WIDTH, 0x0001
        .equiv  C1CFG1_BRP1_MASK, 0x0002
        .equiv  BRP1, 0x0001

        .equiv  C1CFG1_BRP2, 0x0002
        .equiv  C1CFG1_BRP2_WIDTH, 0x0001
        .equiv  C1CFG1_BRP2_MASK, 0x0004
        .equiv  BRP2, 0x0002

        .equiv  C1CFG1_BRP3, 0x0003
        .equiv  C1CFG1_BRP3_WIDTH, 0x0001
        .equiv  C1CFG1_BRP3_MASK, 0x0008
        .equiv  BRP3, 0x0003

        .equiv  C1CFG1_BRP4, 0x0004
        .equiv  C1CFG1_BRP4_WIDTH, 0x0001
        .equiv  C1CFG1_BRP4_MASK, 0x0010
        .equiv  BRP4, 0x0004

        .equiv  C1CFG1_BRP5, 0x0005
        .equiv  C1CFG1_BRP5_WIDTH, 0x0001
        .equiv  C1CFG1_BRP5_MASK, 0x0020
        .equiv  BRP5, 0x0005

        .equiv  C1CFG1_SJW0, 0x0006
        .equiv  C1CFG1_SJW0_WIDTH, 0x0001
        .equiv  C1CFG1_SJW0_MASK, 0x0040
        .equiv  SJW0, 0x0006

        .equiv  C1CFG1_SJW1, 0x0007
        .equiv  C1CFG1_SJW1_WIDTH, 0x0001
        .equiv  C1CFG1_SJW1_MASK, 0x0080
        .equiv  SJW1, 0x0007

;----- C1CFG2 Bits -----------------------------------------------------
        .equiv  C1CFG2_PRSEG, 0x0000
        .equiv  C1CFG2_PRSEG_WIDTH, 0x0003
        .equiv  C1CFG2_PRSEG_MASK, 0x0007

        .equiv  C1CFG2_SEG1PH, 0x0003
        .equiv  C1CFG2_SEG1PH_WIDTH, 0x0003
        .equiv  C1CFG2_SEG1PH_MASK, 0x0038

        .equiv  C1CFG2_SAM, 0x0006
        .equiv  C1CFG2_SAM_WIDTH, 0x0001
        .equiv  C1CFG2_SAM_MASK, 0x0040
        .equiv  SAM, 0x0006

        .equiv  C1CFG2_SEG2PHTS, 0x0007
        .equiv  C1CFG2_SEG2PHTS_WIDTH, 0x0001
        .equiv  C1CFG2_SEG2PHTS_MASK, 0x0080
        .equiv  SEG2PHTS, 0x0007

        .equiv  C1CFG2_SEG2PH, 0x0008
        .equiv  C1CFG2_SEG2PH_WIDTH, 0x0003
        .equiv  C1CFG2_SEG2PH_MASK, 0x0700

        .equiv  C1CFG2_WAKFIL, 0x000E
        .equiv  C1CFG2_WAKFIL_WIDTH, 0x0001
        .equiv  C1CFG2_WAKFIL_MASK, 0x4000
        .equiv  WAKFIL, 0x000E

        .equiv  C1CFG2_PRSEG0, 0x0000
        .equiv  C1CFG2_PRSEG0_WIDTH, 0x0001
        .equiv  C1CFG2_PRSEG0_MASK, 0x0001
        .equiv  PRSEG0, 0x0000

        .equiv  C1CFG2_PRSEG1, 0x0001
        .equiv  C1CFG2_PRSEG1_WIDTH, 0x0001
        .equiv  C1CFG2_PRSEG1_MASK, 0x0002
        .equiv  PRSEG1, 0x0001

        .equiv  C1CFG2_PRSEG2, 0x0002
        .equiv  C1CFG2_PRSEG2_WIDTH, 0x0001
        .equiv  C1CFG2_PRSEG2_MASK, 0x0004
        .equiv  PRSEG2, 0x0002

        .equiv  C1CFG2_SEG1PH0, 0x0003
        .equiv  C1CFG2_SEG1PH0_WIDTH, 0x0001
        .equiv  C1CFG2_SEG1PH0_MASK, 0x0008
        .equiv  SEG1PH0, 0x0003

        .equiv  C1CFG2_SEG1PH1, 0x0004
        .equiv  C1CFG2_SEG1PH1_WIDTH, 0x0001
        .equiv  C1CFG2_SEG1PH1_MASK, 0x0010
        .equiv  SEG1PH1, 0x0004

        .equiv  C1CFG2_SEG1PH2, 0x0005
        .equiv  C1CFG2_SEG1PH2_WIDTH, 0x0001
        .equiv  C1CFG2_SEG1PH2_MASK, 0x0020
        .equiv  SEG1PH2, 0x0005

        .equiv  C1CFG2_SEG2PH0, 0x0008
        .equiv  C1CFG2_SEG2PH0_WIDTH, 0x0001
        .equiv  C1CFG2_SEG2PH0_MASK, 0x0100
        .equiv  SEG2PH0, 0x0008

        .equiv  C1CFG2_SEG2PH1, 0x0009
        .equiv  C1CFG2_SEG2PH1_WIDTH, 0x0001
        .equiv  C1CFG2_SEG2PH1_MASK, 0x0200
        .equiv  SEG2PH1, 0x0009

        .equiv  C1CFG2_SEG2PH2, 0x000A
        .equiv  C1CFG2_SEG2PH2_WIDTH, 0x0001
        .equiv  C1CFG2_SEG2PH2_MASK, 0x0400
        .equiv  SEG2PH2, 0x000A

;----- C1INTF Bits -----------------------------------------------------
        .equiv  C1INTF_RXB0IF, 0x0000
        .equiv  C1INTF_RXB0IF_WIDTH, 0x0001
        .equiv  C1INTF_RXB0IF_MASK, 0x0001
        .equiv  RXB0IF, 0x0000

        .equiv  C1INTF_RXB1IF, 0x0001
        .equiv  C1INTF_RXB1IF_WIDTH, 0x0001
        .equiv  C1INTF_RXB1IF_MASK, 0x0002
        .equiv  RXB1IF, 0x0001

        .equiv  C1INTF_TXB0IF, 0x0002
        .equiv  C1INTF_TXB0IF_WIDTH, 0x0001
        .equiv  C1INTF_TXB0IF_MASK, 0x0004
        .equiv  TXB0IF, 0x0002

        .equiv  C1INTF_TXB1IF, 0x0003
        .equiv  C1INTF_TXB1IF_WIDTH, 0x0001
        .equiv  C1INTF_TXB1IF_MASK, 0x0008
        .equiv  TXB1IF, 0x0003

        .equiv  C1INTF_TXB2IF, 0x0004
        .equiv  C1INTF_TXB2IF_WIDTH, 0x0001
        .equiv  C1INTF_TXB2IF_MASK, 0x0010
        .equiv  TXB2IF, 0x0004

        .equiv  C1INTF_ERRIF, 0x0005
        .equiv  C1INTF_ERRIF_WIDTH, 0x0001
        .equiv  C1INTF_ERRIF_MASK, 0x0020
        .equiv  ERRIF, 0x0005

        .equiv  C1INTF_WAKIF, 0x0006
        .equiv  C1INTF_WAKIF_WIDTH, 0x0001
        .equiv  C1INTF_WAKIF_MASK, 0x0040
        .equiv  WAKIF, 0x0006

        .equiv  C1INTF_IRXIF, 0x0007
        .equiv  C1INTF_IRXIF_WIDTH, 0x0001
        .equiv  C1INTF_IRXIF_MASK, 0x0080
        .equiv  IRXIF, 0x0007

        .equiv  C1INTF_EWARN, 0x0008
        .equiv  C1INTF_EWARN_WIDTH, 0x0001
        .equiv  C1INTF_EWARN_MASK, 0x0100
        .equiv  EWARN, 0x0008

        .equiv  C1INTF_RXWARN, 0x0009
        .equiv  C1INTF_RXWARN_WIDTH, 0x0001
        .equiv  C1INTF_RXWARN_MASK, 0x0200
        .equiv  RXWARN, 0x0009

        .equiv  C1INTF_TXWARN, 0x000A
        .equiv  C1INTF_TXWARN_WIDTH, 0x0001
        .equiv  C1INTF_TXWARN_MASK, 0x0400
        .equiv  TXWARN, 0x000A

        .equiv  C1INTF_RXBP, 0x000B
        .equiv  C1INTF_RXBP_WIDTH, 0x0001
        .equiv  C1INTF_RXBP_MASK, 0x0800
        .equiv  RXBP, 0x000B

        .equiv  C1INTF_TXBP, 0x000C
        .equiv  C1INTF_TXBP_WIDTH, 0x0001
        .equiv  C1INTF_TXBP_MASK, 0x1000
        .equiv  TXBP, 0x000C

        .equiv  C1INTF_TXBO, 0x000D
        .equiv  C1INTF_TXBO_WIDTH, 0x0001
        .equiv  C1INTF_TXBO_MASK, 0x2000
        .equiv  TXBO, 0x000D

        .equiv  C1INTF_RXB1OVFL, 0x000E
        .equiv  C1INTF_RXB1OVFL_WIDTH, 0x0001
        .equiv  C1INTF_RXB1OVFL_MASK, 0x4000
        .equiv  RXB1OVFL, 0x000E

        .equiv  C1INTF_RXB0OVFL, 0x000F
        .equiv  C1INTF_RXB0OVFL_WIDTH, 0x0001
        .equiv  C1INTF_RXB0OVFL_MASK, 0x8000
        .equiv  RXB0OVFL, 0x000F

        .equiv  C1INTF_RX0IF, 0x0000
        .equiv  C1INTF_RX0IF_WIDTH, 0x0001
        .equiv  C1INTF_RX0IF_MASK, 0x0001
        .equiv  RX0IF, 0x0000

        .equiv  C1INTF_RX1IF, 0x0001
        .equiv  C1INTF_RX1IF_WIDTH, 0x0001
        .equiv  C1INTF_RX1IF_MASK, 0x0002
        .equiv  RX1IF, 0x0001

        .equiv  C1INTF_TX0IF, 0x0002
        .equiv  C1INTF_TX0IF_WIDTH, 0x0001
        .equiv  C1INTF_TX0IF_MASK, 0x0004
        .equiv  TX0IF, 0x0002

        .equiv  C1INTF_TX1IF, 0x0003
        .equiv  C1INTF_TX1IF_WIDTH, 0x0001
        .equiv  C1INTF_TX1IF_MASK, 0x0008
        .equiv  TX1IF, 0x0003

        .equiv  C1INTF_TX2IF, 0x0004
        .equiv  C1INTF_TX2IF_WIDTH, 0x0001
        .equiv  C1INTF_TX2IF_MASK, 0x0010
        .equiv  TX2IF, 0x0004

        .equiv  C1INTF_IVRIF, 0x0007
        .equiv  C1INTF_IVRIF_WIDTH, 0x0001
        .equiv  C1INTF_IVRIF_MASK, 0x0080
        .equiv  IVRIF, 0x0007

        .equiv  C1INTF_RXWAR, 0x0009
        .equiv  C1INTF_RXWAR_WIDTH, 0x0001
        .equiv  C1INTF_RXWAR_MASK, 0x0200
        .equiv  RXWAR, 0x0009

        .equiv  C1INTF_TXWAR, 0x000A
        .equiv  C1INTF_TXWAR_WIDTH, 0x0001
        .equiv  C1INTF_TXWAR_MASK, 0x0400
        .equiv  TXWAR, 0x000A

        .equiv  C1INTF_RXEP, 0x000B
        .equiv  C1INTF_RXEP_WIDTH, 0x0001
        .equiv  C1INTF_RXEP_MASK, 0x0800
        .equiv  RXEP, 0x000B

        .equiv  C1INTF_TXEP, 0x000C
        .equiv  C1INTF_TXEP_WIDTH, 0x0001
        .equiv  C1INTF_TXEP_MASK, 0x1000
        .equiv  TXEP, 0x000C

        .equiv  C1INTF_RX1OVR, 0x000E
        .equiv  C1INTF_RX1OVR_WIDTH, 0x0001
        .equiv  C1INTF_RX1OVR_MASK, 0x4000
        .equiv  RX1OVR, 0x000E

        .equiv  C1INTF_RX0OVR, 0x000F
        .equiv  C1INTF_RX0OVR_WIDTH, 0x0001
        .equiv  C1INTF_RX0OVR_MASK, 0x8000
        .equiv  RX0OVR, 0x000F

;----- C1INTE Bits -----------------------------------------------------
        .equiv  C1INTE_RXB0IE, 0x0000
        .equiv  C1INTE_RXB0IE_WIDTH, 0x0001
        .equiv  C1INTE_RXB0IE_MASK, 0x0001
        .equiv  RXB0IE, 0x0000

        .equiv  C1INTE_RXB1IE, 0x0001
        .equiv  C1INTE_RXB1IE_WIDTH, 0x0001
        .equiv  C1INTE_RXB1IE_MASK, 0x0002
        .equiv  RXB1IE, 0x0001

        .equiv  C1INTE_TXB0IE, 0x0002
        .equiv  C1INTE_TXB0IE_WIDTH, 0x0001
        .equiv  C1INTE_TXB0IE_MASK, 0x0004
        .equiv  TXB0IE, 0x0002

        .equiv  C1INTE_TXB1IE, 0x0003
        .equiv  C1INTE_TXB1IE_WIDTH, 0x0001
        .equiv  C1INTE_TXB1IE_MASK, 0x0008
        .equiv  TXB1IE, 0x0003

        .equiv  C1INTE_TXB2IE, 0x0004
        .equiv  C1INTE_TXB2IE_WIDTH, 0x0001
        .equiv  C1INTE_TXB2IE_MASK, 0x0010
        .equiv  TXB2IE, 0x0004

        .equiv  C1INTE_ERRIE, 0x0005
        .equiv  C1INTE_ERRIE_WIDTH, 0x0001
        .equiv  C1INTE_ERRIE_MASK, 0x0020
        .equiv  ERRIE, 0x0005

        .equiv  C1INTE_WAKIE, 0x0006
        .equiv  C1INTE_WAKIE_WIDTH, 0x0001
        .equiv  C1INTE_WAKIE_MASK, 0x0040
        .equiv  WAKIE, 0x0006

        .equiv  C1INTE_IRXIE, 0x0007
        .equiv  C1INTE_IRXIE_WIDTH, 0x0001
        .equiv  C1INTE_IRXIE_MASK, 0x0080
        .equiv  IRXIE, 0x0007

        .equiv  C1INTE_RX0IE, 0x0000
        .equiv  C1INTE_RX0IE_WIDTH, 0x0001
        .equiv  C1INTE_RX0IE_MASK, 0x0001
        .equiv  RX0IE, 0x0000

        .equiv  C1INTE_RX1IE, 0x0001
        .equiv  C1INTE_RX1IE_WIDTH, 0x0001
        .equiv  C1INTE_RX1IE_MASK, 0x0002
        .equiv  RX1IE, 0x0001

        .equiv  C1INTE_TX0IE, 0x0002
        .equiv  C1INTE_TX0IE_WIDTH, 0x0001
        .equiv  C1INTE_TX0IE_MASK, 0x0004
        .equiv  TX0IE, 0x0002

        .equiv  C1INTE_TX1IE, 0x0003
        .equiv  C1INTE_TX1IE_WIDTH, 0x0001
        .equiv  C1INTE_TX1IE_MASK, 0x0008
        .equiv  TX1IE, 0x0003

        .equiv  C1INTE_TX2IE, 0x0004
        .equiv  C1INTE_TX2IE_WIDTH, 0x0001
        .equiv  C1INTE_TX2IE_MASK, 0x0010
        .equiv  TX2IE, 0x0004

        .equiv  C1INTE_IVRIE, 0x0007
        .equiv  C1INTE_IVRIE_WIDTH, 0x0001
        .equiv  C1INTE_IVRIE_MASK, 0x0080
        .equiv  IVRIE, 0x0007

;----- C1EC Bits -----------------------------------------------------
        .equiv  C1EC_REC0, 0x0000
        .equiv  C1EC_REC0_WIDTH, 0x0001
        .equiv  C1EC_REC0_MASK, 0x0001
        .equiv  REC0, 0x0000

        .equiv  C1EC_REC1, 0x0001
        .equiv  C1EC_REC1_WIDTH, 0x0001
        .equiv  C1EC_REC1_MASK, 0x0002
        .equiv  REC1, 0x0001

        .equiv  C1EC_REC2, 0x0002
        .equiv  C1EC_REC2_WIDTH, 0x0001
        .equiv  C1EC_REC2_MASK, 0x0004
        .equiv  REC2, 0x0002

        .equiv  C1EC_REC3, 0x0003
        .equiv  C1EC_REC3_WIDTH, 0x0001
        .equiv  C1EC_REC3_MASK, 0x0008
        .equiv  REC3, 0x0003

        .equiv  C1EC_REC4, 0x0004
        .equiv  C1EC_REC4_WIDTH, 0x0001
        .equiv  C1EC_REC4_MASK, 0x0010
        .equiv  REC4, 0x0004

        .equiv  C1EC_REC5, 0x0005
        .equiv  C1EC_REC5_WIDTH, 0x0001
        .equiv  C1EC_REC5_MASK, 0x0020
        .equiv  REC5, 0x0005

        .equiv  C1EC_REC6, 0x0006
        .equiv  C1EC_REC6_WIDTH, 0x0001
        .equiv  C1EC_REC6_MASK, 0x0040
        .equiv  REC6, 0x0006

        .equiv  C1EC_REC7, 0x0007
        .equiv  C1EC_REC7_WIDTH, 0x0001
        .equiv  C1EC_REC7_MASK, 0x0080
        .equiv  REC7, 0x0007

        .equiv  C1EC_TEC0, 0x0008
        .equiv  C1EC_TEC0_WIDTH, 0x0001
        .equiv  C1EC_TEC0_MASK, 0x0100
        .equiv  TEC0, 0x0008

        .equiv  C1EC_TEC1, 0x0009
        .equiv  C1EC_TEC1_WIDTH, 0x0001
        .equiv  C1EC_TEC1_MASK, 0x0200
        .equiv  TEC1, 0x0009

        .equiv  C1EC_TEC2, 0x000A
        .equiv  C1EC_TEC2_WIDTH, 0x0001
        .equiv  C1EC_TEC2_MASK, 0x0400
        .equiv  TEC2, 0x000A

        .equiv  C1EC_TEC3, 0x000B
        .equiv  C1EC_TEC3_WIDTH, 0x0001
        .equiv  C1EC_TEC3_MASK, 0x0800
        .equiv  TEC3, 0x000B

        .equiv  C1EC_TEC4, 0x000C
        .equiv  C1EC_TEC4_WIDTH, 0x0001
        .equiv  C1EC_TEC4_MASK, 0x1000
        .equiv  TEC4, 0x000C

        .equiv  C1EC_TEC5, 0x000D
        .equiv  C1EC_TEC5_WIDTH, 0x0001
        .equiv  C1EC_TEC5_MASK, 0x2000
        .equiv  TEC5, 0x000D

        .equiv  C1EC_TEC6, 0x000E
        .equiv  C1EC_TEC6_WIDTH, 0x0001
        .equiv  C1EC_TEC6_MASK, 0x4000
        .equiv  TEC6, 0x000E

        .equiv  C1EC_TEC7, 0x000F
        .equiv  C1EC_TEC7_WIDTH, 0x0001
        .equiv  C1EC_TEC7_MASK, 0x8000
        .equiv  TEC7, 0x000F

;----- RCON Bits -----------------------------------------------------
        .equiv  RCON_POR, 0x0000
        .equiv  RCON_POR_WIDTH, 0x0001
        .equiv  RCON_POR_MASK, 0x0001
        .equiv  POR, 0x0000

        .equiv  RCON_BOR, 0x0001
        .equiv  RCON_BOR_WIDTH, 0x0001
        .equiv  RCON_BOR_MASK, 0x0002
        .equiv  BOR, 0x0001

        .equiv  RCON_IDLE, 0x0002
        .equiv  RCON_IDLE_WIDTH, 0x0001
        .equiv  RCON_IDLE_MASK, 0x0004
        .equiv  IDLE, 0x0002

        .equiv  RCON_SLEEP, 0x0003
        .equiv  RCON_SLEEP_WIDTH, 0x0001
        .equiv  RCON_SLEEP_MASK, 0x0008
        .equiv  SLEEP, 0x0003

        .equiv  RCON_WDTO, 0x0004
        .equiv  RCON_WDTO_WIDTH, 0x0001
        .equiv  RCON_WDTO_MASK, 0x0010
        .equiv  WDTO, 0x0004

        .equiv  RCON_SWDTEN, 0x0005
        .equiv  RCON_SWDTEN_WIDTH, 0x0001
        .equiv  RCON_SWDTEN_MASK, 0x0020
        .equiv  SWDTEN, 0x0005

        .equiv  RCON_SWR, 0x0006
        .equiv  RCON_SWR_WIDTH, 0x0001
        .equiv  RCON_SWR_MASK, 0x0040
        .equiv  SWR, 0x0006

        .equiv  RCON_EXTR, 0x0007
        .equiv  RCON_EXTR_WIDTH, 0x0001
        .equiv  RCON_EXTR_MASK, 0x0080
        .equiv  EXTR, 0x0007

        .equiv  RCON_LVDL, 0x0008
        .equiv  RCON_LVDL_WIDTH, 0x0004
        .equiv  RCON_LVDL_MASK, 0x0F00

        .equiv  RCON_LVDEN, 0x000C
        .equiv  RCON_LVDEN_WIDTH, 0x0001
        .equiv  RCON_LVDEN_MASK, 0x1000
        .equiv  LVDEN, 0x000C

        .equiv  RCON_BGST, 0x000D
        .equiv  RCON_BGST_WIDTH, 0x0001
        .equiv  RCON_BGST_MASK, 0x2000
        .equiv  BGST, 0x000D

        .equiv  RCON_IOPUWR, 0x000E
        .equiv  RCON_IOPUWR_WIDTH, 0x0001
        .equiv  RCON_IOPUWR_MASK, 0x4000
        .equiv  IOPUWR, 0x000E

        .equiv  RCON_TRAPR, 0x000F
        .equiv  RCON_TRAPR_WIDTH, 0x0001
        .equiv  RCON_TRAPR_MASK, 0x8000
        .equiv  TRAPR, 0x000F

        .equiv  RCON_LVDL0, 0x0008
        .equiv  RCON_LVDL0_WIDTH, 0x0001
        .equiv  RCON_LVDL0_MASK, 0x0100
        .equiv  LVDL0, 0x0008

        .equiv  RCON_LVDL1, 0x0009
        .equiv  RCON_LVDL1_WIDTH, 0x0001
        .equiv  RCON_LVDL1_MASK, 0x0200
        .equiv  LVDL1, 0x0009

        .equiv  RCON_LVDL2, 0x000A
        .equiv  RCON_LVDL2_WIDTH, 0x0001
        .equiv  RCON_LVDL2_MASK, 0x0400
        .equiv  LVDL2, 0x000A

        .equiv  RCON_LVDL3, 0x000B
        .equiv  RCON_LVDL3_WIDTH, 0x0001
        .equiv  RCON_LVDL3_MASK, 0x0800
        .equiv  LVDL3, 0x000B

;----- OSCCON Bits -----------------------------------------------------
        .equiv  OSCCON_OSWEN, 0x0000
        .equiv  OSCCON_OSWEN_WIDTH, 0x0001
        .equiv  OSCCON_OSWEN_MASK, 0x0001
        .equiv  OSWEN, 0x0000

        .equiv  OSCCON_LPOSCEN, 0x0001
        .equiv  OSCCON_LPOSCEN_WIDTH, 0x0001
        .equiv  OSCCON_LPOSCEN_MASK, 0x0002
        .equiv  LPOSCEN, 0x0001

        .equiv  OSCCON_CF, 0x0003
        .equiv  OSCCON_CF_WIDTH, 0x0001
        .equiv  OSCCON_CF_MASK, 0x0008
        .equiv  CF, 0x0003

        .equiv  OSCCON_LOCK, 0x0005
        .equiv  OSCCON_LOCK_WIDTH, 0x0001
        .equiv  OSCCON_LOCK_MASK, 0x0020
        .equiv  LOCK, 0x0005

        .equiv  OSCCON_POST, 0x0006
        .equiv  OSCCON_POST_WIDTH, 0x0002
        .equiv  OSCCON_POST_MASK, 0x00C0

        .equiv  OSCCON_NOSC, 0x0008
        .equiv  OSCCON_NOSC_WIDTH, 0x0003
        .equiv  OSCCON_NOSC_MASK, 0x0700

        .equiv  OSCCON_COSC, 0x000C
        .equiv  OSCCON_COSC_WIDTH, 0x0003
        .equiv  OSCCON_COSC_MASK, 0x7000

        .equiv  OSCCON_POST0, 0x0006
        .equiv  OSCCON_POST0_WIDTH, 0x0001
        .equiv  OSCCON_POST0_MASK, 0x0040
        .equiv  POST0, 0x0006

        .equiv  OSCCON_POST1, 0x0007
        .equiv  OSCCON_POST1_WIDTH, 0x0001
        .equiv  OSCCON_POST1_MASK, 0x0080
        .equiv  POST1, 0x0007

        .equiv  OSCCON_NOSC0, 0x0008
        .equiv  OSCCON_NOSC0_WIDTH, 0x0001
        .equiv  OSCCON_NOSC0_MASK, 0x0100
        .equiv  NOSC0, 0x0008

        .equiv  OSCCON_NOSC1, 0x0009
        .equiv  OSCCON_NOSC1_WIDTH, 0x0001
        .equiv  OSCCON_NOSC1_MASK, 0x0200
        .equiv  NOSC1, 0x0009

        .equiv  OSCCON_NOSC2, 0x000A
        .equiv  OSCCON_NOSC2_WIDTH, 0x0001
        .equiv  OSCCON_NOSC2_MASK, 0x0400
        .equiv  NOSC2, 0x000A

        .equiv  OSCCON_COSC0, 0x000C
        .equiv  OSCCON_COSC0_WIDTH, 0x0001
        .equiv  OSCCON_COSC0_MASK, 0x1000
        .equiv  COSC0, 0x000C

        .equiv  OSCCON_COSC1, 0x000D
        .equiv  OSCCON_COSC1_WIDTH, 0x0001
        .equiv  OSCCON_COSC1_MASK, 0x2000
        .equiv  COSC1, 0x000D

        .equiv  OSCCON_COSC2, 0x000E
        .equiv  OSCCON_COSC2_WIDTH, 0x0001
        .equiv  OSCCON_COSC2_MASK, 0x4000
        .equiv  COSC2, 0x000E

;----- OSCTUN Bits -----------------------------------------------------
        .equiv  OSCTUN_TUN0, 0x0000
        .equiv  OSCTUN_TUN0_WIDTH, 0x0001
        .equiv  OSCTUN_TUN0_MASK, 0x0001
        .equiv  TUN0, 0x0000

        .equiv  OSCTUN_TUN1, 0x0001
        .equiv  OSCTUN_TUN1_WIDTH, 0x0001
        .equiv  OSCTUN_TUN1_MASK, 0x0002
        .equiv  TUN1, 0x0001

        .equiv  OSCTUN_TUN2, 0x0002
        .equiv  OSCTUN_TUN2_WIDTH, 0x0001
        .equiv  OSCTUN_TUN2_MASK, 0x0004
        .equiv  TUN2, 0x0002

        .equiv  OSCTUN_TUN3, 0x0003
        .equiv  OSCTUN_TUN3_WIDTH, 0x0001
        .equiv  OSCTUN_TUN3_MASK, 0x0008
        .equiv  TUN3, 0x0003

;----- NVMCON Bits -----------------------------------------------------
        .equiv  NVMCON_PROGOP, 0x0000
        .equiv  NVMCON_PROGOP_WIDTH, 0x0007
        .equiv  NVMCON_PROGOP_MASK, 0x007F

        .equiv  NVMCON_TWRI, 0x0008
        .equiv  NVMCON_TWRI_WIDTH, 0x0001
        .equiv  NVMCON_TWRI_MASK, 0x0100
        .equiv  TWRI, 0x0008

        .equiv  NVMCON_WRERR, 0x000D
        .equiv  NVMCON_WRERR_WIDTH, 0x0001
        .equiv  NVMCON_WRERR_MASK, 0x2000
        .equiv  WRERR, 0x000D

        .equiv  NVMCON_WREN, 0x000E
        .equiv  NVMCON_WREN_WIDTH, 0x0001
        .equiv  NVMCON_WREN_MASK, 0x4000
        .equiv  WREN, 0x000E

        .equiv  NVMCON_WR, 0x000F
        .equiv  NVMCON_WR_WIDTH, 0x0001
        .equiv  NVMCON_WR_MASK, 0x8000
        .equiv  WR, 0x000F

        .equiv  NVMCON_PROGOP0, 0x0000
        .equiv  NVMCON_PROGOP0_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP0_MASK, 0x0001
        .equiv  PROGOP0, 0x0000

        .equiv  NVMCON_PROGOP1, 0x0001
        .equiv  NVMCON_PROGOP1_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP1_MASK, 0x0002
        .equiv  PROGOP1, 0x0001

        .equiv  NVMCON_PROGOP2, 0x0002
        .equiv  NVMCON_PROGOP2_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP2_MASK, 0x0004
        .equiv  PROGOP2, 0x0002

        .equiv  NVMCON_PROGOP3, 0x0003
        .equiv  NVMCON_PROGOP3_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP3_MASK, 0x0008
        .equiv  PROGOP3, 0x0003

        .equiv  NVMCON_PROGOP4, 0x0004
        .equiv  NVMCON_PROGOP4_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP4_MASK, 0x0010
        .equiv  PROGOP4, 0x0004

        .equiv  NVMCON_PROGOP5, 0x0005
        .equiv  NVMCON_PROGOP5_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP5_MASK, 0x0020
        .equiv  PROGOP5, 0x0005

        .equiv  NVMCON_PROGOP6, 0x0006
        .equiv  NVMCON_PROGOP6_WIDTH, 0x0001
        .equiv  NVMCON_PROGOP6_MASK, 0x0040
        .equiv  PROGOP6, 0x0006

;----- NVMADRU Bits -----------------------------------------------------
        .equiv  NVMADRU_NVMADR, 0x0000
        .equiv  NVMADRU_NVMADR_WIDTH, 0x0008
        .equiv  NVMADRU_NVMADR_MASK, 0x00FF

;----- PMD1 Bits -----------------------------------------------------
        .equiv  PMD1_ADCMD, 0x0000
        .equiv  PMD1_ADCMD_WIDTH, 0x0001
        .equiv  PMD1_ADCMD_MASK, 0x0001
        .equiv  ADCMD, 0x0000

        .equiv  PMD1_C1MD, 0x0001
        .equiv  PMD1_C1MD_WIDTH, 0x0001
        .equiv  PMD1_C1MD_MASK, 0x0002
        .equiv  C1MD, 0x0001

        .equiv  PMD1_SPI1MD, 0x0003
        .equiv  PMD1_SPI1MD_WIDTH, 0x0001
        .equiv  PMD1_SPI1MD_MASK, 0x0008
        .equiv  SPI1MD, 0x0003

        .equiv  PMD1_U1MD, 0x0005
        .equiv  PMD1_U1MD_WIDTH, 0x0001
        .equiv  PMD1_U1MD_MASK, 0x0020
        .equiv  U1MD, 0x0005

        .equiv  PMD1_U2MD, 0x0006
        .equiv  PMD1_U2MD_WIDTH, 0x0001
        .equiv  PMD1_U2MD_MASK, 0x0040
        .equiv  U2MD, 0x0006

        .equiv  PMD1_I2CMD, 0x0007
        .equiv  PMD1_I2CMD_WIDTH, 0x0001
        .equiv  PMD1_I2CMD_MASK, 0x0080
        .equiv  I2CMD, 0x0007

        .equiv  PMD1_DCIMD, 0x0008
        .equiv  PMD1_DCIMD_WIDTH, 0x0001
        .equiv  PMD1_DCIMD_MASK, 0x0100
        .equiv  DCIMD, 0x0008

        .equiv  PMD1_T1MD, 0x000B
        .equiv  PMD1_T1MD_WIDTH, 0x0001
        .equiv  PMD1_T1MD_MASK, 0x0800
        .equiv  T1MD, 0x000B

        .equiv  PMD1_T2MD, 0x000C
        .equiv  PMD1_T2MD_WIDTH, 0x0001
        .equiv  PMD1_T2MD_MASK, 0x1000
        .equiv  T2MD, 0x000C

        .equiv  PMD1_T3MD, 0x000D
        .equiv  PMD1_T3MD_WIDTH, 0x0001
        .equiv  PMD1_T3MD_MASK, 0x2000
        .equiv  T3MD, 0x000D

        .equiv  PMD1_T4MD, 0x000E
        .equiv  PMD1_T4MD_WIDTH, 0x0001
        .equiv  PMD1_T4MD_MASK, 0x4000
        .equiv  T4MD, 0x000E

        .equiv  PMD1_T5MD, 0x000F
        .equiv  PMD1_T5MD_WIDTH, 0x0001
        .equiv  PMD1_T5MD_MASK, 0x8000
        .equiv  T5MD, 0x000F

;----- PMD2 Bits -----------------------------------------------------
        .equiv  PMD2_OC1MD, 0x0000
        .equiv  PMD2_OC1MD_WIDTH, 0x0001
        .equiv  PMD2_OC1MD_MASK, 0x0001
        .equiv  OC1MD, 0x0000

        .equiv  PMD2_OC2MD, 0x0001
        .equiv  PMD2_OC2MD_WIDTH, 0x0001
        .equiv  PMD2_OC2MD_MASK, 0x0002
        .equiv  OC2MD, 0x0001

        .equiv  PMD2_OC3MD, 0x0002
        .equiv  PMD2_OC3MD_WIDTH, 0x0001
        .equiv  PMD2_OC3MD_MASK, 0x0004
        .equiv  OC3MD, 0x0002

        .equiv  PMD2_OC4MD, 0x0003
        .equiv  PMD2_OC4MD_WIDTH, 0x0001
        .equiv  PMD2_OC4MD_MASK, 0x0008
        .equiv  OC4MD, 0x0003

        .equiv  PMD2_IC1MD, 0x0008
        .equiv  PMD2_IC1MD_WIDTH, 0x0001
        .equiv  PMD2_IC1MD_MASK, 0x0100
        .equiv  IC1MD, 0x0008

        .equiv  PMD2_IC2MD, 0x0009
        .equiv  PMD2_IC2MD_WIDTH, 0x0001
        .equiv  PMD2_IC2MD_MASK, 0x0200
        .equiv  IC2MD, 0x0009

        .equiv  PMD2_IC7MD, 0x000E
        .equiv  PMD2_IC7MD_WIDTH, 0x0001
        .equiv  PMD2_IC7MD_MASK, 0x4000
        .equiv  IC7MD, 0x000E

        .equiv  PMD2_IC8MD, 0x000F
        .equiv  PMD2_IC8MD_WIDTH, 0x0001
        .equiv  PMD2_IC8MD_MASK, 0x8000
        .equiv  IC8MD, 0x000F



;  Some useful macros for PWRSAV instructions

   .equiv SLEEP_MODE, 0x0
   .equiv IDLE_MODE, 0x1


;==========================================================================
;
;   Configuration Words
;
;   Configuration words exist in Program Space and their locations are
;   defined in the device linker script. They can be set in source code
;   or in the MPLAB IDE. Each configuration word should be specified
;   only once (multiple settings may be combined.)
;
;==========================================================================
;
;  Setting configuration words using macros:
;
;  The following macro named 'config' can be used to set configuration words:
;==========================================================================
;  NOTICE: CONFIG MACRO IS ****D E P R E C A T E D****
;  Please use #pragma in a separate C file in the project.
;  Some features in linker and compiler cannot use values
;  set using this method. Please migrate to #pragma config method.
;==========================================================================
;
        .macro config REG, VALUE
        .pushsection \REG.sec, code
        .global \REG
        .warn "DEPRECATED. Please use #pragma config in a C file"
\REG:   .pword \VALUE
        .popsection
        .endm
;
;  For example, to set CONFIG_REG using the macro above, the following line
;  can be pasted only at the beginning of the assembly source code,
;  immediately below the '.include' directive.
;
;        config __CONFIG_REG, SETTING_A & SETTING_B
;
;  Note that the 'config' macro takes two arguments: the first is the name
;  of a configuration word (in this case, __CONFIG_REG), the second argument
;  is a boolean expression that may include multiple settings.
;  The example above would enable SETTING_A and also SETTING_B.
;
;  A description of all possible settings for each configuration word
;  appears below.
;
;==========================================================================
;
;  Setting configuration words without using macros:
;
;  To set configuration words without using the 'config' macro,
;  use the following format:
;
;           .section __CONFIG_REG.sec, code
;           .global __CONFIG_REG
;__CONFIG_REG: .pword SETTING_A & SETTING_B
;
;  This source code is equivalent to the expanded macro from the previous
;  example.
;
;==========================================================================


;----- FUID0 (0x8005c0) --------------------------------------------------
;
;  The following settings are available for FUID0:
;
;   :
;


;----- FUID1 (0x8005c2) --------------------------------------------------
;
;  The following settings are available for FUID1:
;
;   :
;


;----- FUID2 (0x8005c4) --------------------------------------------------
;
;  The following settings are available for FUID2:
;
;   :
;


;----- FUID3 (0x8005c6) --------------------------------------------------
;
;  The following settings are available for FUID3:
;
;   :
;


;----- FOSC (0xf80000) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Oscillator:
;     LP                   Low-Power 32KHz Osc (No change to Primary Osc Mode bits)
;     FRC                  Internal Fast RC (No change to Primary Osc Mode bits)
;     LPRC                 Internal Low-Power RC (No change to Primary Osc Mode bits)
;     XTL                  XTL
;     HS                   HS
;     XT                   XT
;     ERCIO                ERCIO
;     ERC                  ERC
;     EC                   EC
;     ECIO                 ECIO
;     FRC_PLL4             FRC w/PLL 4x
;     FRC_PLL16            FRC w/PLL 16x
;     XT_PLL4              XT w/PLL 4x
;     XT_PLL8              XT w/PLL 8x
;     XT_PLL16             XT w/PLL 16x
;     FRC_PLL8             FRC w/PLL 8x
;     ECIO_PLL4            ECIO w/PLL 4x
;     ECIO_PLL8            ECIO w/PLL 8x
;     ECIO_PLL16           ECIO w/PLL 16x
;     HS2_PLL4             HS2 w/PLL 4x
;     HS2_PLL8             HS2 w/PLL 8x
;     HS2_PLL16            HS2 w/PLL 16x
;     HS3_PLL4             HS3 w/PLL 4x
;     HS3_PLL8             HS3 w/PLL 8x
;     HS3_PLL16            HS3 w/PLL 16x
;
;   Clock Switching and Monitor:
;     CSW_FSCM_ON          Sw Enabled, Mon Enabled
;     CSW_ON_FSCM_OFF      Sw Enabled, Mon Disabled
;     CSW_FSCM_OFF         Sw Disabled, Mon Disabled
;
        .equiv LP,              0xF8E0 ; Low-Power 32KHz Osc (No change to Primary Osc Mode bits)
        .equiv FRC,             0xF9E0 ; Internal Fast RC (No change to Primary Osc Mode bits)
        .equiv LPRC,            0xFAE0 ; Internal Low-Power RC (No change to Primary Osc Mode bits)
        .equiv XTL,             0xFBE0 ; XTL
        .equiv HS,              0xFBE2 ; HS
        .equiv XT,              0xFBE4 ; XT
        .equiv ERCIO,           0xFBE8 ; ERCIO
        .equiv ERC,             0xFBE9 ; ERC
        .equiv EC,              0xFBEB ; EC
        .equiv ECIO,            0xFBEC ; ECIO
        .equiv FRC_PLL4,        0xFFE1 ; FRC w/PLL 4x
        .equiv FRC_PLL16,       0xFFE3 ; FRC w/PLL 16x
        .equiv XT_PLL4,         0xFFE5 ; XT w/PLL 4x
        .equiv XT_PLL8,         0xFFE6 ; XT w/PLL 8x
        .equiv XT_PLL16,        0xFFE7 ; XT w/PLL 16x
        .equiv FRC_PLL8,        0xFFEA ; FRC w/PLL 8x
        .equiv ECIO_PLL4,       0xFFED ; ECIO w/PLL 4x
        .equiv ECIO_PLL8,       0xFFEE ; ECIO w/PLL 8x
        .equiv ECIO_PLL16,      0xFFEF ; ECIO w/PLL 16x
        .equiv HS2_PLL4,        0xFFF1 ; HS2 w/PLL 4x
        .equiv HS2_PLL8,        0xFFF2 ; HS2 w/PLL 8x
        .equiv HS2_PLL16,       0xFFF3 ; HS2 w/PLL 16x
        .equiv HS3_PLL4,        0xFFF5 ; HS3 w/PLL 4x
        .equiv HS3_PLL8,        0xFFF6 ; HS3 w/PLL 8x
        .equiv HS3_PLL16,       0xFFF7 ; HS3 w/PLL 16x

        .equiv CSW_FSCM_ON,     0x3FFF ; Sw Enabled, Mon Enabled
        .equiv CSW_ON_FSCM_OFF, 0x7FFF ; Sw Enabled, Mon Disabled
        .equiv CSW_FSCM_OFF,    0xBFFF ; Sw Disabled, Mon Disabled


;----- FWDT (0xf80002) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   WDT Prescaler B:
;     WDTPSB_1             1:1
;     WDTPSB_2             1:2
;     WDTPSB_3             1:3
;     WDTPSB_4             1:4
;     WDTPSB_5             1:5
;     WDTPSB_6             1:6
;     WDTPSB_7             1:7
;     WDTPSB_8             1:8
;     WDTPSB_9             1:9
;     WDTPSB_10            1:10
;     WDTPSB_11            1:11
;     WDTPSB_12            1:12
;     WDTPSB_13            1:13
;     WDTPSB_14            1:14
;     WDTPSB_15            1:15
;     WDTPSB_16            1:16
;
;   WDT Prescaler A:
;     WDTPSA_1             1:1
;     WDTPSA_8             1:8
;     WDTPSA_64            1:64
;     WDTPSA_512           1:512
;
;   Watchdog Timer:
;     WDT_OFF              Disabled
;     WDT_ON               Enabled
;
        .equiv WDTPSB_1,        0xFFF0 ; 1:1
        .equiv WDTPSB_2,        0xFFF1 ; 1:2
        .equiv WDTPSB_3,        0xFFF2 ; 1:3
        .equiv WDTPSB_4,        0xFFF3 ; 1:4
        .equiv WDTPSB_5,        0xFFF4 ; 1:5
        .equiv WDTPSB_6,        0xFFF5 ; 1:6
        .equiv WDTPSB_7,        0xFFF6 ; 1:7
        .equiv WDTPSB_8,        0xFFF7 ; 1:8
        .equiv WDTPSB_9,        0xFFF8 ; 1:9
        .equiv WDTPSB_10,       0xFFF9 ; 1:10
        .equiv WDTPSB_11,       0xFFFA ; 1:11
        .equiv WDTPSB_12,       0xFFFB ; 1:12
        .equiv WDTPSB_13,       0xFFFC ; 1:13
        .equiv WDTPSB_14,       0xFFFD ; 1:14
        .equiv WDTPSB_15,       0xFFFE ; 1:15
        .equiv WDTPSB_16,       0xFFFF ; 1:16

        .equiv WDTPSA_1,        0xFFCF ; 1:1
        .equiv WDTPSA_8,        0xFFDF ; 1:8
        .equiv WDTPSA_64,       0xFFEF ; 1:64
        .equiv WDTPSA_512,      0xFFFF ; 1:512

        .equiv WDT_OFF,         0x7FFF ; Disabled
        .equiv WDT_ON,          0xFFFF ; Enabled


;----- FBORPOR (0xf80004) --------------------------------------------------
;
;  The following settings are available for FBORPOR:
;
;   POR Timer Value:
;     PWRT_OFF             Timer Disabled
;     PWRT_4               4ms
;     PWRT_16              16ms
;     PWRT_64              64ms
;
;   Brown Out Voltage:
;     BORV45               4.5V
;     BORV42               4.2V
;     BORV27               2.7V
;     BORV20               Reserved
;
;   PBOR Enable:
;     PBOR_OFF             Disabled
;     PBOR_ON              Enabled
;
;   Master Clear Enable:
;     MCLR_DIS             Disabled
;     MCLR_EN              Enabled
;
        .equiv PWRT_OFF,        0xFFFC ; Timer Disabled
        .equiv PWRT_4,          0xFFFD ; 4ms
        .equiv PWRT_16,         0xFFFE ; 16ms
        .equiv PWRT_64,         0xFFFF ; 64ms

        .equiv BORV45,          0xFFCF ; 4.5V
        .equiv BORV42,          0xFFDF ; 4.2V
        .equiv BORV27,          0xFFEF ; 2.7V
        .equiv BORV20,          0xFFFF ; Reserved

        .equiv PBOR_OFF,        0xFF7F ; Disabled
        .equiv PBOR_ON,         0xFFFF ; Enabled

        .equiv MCLR_DIS,        0x7FFF ; Disabled
        .equiv MCLR_EN,         0xFFFF ; Enabled


;----- RESERVED1 (0xf80006) --------------------------------------------------
;
;  The following settings are available for RESERVED1:
;

;----- RESERVED2 (0xf80008) --------------------------------------------------
;
;  The following settings are available for RESERVED2:
;

;----- FGS (0xf8000a) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Code Segment Write Protect:
;     GWRP_ON              Enabled
;     GWRP_OFF             Disabled
;
;   General Segment Code Protection:
;     CODE_PROT_ON         Enabled
;     CODE_PROT_OFF        Disabled
;
        .equiv GWRP_ON,         0xFFFE ; Enabled
        .equiv GWRP_OFF,        0xFFFF ; Disabled

        .equiv CODE_PROT_ON,    0xFFF9 ; Enabled
        .equiv CODE_PROT_OFF,   0xFFFF ; Disabled


;----- FICD (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   Comm Channel Select:
;     ICS_PGD3             Use EMUC3 and EMUD3
;     PGD3                 Use EMUC3 and EMUD3
;     ICS_PGD2             Use EMUC2 and EMUD2
;     PGD2                 Use EMUC2 and EMUD2
;     ICS_PGD1             Use EMUC1 and EMUD1
;     PGD1                 Use EMUC1 and EMUD1
;     ICS_PGD              Use PGC/EMUC and PGD/EMUD
;     PGD                  Use PGC/EMUC and PGD/EMUD
;
        .equiv ICS_PGD3,        0xFFFC ; Use EMUC3 and EMUD3
        .equiv PGD3,            0xFFFC ; Use EMUC3 and EMUD3
        .equiv ICS_PGD2,        0xFFFD ; Use EMUC2 and EMUD2
        .equiv PGD2,            0xFFFD ; Use EMUC2 and EMUD2
        .equiv ICS_PGD1,        0xFFFE ; Use EMUC1 and EMUD1
        .equiv PGD1,            0xFFFE ; Use EMUC1 and EMUD1
        .equiv ICS_PGD,         0xFFFF ; Use PGC/EMUC and PGD/EMUD
        .equiv PGD,             0xFFFF ; Use PGC/EMUC and PGD/EMUD



.LIST
.endif
