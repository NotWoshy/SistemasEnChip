;/**@brief ESTE PROGRAMA MUESTRA LOS BLOQUES QUE FORMAN UN PROGRAMA 
; * EN ENSAMBLADOR, LOS BLOQUES SON:
; * BLOQUE 1. OPCIONES DE CONFIGURACION DEL DSC: OSCILADOR, WATCHDOG,
; *	BROWN OUT RESET, POWER ON RESET Y CODIGO DE PROTECCION
; * BLOQUE 2. EQUIVALENCIAS Y DECLARACIONES GLOBALES
; * BLOQUE 3. ESPACIOS DE MEMORIA: PROGRAMA, DATOS X, DATOS Y, DATOS NEAR
; * BLOQUE 4. C�DIGO DE APLICACI�N
; * @device: DSPIC30F4013
; * @oscilLator: FRC, 7.3728MHz
; */
        .equ __30F4013, 1
        .include "p30F3013.inc"
;******************************************************************************
; BITS DE CONFIGURACI�N
;******************************************************************************
;..............................................................................
;SE DESACTIVA EL CLOCK SWITCHING Y EL FAIL-SAFE CLOCK MONITOR (FSCM) Y SE 
;ACTIVA EL OSCILADOR INTERNO DE 7.3728MHZ(FAST RC) PARA TRABAJAR
;FSCM: PERMITE AL DISPOSITIVO CONTINUAR OPERANDO AUN CUANDO OCURRA UNA FALLA 
;EN EL OSCILADOR. CUANDO OCURRE UNA FALLA EN EL OSCILADOR SE GENERA UNA TRAMPA
;Y SE CAMBIA EL RELOJ AL OSCILADOR FRC  
;..............................................................................
        config __FOSC, CSW_FSCM_OFF & FRC   
;..............................................................................
;SE DESACTIVA EL WATCHDOG
;..............................................................................
        config __FWDT, WDT_OFF 
;..............................................................................
;SE ACTIVA EL POWER ON RESET (POR), BROWN OUT RESET (BOR), POWER UP TIMER (PWRT)
;Y EL MASTER CLEAR (MCLR)
;POR: AL MOMENTO DE ALIMENTAR EL DSPIC OCURRE UN RESET CUANDO EL VOLTAJE DE 
;ALIMENTACI�N ALCANZA UN VOLTAJE DE UMBRAL (VPOR), EL CUAL ES 1.85V
;BOR: ESTE MODULO GENERA UN RESET CUANDO EL VOLTAJE DE ALIMENTACI�N DECAE
;POR DEBAJO DE UN CIERTO UMBRAL ESTABLECIDO (2.7V) 
;PWRT: MANTIENE AL DSPIC EN RESET POR UN CIERTO TIEMPO ESTABLECIDO, ESTO AYUDA
;A ASEGURAR QUE EL VOLTAJE DE ALIMENTACI�N SE HA ESTABILIZADO (16ms) 
;..............................................................................
        config __FBORPOR, PBOR_ON & BORV27 & PWRT_16 & MCLR_EN
;..............................................................................
;SE DESACTIVA EL C�DIGO DE PROTECCI�N
;..............................................................................
   	config __FGS, CODE_PROT_OFF & GWRP_OFF      

;******************************************************************************
; SECCI�N DE DECLARACI�N DE CONSTANTES CON LA DIRECTIVA .EQU (= DEFINE EN C)
;******************************************************************************
        .equ MUESTRAS, 64         ;N�MERO DE MUESTRAS
	.equ LC,	0x39
	.equ LA,	0x77
	.equ LF,	0x71	
	.equ LE,	0x79
	.equ LO,	0x3F
	.equ LN,	0x54
	.equ LL,	0x38
	.equ LH,	0x76
	.equ NULL,	0x00
;******************************************************************************
; DECLARACIONES GLOBALES
;******************************************************************************
;..............................................................................
;PROPORCIONA ALCANCE GLOBAL A LA FUNCI�N _wreg_init, ESTO PERMITE LLAMAR A LA 
;FUNCI�N DESDE UN OTRO PROGRAMA EN ENSAMBLADOR O EN C COLOCANDO LA DECLARACI�N
;"EXTERN"
;..............................................................................
        .global _wreg_init     
