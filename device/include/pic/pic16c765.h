//
// Register Declarations for Microchip 16C765 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V4783
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16C765_H
#define P16C765_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTB_ADDR	0x0006
#define PORTC_ADDR	0x0007
#define PORTD_ADDR	0x0008
#define PORTE_ADDR	0x0009
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define PIR2_ADDR	0x000D
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define TMR2_ADDR	0x0011
#define T2CON_ADDR	0x0012
#define CCPR1L_ADDR	0x0015
#define CCPR1H_ADDR	0x0016
#define CCP1CON_ADDR	0x0017
#define RCSTA_ADDR	0x0018
#define TXREG_ADDR	0x0019
#define RCREG_ADDR	0x001A
#define CCPR2L_ADDR	0x001B
#define CCPR2H_ADDR	0x001C
#define CCP2CON_ADDR	0x001D
#define ADRES_ADDR	0x001E
#define ADCON0_ADDR	0x001F
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISB_ADDR	0x0086
#define TRISC_ADDR	0x0087
#define TRISD_ADDR	0x0088
#define TRISE_ADDR	0x0089
#define PIE1_ADDR	0x008C
#define PIE2_ADDR	0x008D
#define PCON_ADDR	0x008E
#define PR2_ADDR	0x0092
#define TXSTA_ADDR	0x0098
#define SPBRG_ADDR	0x0099
#define ADCON1_ADDR	0x009F
#define UIR_ADDR	0x0190
#define UIE_ADDR	0x0191
#define UEIR_ADDR	0x0192
#define UEIE_ADDR	0x0193
#define USTAT_ADDR	0x0194
#define UCTRL_ADDR	0x0195
#define UADDR_ADDR	0x0196
#define USWSTAT_ADDR	0x0197
#define UEP0_ADDR	0x0198
#define UEP1_ADDR	0x0199
#define UEP2_ADDR	0x019A
#define BD0OST_ADDR	0x01A0
#define BD0OBC_ADDR	0x01A1
#define BD0OAL_ADDR	0x01A2
#define BD0IST_ADDR	0x01A4
#define BD0IBC_ADDR	0x01A5
#define BD0IAL_ADDR	0x01A6
#define BD1OST_ADDR	0x01A8
#define BD1OBC_ADDR	0x01A9
#define BD1OAL_ADDR	0x01AA
#define BD1IST_ADDR	0x01AC
#define BD1IBC_ADDR	0x01AD
#define BD1IAL_ADDR	0x01AE
#define BD2OST_ADDR	0x01B0
#define BD2OBC_ADDR	0x01B1
#define BD2OAL_ADDR	0x01B2
#define BD2IST_ADDR	0x01B4
#define BD2IBC_ADDR	0x01B5
#define BD2IAL_ADDR	0x01B6

//
// Memory organization.
//



//         LIST
// P16C765.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16C765 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16C765
//       2. LIST directive in the source file
//               LIST   P=PIC16C765
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================

//Rev:   Date:    Reason:

//1.00   28 Sep 99 Initial Release

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16C765
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTB_ADDR)                   PORTB;
extern __sfr  __at (PORTC_ADDR)                   PORTC;
extern __sfr  __at (PORTD_ADDR)                   PORTD;
extern __sfr  __at (PORTE_ADDR)                   PORTE;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (PIR2_ADDR)                    PIR2;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (TMR2_ADDR)                    TMR2;
extern __sfr  __at (T2CON_ADDR)                   T2CON;
extern __sfr  __at (CCPR1L_ADDR)                  CCPR1L;
extern __sfr  __at (CCPR1H_ADDR)                  CCPR1H;
extern __sfr  __at (CCP1CON_ADDR)                 CCP1CON;
extern __sfr  __at (RCSTA_ADDR)                   RCSTA;
extern __sfr  __at (TXREG_ADDR)                   TXREG;
extern __sfr  __at (RCREG_ADDR)                   RCREG;
extern __sfr  __at (CCPR2L_ADDR)                  CCPR2L;
extern __sfr  __at (CCPR2H_ADDR)                  CCPR2H;
extern __sfr  __at (CCP2CON_ADDR)                 CCP2CON;
extern __sfr  __at (ADRES_ADDR)                   ADRES;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;

extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISB_ADDR)                   TRISB;
extern __sfr  __at (TRISC_ADDR)                   TRISC;
extern __sfr  __at (TRISD_ADDR)                   TRISD;
extern __sfr  __at (TRISE_ADDR)                   TRISE;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PIE2_ADDR)                    PIE2;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (PR2_ADDR)                     PR2;
extern __sfr  __at (TXSTA_ADDR)                   TXSTA;
extern __sfr  __at (SPBRG_ADDR)                   SPBRG;
extern __sfr  __at (ADCON1_ADDR)                  ADCON1;
extern __sfr  __at (UIR_ADDR)                     UIR;
extern __sfr  __at (UIE_ADDR)                     UIE;
extern __sfr  __at (UEIR_ADDR)                    UEIR;
extern __sfr  __at (UEIE_ADDR)                    UEIE;
extern __sfr  __at (USTAT_ADDR)                   USTAT;
extern __sfr  __at (UCTRL_ADDR)                   UCTRL;
extern __sfr  __at (UADDR_ADDR)                   UADDR;
extern __sfr  __at (USWSTAT_ADDR)                 USWSTAT;
extern __sfr  __at (UEP0_ADDR)                    UEP0;
extern __sfr  __at (UEP1_ADDR)                    UEP1;
extern __sfr  __at (UEP2_ADDR)                    UEP2;

extern __sfr  __at (BD0OST_ADDR)                  BD0OST;
extern __sfr  __at (BD0OBC_ADDR)                  BD0OBC;
extern __sfr  __at (BD0OAL_ADDR)                  BD0OAL;
extern __sfr  __at (BD0IST_ADDR)                  BD0IST;
extern __sfr  __at (BD0IBC_ADDR)                  BD0IBC;
extern __sfr  __at (BD0IAL_ADDR)                  BD0IAL;

extern __sfr  __at (BD1OST_ADDR)                  BD1OST;
extern __sfr  __at (BD1OBC_ADDR)                  BD1OBC;
extern __sfr  __at (BD1OAL_ADDR)                  BD1OAL;
extern __sfr  __at (BD1IST_ADDR)                  BD1IST;
extern __sfr  __at (BD1IBC_ADDR)                  BD1IBC;
extern __sfr  __at (BD1IAL_ADDR)                  BD1IAL;

extern __sfr  __at (BD2OST_ADDR)                  BD2OST;
extern __sfr  __at (BD2OBC_ADDR)                  BD2OBC;
extern __sfr  __at (BD2OAL_ADDR)                  BD2OAL;
extern __sfr  __at (BD2IST_ADDR)                  BD2IST;
extern __sfr  __at (BD2IBC_ADDR)                  BD2IBC;
extern __sfr  __at (BD2IAL_ADDR)                  BD2IAL;


//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------


//----- PIR2 Bits ----------------------------------------------------------


//----- T1CON Bits ---------------------------------------------------------


//----- T2CON Bits ---------------------------------------------------------


//----- CCP1CON Bits -------------------------------------------------------


//----- RCSTA Bits ---------------------------------------------------------


//----- CCP2CON Bits -------------------------------------------------------


//----- ADCON0 Bits --------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- TRISE Bits ---------------------------------------------------------


//----- PIE1 Bits ----------------------------------------------------------


//----- PIE2 Bits ----------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//----- TXSTA Bits ---------------------------------------------------------


//----- ADCON1 Bits --------------------------------------------------------


//----- UIR/UIE Bits -----------------------------------------------------


//----- UEIR/UEIE Bits -----------------------------------------------------


//----- USTAT Bits ---------------------------------------------------------


//----- UCTRL Bits ---------------------------------------------------------

//----- UEPn Bits ---------------------------------------------------------


//----- Buffer descriptor Bits ---------------------------------------------