;..............................................................................
;ETIQUETA DE LA PRIMER LINEA DE C�DIGO
;..............................................................................
        .global __reset          
;..............................................................................
;DECLARACI�N DE LA ISR DEL TIMER 1 COMO GLOBAL
;..............................................................................
        .global __T1Interrupt    

;******************************************************************************
;CONSTANTES ALMACENADAS EN EL ESPACIO DE LA MEMORIA DE PROGRAMA
;******************************************************************************
        .section .myconstbuffer, code
;..............................................................................
;ALINEA LA SIGUIENTE PALABRA ALMACENADA EN LA MEMORIA 
;DE PROGRAMA A UNA DIRECCION MULTIPLO DE 2
;..............................................................................
        .palign 2                

ps_coeff:
        .hword   0x0002, 0x0003, 0x0005, 0x000A
	
MENSAJE:
	.byte	LC, LA, LF, LE, LC, LO, LN, LL, LE, LC, LH, LE, NULL
;short int ps_coeff[] = {0x0002, 0x0003, 0x0005, 0x000A };	

;******************************************************************************
;VARIABLES NO INICIALIZADAS EN EL ESPACIO X DE LA MEMORIA DE DATOS
;******************************************************************************
         .section .xbss, bss, xmemory

x_input: .space 2*MUESTRAS        ;RESERVANDO ESPACIO (EN BYTES) A LA VARIABLE
;char x_input[128];
;short int x_input[64];
;int x_input[32];
;******************************************************************************
;VARIABLES NO INICIALIZADAS EN EL ESPACIO Y DE LA MEMORIA DE DATOS
;******************************************************************************

          .section .ybss, bss, ymemory

y_input:  .space 2*MUESTRAS       ;RESERVANDO ESPACIO (EN BYTES) A LA VARIABLE
;******************************************************************************
;VARIABLES NO INICIALIZADAS LA MEMORIA DE DATOS CERCANA (NEAR), LOCALIZADA
;EN LOS PRIMEROS 8KB DE RAM
;******************************************************************************
          .section .nbss, bss, near

var1:     .space 2               ;LA VARIABLE VAR1 RESERVA 1 WORD DE ESPACIO

;******************************************************************************
;SECCION DE CODIGO EN LA MEMORIA DE PROGRAMA
;******************************************************************************
.text					;INICIO DE LA SECCION DE CODIGO

__reset:
        MOV	#__SP_init, 	W15	;INICIALIZA EL STACK POINTER

        MOV 	#__SPLIM_init, 	W0     	;INICIALIZA EL REGISTRO STACK POINTER LIMIT 
        MOV 	W0, 		SPLIM

        NOP                       	;UN NOP DESPUES DE LA INICIALIZACION DE SPLIM

        CALL 	_WREG_INIT          	;SE LLAMA A LA RUTINA DE INICIALIZACION DE REGISTROS
                                  	;OPCIONALMENTE USAR RCALL EN LUGAR DE CALL
        CALL    INI_PERIFERICOS
CICLO:	
	MOV	#tblpage(MENSAJE),	W0
	MOV	W0,			W2
	MOV	#tbloffset(MENSAJE),		W1