//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'01FF'
//         __BADRAM H'13', H'14', H'8F'-H'91'
// 	__BADRAM H'93'-H'97', H'9A'-H'9E'
// 	__BADRAM H'105', H'107'-H'109', H'10C'-H'11F'
// 	__BADRAM H'185', H'187'-H'189', H'18C'-H'18F', H'19B'-H'19F'
// 	__BADRAM H'1E0'-H'1EF'
//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _CP_ALL              0x00CF
#define _CP_75               0x15DF
#define _CP_50               0x2AEF
#define _CP_OFF              0x3FFF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FF7
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FFB
#define _HS_OSC              0x3FFC
#define _EC_OSC              0x3FFD
#define _H4_OSC              0x3FFE
#define _E4_OSC              0x3FFF

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char :1;
    unsigned char GO:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char CHS2:1;
    unsigned char ADCS0:1;
    unsigned char ADCS1:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0_bits_t;
extern volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;

#ifndef NO_BIT_DEFINES
#define ADON                 ADCON0_bits.ADON
#define GO                   ADCON0_bits.GO
#define NOT_DONE             ADCON0_bits.NOT_DONE
#define GO_DONE              ADCON0_bits.GO_DONE
#define CHS0                 ADCON0_bits.CHS0
#define CHS1                 ADCON0_bits.CHS1
#define CHS2                 ADCON0_bits.CHS2
#define ADCS0                ADCON0_bits.ADCS0
#define ADCS1                ADCON0_bits.ADCS1
#endif /* NO_BIT_DEFINES */

// ----- ADCON1 bits --------------------
typedef union {
  struct {
    unsigned char PCFG0:1;
    unsigned char PCFG1:1;
    unsigned char PCFG2:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON1_bits_t;
extern volatile __ADCON1_bits_t __at(ADCON1_ADDR) ADCON1_bits;

#ifndef NO_BIT_DEFINES
#define PCFG0                ADCON1_bits.PCFG0
#define PCFG1                ADCON1_bits.PCFG1
#define PCFG2                ADCON1_bits.PCFG2
#endif /* NO_BIT_DEFINES */

// ----- CCP1CON bits --------------------
typedef union {
  struct {
    unsigned char CCP1M0:1;
    unsigned char CCP1M1:1;
    unsigned char CCP1M2:1;
    unsigned char CCP1M3:1;
    unsigned char DC1B0:1;
    unsigned char DC1B1:1;
    unsigned char :1;
    unsigned char :1;
  };
} __CCP1CON_bits_t;
extern volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;

#ifndef NO_BIT_DEFINES
#define CCP1M0               CCP1CON_bits.CCP1M0
#define CCP1M1               CCP1CON_bits.CCP1M1
#define CCP1M2               CCP1CON_bits.CCP1M2
#define CCP1M3               CCP1CON_bits.CCP1M3
#define DC1B0                CCP1CON_bits.DC1B0
#define DC1B1                CCP1CON_bits.DC1B1
#endif /* NO_BIT_DEFINES */

// ----- CCP2CON bits --------------------
typedef union {
  struct {
    unsigned char CCP2M0:1;
    unsigned char CCP2M1:1;
    unsigned char CCP2M2:1;
    unsigned char CCP2M3:1;
    unsigned char DC2B0:1;
    unsigned char DC2B1:1;
    unsigned char :1;
    unsigned char :1;
  };
} __CCP2CON_bits_t;
extern volatile __CCP2CON_bits_t __at(CCP2CON_ADDR) CCP2CON_bits;

#ifndef NO_BIT_DEFINES
#define CCP2M0               CCP2CON_bits.CCP2M0
#define CCP2M1               CCP2CON_bits.CCP2M1
#define CCP2M2               CCP2CON_bits.CCP2M2
#define CCP2M3               CCP2CON_bits.CCP2M3
#define DC2B0                CCP2CON_bits.DC2B0
#define DC2B1                CCP2CON_bits.DC2B1
#endif /* NO_BIT_DEFINES */

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RBIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RBIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#ifndef NO_BIT_DEFINES
#define RBIF                 INTCON_bits.RBIF
#define INTF                 INTCON_bits.INTF
#define T0IF                 INTCON_bits.T0IF
#define RBIE                 INTCON_bits.RBIE
#define INTE                 INTCON_bits.INTE
#define T0IE                 INTCON_bits.T0IE
#define PEIE                 INTCON_bits.PEIE
#define GIE                  INTCON_bits.GIE
#endif /* NO_BIT_DEFINES */

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RBPU:1;
  };
} __OPTION_REG_bits_t;
extern volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;

#ifndef NO_BIT_DEFINES
#define PS0                  OPTION_REG_bits.PS0
#define PS1                  OPTION_REG_bits.PS1
#define PS2                  OPTION_REG_bits.PS2
#define PSA                  OPTION_REG_bits.PSA
#define T0SE                 OPTION_REG_bits.T0SE
#define T0CS                 OPTION_REG_bits.T0CS
#define INTEDG               OPTION_REG_bits.INTEDG
#define NOT_RBPU             OPTION_REG_bits.NOT_RBPU
#endif /* NO_BIT_DEFINES */

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BO:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BOR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCON_bits_t;
extern volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;

#ifndef NO_BIT_DEFINES
#define NOT_BO               PCON_bits.NOT_BO
#define NOT_BOR              PCON_bits.NOT_BOR
#define NOT_POR              PCON_bits.NOT_POR
#endif /* NO_BIT_DEFINES */

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char TMR2IE:1;
    unsigned char CCP1IE:1;
    unsigned char USBIE:1;
    unsigned char TXIE:1;
    unsigned char RCIE:1;
    unsigned char ADIE:1;
    unsigned char PSPIE:1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#ifndef NO_BIT_DEFINES
#define TMR1IE               PIE1_bits.TMR1IE
#define TMR2IE               PIE1_bits.TMR2IE
#define CCP1IE               PIE1_bits.CCP1IE
#define USBIE                PIE1_bits.USBIE
#define TXIE                 PIE1_bits.TXIE
#define RCIE                 PIE1_bits.RCIE
#define ADIE                 PIE1_bits.ADIE
#define PSPIE                PIE1_bits.PSPIE
#endif /* NO_BIT_DEFINES */