SIG_LETRA:
	CLR	    W0
	TBLRDL.B    [W1++],	W0
	CP0.B	    W0
	BRA	    Z,		CICLO
	
	MOV.B	    WREG,	PORTB
	NOP
	CALL	    _RETARDO_1s
	GOTO	    SIG_LETRA
	
	
	;INICIO CODIGO VIEJO
	;BTSC	PORTD,	#0	;Si 0, enciende
	;GOTO	CICLO
	
	;MOV	W3,	W0	;W3 contador
	;NOP
	;;LSR	W0,	#2,	W0
	;AND	#0X0F,	W0
	
	;MOV     #0, W1
	;CP      W0,	W1            
	;BRA	Z,      FIN               
	
	;MOV	#1,	W2
	;CP	W0,	#0		    ;IMPRIME H EN PANTALLA
	;BRA	Z,	MUESTRA_H
	
	;MOV	#2,	W2		    ;IMPRIME O EN PANTALLA
	;CP	W0,	#1
	;	Z,	MUESTRA_O
	
	;MOV	#4,	W2		    ;IMPRIME L EN PANTALLA
	;CP	W0,	#2
	;BRA	Z,	MUESTRA_L
	
	;MOV	#8,	W2		    ;IMPRIME A EN PANTALLA
	;CP	W0,	#3
	;BRA	Z,	MUESTRA_A
	
	CALL CONV_COD
	MOV W0,	    PORTB
	NOP
	GOTO	CICLO
	
CONV_COD:
	BRA	W0
	RETLW	#LC,	W0
	RETLW	#LA,	W0
	RETLW	#LF,	W0
	RETLW	#LE,	W0
	RETLW	#LC,	W0
	RETLW	#LO,	W0
	RETLW	#LN,	W0
	RETLW	#LL,	W0
	RETLW	#LE,	W0
	RETLW	#LC,	W0
	RETLW	#LH,	W0
	RETLW	#LE,	W0
	GOTO CICLO

MUESTRA_H:
	MOV	#0X76,	W0
	MOV	W0,	PORTB
	CALL	_RETARDO_1s
	GOTO	SIGUIENTE
	
MUESTRA_O:
	MOV	#0X38,	W0
	MOV	W0,	PORTB
	CALL	_RETARDO_1s
	GOTO	SIGUIENTE
	
MUESTRA_L:
	MOV	#0X77,	W0
	MOV	W0,	PORTB
	CALL	_RETARDO_1s
	GOTO	SIGUIENTE
	
MUESTRA_A:
	MOV	#0X76,	W0
	MOV	W0,	PORTB
	CALL	_RETARDO_1s
	GOTO	SIGUIENTE
	
SIGUIENTE:
	ADD	W3,	#1,	W3
	CP	W3,	#4
	BRA	NZ,	CICLO
	CLR	W3
	NOP
	GOTO CICLO

;/**@brief ESTA RUTINA INICIALIZA LOS PERIFERICOS DEL DSC
; */
INI_PERIFERICOS:
	CLR	PORTF	    ;PORTF = 0
	NOP
	CLR	LATF	    ;LATF = 0
	NOP
	SETM	TRISF	    ;TRISF = 0XFFFF
	NOP
	
	CLR	PORTD	    ;PORTD = 0
	NOP
	CLR	LATD	    ;LATD = 0
	NOP
	SETM	TRISD	    ;TRISD = 0XFFFF
	NOP
	

	CLR	PORTB	    ;PORTB = 0
	NOP
	CLR	LATB	    ;LATB = 0
	NOP
	CLR	TRISB	    ;TRISB = 0
	NOP
	SETM	ADPCFG	    ;ADPCFG = 0XFFFF
			    ;SE DESHABILITA EL ADC
	
        RETURN

;/**@brief ESTA RUTINA INICIALIZA LOS REGISTROS Wn A 0X0000
; */
_WREG_INIT:
        CLR 	W0
        MOV 	W0, 				W14
        REPEAT 	#12
        MOV 	W0, 				[++W14]
        CLR 	W14
        RETURN

;/**@brief ISR (INTERRUPT SERVICE ROUTINE) DEL TIMER 1
; * SE USA PUSH.S PARA GUARDAR LOS REGISTROS W0, W1, W2, W3, 
; * C, Z, N Y DC EN LOS REGISTROS SOMBRA
; */
__T1Interrupt:
        PUSH.S 


        BCLR IFS0, #T1IF           ;SE LIMPIA LA BANDERA DE INTERRUPCION DEL TIMER 1

        POP.S

        RETFIE                     ;REGRESO DE LA ISR


.END                               ;TERMINACION DEL CODIGO DE PROGRAMA EN ESTE ARCHIVO