// ----- PIE2 bits --------------------
typedef union {
  struct {
    unsigned char CCP2IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE2_bits_t;
extern volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;

#ifndef NO_BIT_DEFINES
#define CCP2IE               PIE2_bits.CCP2IE
#endif /* NO_BIT_DEFINES */

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char TMR2IF:1;
    unsigned char CCP1IF:1;
    unsigned char USBIF:1;
    unsigned char TXIF:1;
    unsigned char RCIF:1;
    unsigned char ADIF:1;
    unsigned char PSPIF:1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#ifndef NO_BIT_DEFINES
#define TMR1IF               PIR1_bits.TMR1IF
#define TMR2IF               PIR1_bits.TMR2IF
#define CCP1IF               PIR1_bits.CCP1IF
#define USBIF                PIR1_bits.USBIF
#define TXIF                 PIR1_bits.TXIF
#define RCIF                 PIR1_bits.RCIF
#define ADIF                 PIR1_bits.ADIF
#define PSPIF                PIR1_bits.PSPIF
#endif /* NO_BIT_DEFINES */

// ----- PIR2 bits --------------------
typedef union {
  struct {
    unsigned char CCP2IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR2_bits_t;
extern volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;

#ifndef NO_BIT_DEFINES
#define CCP2IF               PIR2_bits.CCP2IF
#endif /* NO_BIT_DEFINES */

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTA_bits_t;
extern volatile __PORTA_bits_t __at(PORTA_ADDR) PORTA_bits;

#ifndef NO_BIT_DEFINES
#define RA0                  PORTA_bits.RA0
#define RA1                  PORTA_bits.RA1
#define RA2                  PORTA_bits.RA2
#define RA3                  PORTA_bits.RA3
#define RA4                  PORTA_bits.RA4
#define RA5                  PORTA_bits.RA5
#endif /* NO_BIT_DEFINES */

// ----- PORTB bits --------------------
typedef union {
  struct {
    unsigned char RB0:1;
    unsigned char RB1:1;
    unsigned char RB2:1;
    unsigned char RB3:1;
    unsigned char RB4:1;
    unsigned char RB5:1;
    unsigned char RB6:1;
    unsigned char RB7:1;
  };
} __PORTB_bits_t;
extern volatile __PORTB_bits_t __at(PORTB_ADDR) PORTB_bits;

#ifndef NO_BIT_DEFINES
#define RB0                  PORTB_bits.RB0
#define RB1                  PORTB_bits.RB1
#define RB2                  PORTB_bits.RB2
#define RB3                  PORTB_bits.RB3
#define RB4                  PORTB_bits.RB4
#define RB5                  PORTB_bits.RB5
#define RB6                  PORTB_bits.RB6
#define RB7                  PORTB_bits.RB7
#endif /* NO_BIT_DEFINES */

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char RC6:1;
    unsigned char RC7:1;
  };
} __PORTC_bits_t;
extern volatile __PORTC_bits_t __at(PORTC_ADDR) PORTC_bits;

#ifndef NO_BIT_DEFINES
#define RC0                  PORTC_bits.RC0
#define RC1                  PORTC_bits.RC1
#define RC2                  PORTC_bits.RC2
#define RC3                  PORTC_bits.RC3
#define RC4                  PORTC_bits.RC4
#define RC5                  PORTC_bits.RC5
#define RC6                  PORTC_bits.RC6
#define RC7                  PORTC_bits.RC7
#endif /* NO_BIT_DEFINES */

// ----- PORTD bits --------------------
typedef union {
  struct {
    unsigned char RD0:1;
    unsigned char RD1:1;
    unsigned char RD2:1;
    unsigned char RD3:1;
    unsigned char RD4:1;
    unsigned char RD5:1;
    unsigned char RD6:1;
    unsigned char RD7:1;
  };
} __PORTD_bits_t;
extern volatile __PORTD_bits_t __at(PORTD_ADDR) PORTD_bits;

#ifndef NO_BIT_DEFINES
#define RD0                  PORTD_bits.RD0
#define RD1                  PORTD_bits.RD1
#define RD2                  PORTD_bits.RD2
#define RD3                  PORTD_bits.RD3
#define RD4                  PORTD_bits.RD4
#define RD5                  PORTD_bits.RD5
#define RD6                  PORTD_bits.RD6
#define RD7                  PORTD_bits.RD7
#endif /* NO_BIT_DEFINES */

// ----- PORTE bits --------------------
typedef union {
  struct {
    unsigned char RE0:1;
    unsigned char RE1:1;
    unsigned char RE2:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTE_bits_t;
extern volatile __PORTE_bits_t __at(PORTE_ADDR) PORTE_bits;

#ifndef NO_BIT_DEFINES
#define RE0                  PORTE_bits.RE0
#define RE1                  PORTE_bits.RE1
#define RE2                  PORTE_bits.RE2
#endif /* NO_BIT_DEFINES */

// ----- RCSTA bits --------------------
typedef union {
  struct {
    unsigned char RX9D:1;
    unsigned char OERR:1;
    unsigned char FERR:1;
    unsigned char :1;
    unsigned char CREN:1;
    unsigned char SREN:1;
    unsigned char RX9:1;
    unsigned char SPEN:1;
  };
  struct {
    unsigned char RCD8:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char RC9:1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_RC8:1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char RC8_9:1;
    unsigned char :1;
  };
} __RCSTA_bits_t;
extern volatile __RCSTA_bits_t __at(RCSTA_ADDR) RCSTA_bits;

#ifndef NO_BIT_DEFINES
#define RX9D                 RCSTA_bits.RX9D
#define RCD8                 RCSTA_bits.RCD8
#define OERR                 RCSTA_bits.OERR
#define FERR                 RCSTA_bits.FERR
#define CREN                 RCSTA_bits.CREN
#define SREN                 RCSTA_bits.SREN
#define RX9                  RCSTA_bits.RX9
#define RC9                  RCSTA_bits.RC9
#define NOT_RC8              RCSTA_bits.NOT_RC8
#define RC8_9                RCSTA_bits.RC8_9
#define SPEN                 RCSTA_bits.SPEN
#endif /* NO_BIT_DEFINES */

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUS_bits_t;
extern volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;

#ifndef NO_BIT_DEFINES
#define C                    STATUS_bits.C
#define DC                   STATUS_bits.DC
#define Z                    STATUS_bits.Z
#define NOT_PD               STATUS_bits.NOT_PD
#define NOT_TO               STATUS_bits.NOT_TO
#define RP0                  STATUS_bits.RP0
#define RP1                  STATUS_bits.RP1
#define IRP                  STATUS_bits.IRP
#endif /* NO_BIT_DEFINES */

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char T1INSYNC:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __T1CON_bits_t;
extern volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;

#ifndef NO_BIT_DEFINES
#define TMR1ON               T1CON_bits.TMR1ON
#define TMR1CS               T1CON_bits.TMR1CS
#define NOT_T1SYNC           T1CON_bits.NOT_T1SYNC
#define T1INSYNC             T1CON_bits.T1INSYNC
#define T1OSCEN              T1CON_bits.T1OSCEN
#define T1CKPS0              T1CON_bits.T1CKPS0
#define T1CKPS1              T1CON_bits.T1CKPS1
#endif /* NO_BIT_DEFINES */

// ----- T2CON bits --------------------
typedef union {
  struct {
    unsigned char T2CKPS0:1;
    unsigned char T2CKPS1:1;
    unsigned char TMR2ON:1;
    unsigned char TOUTPS0:1;
    unsigned char TOUTPS1:1;
    unsigned char TOUTPS2:1;
    unsigned char TOUTPS3:1;
    unsigned char :1;
  };
} __T2CON_bits_t;
extern volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;

#ifndef NO_BIT_DEFINES
#define T2CKPS0              T2CON_bits.T2CKPS0
#define T2CKPS1              T2CON_bits.T2CKPS1
#define TMR2ON               T2CON_bits.TMR2ON
#define TOUTPS0              T2CON_bits.TOUTPS0
#define TOUTPS1              T2CON_bits.TOUTPS1
#define TOUTPS2              T2CON_bits.TOUTPS2
#define TOUTPS3              T2CON_bits.TOUTPS3
#endif /* NO_BIT_DEFINES */

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISA_bits_t;
extern volatile __TRISA_bits_t __at(TRISA_ADDR) TRISA_bits;

#ifndef NO_BIT_DEFINES
#define TRISA0               TRISA_bits.TRISA0
#define TRISA1               TRISA_bits.TRISA1
#define TRISA2               TRISA_bits.TRISA2
#define TRISA3               TRISA_bits.TRISA3
#define TRISA4               TRISA_bits.TRISA4
#define TRISA5               TRISA_bits.TRISA5
#endif /* NO_BIT_DEFINES */

// ----- TRISB bits --------------------
typedef union {
  struct {
    unsigned char TRISB0:1;
    unsigned char TRISB1:1;
    unsigned char TRISB2:1;
    unsigned char TRISB3:1;
    unsigned char TRISB4:1;
    unsigned char TRISB5:1;
    unsigned char TRISB6:1;
    unsigned char TRISB7:1;
  };
} __TRISB_bits_t;
extern volatile __TRISB_bits_t __at(TRISB_ADDR) TRISB_bits;

#ifndef NO_BIT_DEFINES
#define TRISB0               TRISB_bits.TRISB0
#define TRISB1               TRISB_bits.TRISB1
#define TRISB2               TRISB_bits.TRISB2
#define TRISB3               TRISB_bits.TRISB3
#define TRISB4               TRISB_bits.TRISB4
#define TRISB5               TRISB_bits.TRISB5
#define TRISB6               TRISB_bits.TRISB6
#define TRISB7               TRISB_bits.TRISB7
#endif /* NO_BIT_DEFINES */

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char TRISC6:1;
    unsigned char TRISC7:1;
  };
} __TRISC_bits_t;
extern volatile __TRISC_bits_t __at(TRISC_ADDR) TRISC_bits;

#ifndef NO_BIT_DEFINES
#define TRISC0               TRISC_bits.TRISC0
#define TRISC1               TRISC_bits.TRISC1
#define TRISC2               TRISC_bits.TRISC2
#define TRISC3               TRISC_bits.TRISC3
#define TRISC4               TRISC_bits.TRISC4
#define TRISC5               TRISC_bits.TRISC5
#define TRISC6               TRISC_bits.TRISC6
#define TRISC7               TRISC_bits.TRISC7
#endif /* NO_BIT_DEFINES */

// ----- TRISD bits --------------------
typedef union {
  struct {
    unsigned char TRISD0:1;
    unsigned char TRISD1:1;
    unsigned char TRISD2:1;
    unsigned char TRISD3:1;
    unsigned char TRISD4:1;
    unsigned char TRISD5:1;
    unsigned char TRISD6:1;
    unsigned char TRISD7:1;
  };
} __TRISD_bits_t;
extern volatile __TRISD_bits_t __at(TRISD_ADDR) TRISD_bits;

#ifndef NO_BIT_DEFINES
#define TRISD0               TRISD_bits.TRISD0
#define TRISD1               TRISD_bits.TRISD1
#define TRISD2               TRISD_bits.TRISD2
#define TRISD3               TRISD_bits.TRISD3
#define TRISD4               TRISD_bits.TRISD4
#define TRISD5               TRISD_bits.TRISD5
#define TRISD6               TRISD_bits.TRISD6
#define TRISD7               TRISD_bits.TRISD7
#endif /* NO_BIT_DEFINES */

// ----- TRISE bits --------------------
typedef union {
  struct {
    unsigned char TRISE0:1;
    unsigned char TRISE1:1;
    unsigned char TRISE2:1;
    unsigned char :1;
    unsigned char PSPMODE:1;
    unsigned char IBOV:1;
    unsigned char OBF:1;
    unsigned char IBF:1;
  };
} __TRISE_bits_t;
extern volatile __TRISE_bits_t __at(TRISE_ADDR) TRISE_bits;

#ifndef NO_BIT_DEFINES
#define TRISE0               TRISE_bits.TRISE0
#define TRISE1               TRISE_bits.TRISE1
#define TRISE2               TRISE_bits.TRISE2
#define PSPMODE              TRISE_bits.PSPMODE
#define IBOV                 TRISE_bits.IBOV
#define OBF                  TRISE_bits.OBF
#define IBF                  TRISE_bits.IBF
#endif /* NO_BIT_DEFINES */

// ----- TXSTA bits --------------------
typedef union {
  struct {
    unsigned char TX9D:1;
    unsigned char TRMT:1;
    unsigned char BRGH:1;
    unsigned char :1;
    unsigned char SYNC:1;
    unsigned char TXEN:1;
    unsigned char TX9:1;
    unsigned char CSRC:1;
  };
  struct {
    unsigned char TXD8:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_TX8:1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char TX8_9:1;
    unsigned char :1;
  };
} __TXSTA_bits_t;
extern volatile __TXSTA_bits_t __at(TXSTA_ADDR) TXSTA_bits;

#ifndef NO_BIT_DEFINES
#define TX9D                 TXSTA_bits.TX9D
#define TXD8                 TXSTA_bits.TXD8
#define TRMT                 TXSTA_bits.TRMT
#define BRGH                 TXSTA_bits.BRGH
#define SYNC                 TXSTA_bits.SYNC
#define TXEN                 TXSTA_bits.TXEN
#define TX9                  TXSTA_bits.TX9
#define NOT_TX8              TXSTA_bits.NOT_TX8
#define TX8_9                TXSTA_bits.TX8_9
#define CSRC                 TXSTA_bits.CSRC
#endif /* NO_BIT_DEFINES */

// ----- UCTRL bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char SUSPND:1;
    unsigned char RESUME:1;
    unsigned char DEV_ATT:1;
    unsigned char PKT_DIS:1;
    unsigned char SE0:1;
    unsigned char :1;
    unsigned char :1;
  };
} __UCTRL_bits_t;
extern volatile __UCTRL_bits_t __at(UCTRL_ADDR) UCTRL_bits;

#ifndef NO_BIT_DEFINES
#define SUSPND               UCTRL_bits.SUSPND
#define RESUME               UCTRL_bits.RESUME
#define DEV_ATT              UCTRL_bits.DEV_ATT
#define PKT_DIS              UCTRL_bits.PKT_DIS
#define SE0                  UCTRL_bits.SE0
#endif /* NO_BIT_DEFINES */

// ----- UEIE bits --------------------
typedef union {
  struct {
    unsigned char PID_ERR:1;
    unsigned char CRC5:1;
    unsigned char CRC16:1;
    unsigned char DFN8:1;
    unsigned char BTO_ERR:1;
    unsigned char WRT_ERR:1;
    unsigned char OWN_ERR:1;
    unsigned char BTS_ERR:1;
  };
} __UEIE_bits_t;
extern volatile __UEIE_bits_t __at(UEIE_ADDR) UEIE_bits;

#ifndef NO_BIT_DEFINES
#define PID_ERR              UEIE_bits.PID_ERR
#define CRC5                 UEIE_bits.CRC5
#define CRC16                UEIE_bits.CRC16
#define DFN8                 UEIE_bits.DFN8
#define BTO_ERR              UEIE_bits.BTO_ERR
#define WRT_ERR              UEIE_bits.WRT_ERR
#define OWN_ERR              UEIE_bits.OWN_ERR
#define BTS_ERR              UEIE_bits.BTS_ERR
#endif /* NO_BIT_DEFINES */

// ----- UEP0 bits --------------------
typedef union {
  struct {
    unsigned char EP_STALL:1;
    unsigned char EP_IN_EN:1;
    unsigned char EP_OUT_EN:1;
    unsigned char EP_CTL_DIS:1;
    unsigned char PID2:1;
    unsigned char PID3:1;
    unsigned char DATA01:1;
    unsigned char UOWN:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char BSTALL:1;
    unsigned char DTS:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char OWN:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char PID0:1;
    unsigned char PID1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __UEP0_bits_t;
extern volatile __UEP0_bits_t __at(UEP0_ADDR) UEP0_bits;

#ifndef NO_BIT_DEFINES
#define EP_STALL             UEP0_bits.EP_STALL
#define EP_IN_EN             UEP0_bits.EP_IN_EN
#define EP_OUT_EN            UEP0_bits.EP_OUT_EN
#define BSTALL               UEP0_bits.BSTALL
#define PID0                 UEP0_bits.PID0
#define EP_CTL_DIS           UEP0_bits.EP_CTL_DIS
#define DTS                  UEP0_bits.DTS
#define PID1                 UEP0_bits.PID1
#define PID2                 UEP0_bits.PID2
#define PID3                 UEP0_bits.PID3
#define DATA01               UEP0_bits.DATA01
#define UOWN                 UEP0_bits.UOWN
#define OWN                  UEP0_bits.OWN
#endif /* NO_BIT_DEFINES */

// ----- UIE bits --------------------
typedef union {
  struct {
    unsigned char USB_RST:1;
    unsigned char UERR:1;
    unsigned char ACTIVITY:1;
    unsigned char TOK_DNE:1;
    unsigned char UIDLE:1;
    unsigned char STALL:1;
    unsigned char :1;
    unsigned char :1;
  };
} __UIE_bits_t;
extern volatile __UIE_bits_t __at(UIE_ADDR) UIE_bits;

#ifndef NO_BIT_DEFINES
#define USB_RST              UIE_bits.USB_RST
#define UERR                 UIE_bits.UERR
#define ACTIVITY             UIE_bits.ACTIVITY
#define TOK_DNE              UIE_bits.TOK_DNE
#define UIDLE                UIE_bits.UIDLE
#define STALL                UIE_bits.STALL
#endif /* NO_BIT_DEFINES */

// ----- USTAT bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char IN:1;
    unsigned char ENDP0:1;
    unsigned char ENDP1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __USTAT_bits_t;
extern volatile __USTAT_bits_t __at(USTAT_ADDR) USTAT_bits;

#ifndef NO_BIT_DEFINES
#define IN                   USTAT_bits.IN
#define ENDP0                USTAT_bits.ENDP0
#define ENDP1                USTAT_bits.ENDP1
#endif /* NO_BIT_DEFINES */

#endif
