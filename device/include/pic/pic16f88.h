//
// Register Declarations for Microchip 16F88 Processor
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
#ifndef P16F88_H
#define P16F88_H

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
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define PIR2_ADDR	0x000D
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define TMR2_ADDR	0x0011
#define T2CON_ADDR	0x0012
#define SSPBUF_ADDR	0x0013
#define SSPCON_ADDR	0x0014
#define CCPR1L_ADDR	0x0015
#define CCPR1H_ADDR	0x0016
#define CCP1CON_ADDR	0x0017
#define RCSTA_ADDR	0x0018
#define TXREG_ADDR	0x0019
#define RCREG_ADDR	0x001A
#define ADRESH_ADDR	0x001E
#define ADCON0_ADDR	0x001F
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISB_ADDR	0x0086
#define PIE1_ADDR	0x008C
#define PIE2_ADDR	0x008D
#define PCON_ADDR	0x008E
#define OSCCON_ADDR	0x008F
#define OSCTUNE_ADDR	0x0090
#define PR2_ADDR	0x0092
#define SSPADD_ADDR	0x0093
#define SSPSTAT_ADDR	0x0094
#define TXSTA_ADDR	0x0098
#define SPBRG_ADDR	0x0099
#define ANSEL_ADDR	0x009B
#define CMCON_ADDR	0x009C
#define CVRCON_ADDR	0x009D
#define ADRESL_ADDR	0x009E
#define ADCON1_ADDR	0x009F
#define WDTCON_ADDR	0x0105
#define EEDATA_ADDR	0x010C
#define EEADR_ADDR	0x010D
#define EEDATH_ADDR	0x010E
#define EEADRH_ADDR	0x010F
#define EECON1_ADDR	0x018C
#define EECON2_ADDR	0x018D

//
// Memory organization.
//



//         LIST
// P16F88.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16F88 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16F88
//       2. LIST directive in the source file
//               LIST   P=PIC16F88
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================

//Rev:   Date:    Reason:

//1.00   07/29/02 Initial Release
//1.01	09/18/02 Changed name of bit-2 in the OSCCON register to IOFS
//1.02	01/10/03 Added bit names for TXSTA & RCSTA registers.
//1.03	01/24/03 Changed Config bit CCP1_RB2 to CCP1_RB0
//1.04	12/02/03 Modified the WRT1:WRT0 bit definition in Config Word 1.
//1.05	02/08/04 Changed bit in _CONFIG1 example from CCP1_RB2 to CCP1_RB0.

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16F88
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
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (PIR2_ADDR)                    PIR2;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (TMR2_ADDR)                    TMR2;
extern __sfr  __at (T2CON_ADDR)                   T2CON;
extern __sfr  __at (SSPBUF_ADDR)                  SSPBUF;
extern __sfr  __at (SSPCON_ADDR)                  SSPCON;
extern __sfr  __at (CCPR1L_ADDR)                  CCPR1L;
extern __sfr  __at (CCPR1H_ADDR)                  CCPR1H;
extern __sfr  __at (CCP1CON_ADDR)                 CCP1CON;
extern __sfr  __at (RCSTA_ADDR)                   RCSTA;
extern __sfr  __at (TXREG_ADDR)                   TXREG;
extern __sfr  __at (RCREG_ADDR)                   RCREG;
extern __sfr  __at (ADRESH_ADDR)                  ADRESH;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;

extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISB_ADDR)                   TRISB;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PIE2_ADDR)                    PIE2;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (OSCCON_ADDR)                  OSCCON;
extern __sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
extern __sfr  __at (PR2_ADDR)                     PR2;
extern __sfr  __at (SSPADD_ADDR)                  SSPADD;
extern __sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
extern __sfr  __at (TXSTA_ADDR)                   TXSTA;
extern __sfr  __at (SPBRG_ADDR)                   SPBRG;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;
extern __sfr  __at (CMCON_ADDR)                   CMCON;
extern __sfr  __at (CVRCON_ADDR)                  CVRCON;
extern __sfr  __at (ADRESL_ADDR)                  ADRESL;
extern __sfr  __at (ADCON1_ADDR)                  ADCON1;

extern __sfr  __at (WDTCON_ADDR)                  WDTCON;
extern __sfr  __at (EEDATA_ADDR)                  EEDATA;
extern __sfr  __at (EEADR_ADDR)                   EEADR;
extern __sfr  __at (EEDATH_ADDR)                  EEDATH;
extern __sfr  __at (EEADRH_ADDR)                  EEADRH;

extern __sfr  __at (EECON1_ADDR)                  EECON1;
extern __sfr  __at (EECON2_ADDR)                  EECON2;

//----- STATUS Bits --------------------------------------------------------

//----- INTCON Bits --------------------------------------------------------

//----- PIR1 Bits ----------------------------------------------------------

//----- PIR2 Bits ----------------------------------------------------------

//----- T1CON Bits ---------------------------------------------------------

//----- T2CON Bits ---------------------------------------------------------

//----- SSPCON Bits --------------------------------------------------------

//----- CCP1CON Bits -------------------------------------------------------

//----- RCSTA Bits ---------------------------------------------------------

//----- ADCON0 Bits --------------------------------------------------------

//----- OPTION_REG Bits -----------------------------------------------------

//----- PIE1 Bits ----------------------------------------------------------

//----- PIE2 Bits ----------------------------------------------------------

//----- PCON Bits ----------------------------------------------------------

//----- OSCCON Bits -------------------------------------------------------

//----- OSCTUNE Bits -------------------------------------------------------

//----- SSPSTAT Bits -------------------------------------------------------

//----- TXSTA Bits ---------------------------------------------------------

//----- ADCON1 Bits --------------------------------------------------------

//----- WDTCON Bits --------------------------------------------------------

//----- CMCON Bits ---------------------------------------------------------

//----- CVRCON Bits --------------------------------------------------------

//----- EECON1 Bits --------------------------------------------------------

//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'1FF'
//         __BADRAM H'07'-H'09', H'1B'-H'1D'
// 		__BADRAM H'87'-H'89', H'91', H'95'-H'97', H'9A'
//         __BADRAM H'107'-H'109'
//         __BADRAM H'185', H'187'-H'189', H'18E'-H'18F'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _CONFIG1             0x2007
#define _CONFIG2             0x2008

//Configuration Byte 1 Options
#define _CP_ALL              0x1FFF
#define _CP_OFF              0x3FFF
#define _CCP1_RB0            0x3FFF
#define _CCP1_RB3            0x2FFF
#define _DEBUG_OFF           0x3FFF
#define _DEBUG_ON            0x37FF
#define _WRT_PROTECT_OFF     0x3FFF	//No program memory write protection
#define _WRT_PROTECT_256     0x3DFF	//First 256 program memory protected
#define _WRT_PROTECT_2048    0x3BFF	//First 2048 program memory protected
#define _WRT_PROTECT_ALL     0x39FF	//All of program memory protected
#define _CPD_ON              0x3EFF
#define _CPD_OFF             0x3FFF
#define _LVP_ON              0x3FFF
#define _LVP_OFF             0x3F7F
#define _BODEN_ON            0x3FFF
#define _BODEN_OFF           0x3FBF
#define _MCLR_ON             0x3FFF
#define _MCLR_OFF            0x3FDF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FF7
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FFB
#define _EXTRC_CLKOUT        0x3FFF
#define _EXTRC_IO            0x3FFE
#define _INTRC_CLKOUT        0x3FFD
#define _INTRC_IO            0x3FFC
#define _EXTCLK              0x3FEF
#define _HS_OSC              0x3FEE
#define _XT_OSC              0x3FED
#define _LP_OSC              0x3FEC

//Configuration Byte 2 Options
#define _IESO_ON             0x3FFF
#define _IESO_OFF            0x3FFD
#define _FCMEN_ON            0x3FFF
#define _FCMEN_OFF           0x3FFE



// To use the Configuration Bits, place the following lines in your source code
//  in the following format, and change the configuration value to the desired 
//  setting (such as CP_OFF to CP_ALL).  These are currently commented out here
//  and each __CONFIG line should have the preceding semicolon removed when
//  pasted into your source code.

//Program Configuration Register 1
//		__CONFIG    _CONFIG1, _CP_OFF & _CCP1_RB0 & _DEBUG_OFF & _WRT_PROTECT_OFF & _CPD_OFF & _LVP_OFF & _BODEN_OFF & _MCLR_OFF & _PWRTE_OFF & _WDT_OFF & _HS_OSC

//Program Configuration Register 2
//		__CONFIG    _CONFIG2, _IESO_OFF & _FCMEN_OFF



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
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char VCFG0:1;
    unsigned char VCFG1:1;
    unsigned char ADCS2:1;
    unsigned char ADFM:1;
  };
} __ADCON1_bits_t;
extern volatile __ADCON1_bits_t __at(ADCON1_ADDR) ADCON1_bits;

#ifndef NO_BIT_DEFINES
#define VCFG0                ADCON1_bits.VCFG0
#define VCFG1                ADCON1_bits.VCFG1
#define ADCS2                ADCON1_bits.ADCS2
#define ADFM                 ADCON1_bits.ADFM
#endif /* NO_BIT_DEFINES */

// ----- CCP1CON bits --------------------
typedef union {
  struct {
    unsigned char CCP1M0:1;
    unsigned char CCP1M1:1;
    unsigned char CCP1M2:1;
    unsigned char CCP1M3:1;
    unsigned char CCP1Y:1;
    unsigned char CCP1X:1;
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
#define CCP1Y                CCP1CON_bits.CCP1Y
#define CCP1X                CCP1CON_bits.CCP1X
#endif /* NO_BIT_DEFINES */

// ----- CMCON bits --------------------
typedef union {
  struct {
    unsigned char CM0:1;
    unsigned char CM1:1;
    unsigned char CM2:1;
    unsigned char CIS:1;
    unsigned char C1INV:1;
    unsigned char C2INV:1;
    unsigned char C1OUT:1;
    unsigned char C2OUT:1;
  };
} __CMCON_bits_t;
extern volatile __CMCON_bits_t __at(CMCON_ADDR) CMCON_bits;

#ifndef NO_BIT_DEFINES
#define CM0                  CMCON_bits.CM0
#define CM1                  CMCON_bits.CM1
#define CM2                  CMCON_bits.CM2
#define CIS                  CMCON_bits.CIS
#define C1INV                CMCON_bits.C1INV
#define C2INV                CMCON_bits.C2INV
#define C1OUT                CMCON_bits.C1OUT
#define C2OUT                CMCON_bits.C2OUT
#endif /* NO_BIT_DEFINES */

// ----- CVRCON bits --------------------
typedef union {
  struct {
    unsigned char CVR0:1;
    unsigned char CVR1:1;
    unsigned char CVR2:1;
    unsigned char CVR3:1;
    unsigned char :1;
    unsigned char CVRR:1;
    unsigned char CVROE:1;
    unsigned char CVREN:1;
  };
} __CVRCON_bits_t;
extern volatile __CVRCON_bits_t __at(CVRCON_ADDR) CVRCON_bits;

#ifndef NO_BIT_DEFINES
#define CVR0                 CVRCON_bits.CVR0
#define CVR1                 CVRCON_bits.CVR1
#define CVR2                 CVRCON_bits.CVR2
#define CVR3                 CVRCON_bits.CVR3
#define CVRR                 CVRCON_bits.CVRR
#define CVROE                CVRCON_bits.CVROE
#define CVREN                CVRCON_bits.CVREN
#endif /* NO_BIT_DEFINES */

// ----- EECON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char WR:1;
    unsigned char WREN:1;
    unsigned char WRERR:1;
    unsigned char FREE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char EEPGD:1;
  };
} __EECON1_bits_t;
extern volatile __EECON1_bits_t __at(EECON1_ADDR) EECON1_bits;

#ifndef NO_BIT_DEFINES
#define RD                   EECON1_bits.RD
#define WR                   EECON1_bits.WR
#define WREN                 EECON1_bits.WREN
#define WRERR                EECON1_bits.WRERR
#define FREE                 EECON1_bits.FREE
#define EEPGD                EECON1_bits.EEPGD
#endif /* NO_BIT_DEFINES */

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RBIF:1;
    unsigned char INTF:1;
    unsigned char TMR0IF:1;
    unsigned char RBIE:1;
    unsigned char INTE:1;
    unsigned char TMR0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#ifndef NO_BIT_DEFINES
#define RBIF                 INTCON_bits.RBIF
#define INTF                 INTCON_bits.INTF
#define TMR0IF               INTCON_bits.TMR0IF
#define RBIE                 INTCON_bits.RBIE
#define INTE                 INTCON_bits.INTE
#define TMR0IE               INTCON_bits.TMR0IE
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

// ----- OSCCON bits --------------------
typedef union {
  struct {
    unsigned char SCS0:1;
    unsigned char SCS1:1;
    unsigned char IOFS:1;
    unsigned char OSTS:1;
    unsigned char IRCF0:1;
    unsigned char IRCF1:1;
    unsigned char IRCF2:1;
    unsigned char :1;
  };
} __OSCCON_bits_t;
extern volatile __OSCCON_bits_t __at(OSCCON_ADDR) OSCCON_bits;

#ifndef NO_BIT_DEFINES
#define SCS0                 OSCCON_bits.SCS0
#define SCS1                 OSCCON_bits.SCS1
#define IOFS                 OSCCON_bits.IOFS
#define OSTS                 OSCCON_bits.OSTS
#define IRCF0                OSCCON_bits.IRCF0
#define IRCF1                OSCCON_bits.IRCF1
#define IRCF2                OSCCON_bits.IRCF2
#endif /* NO_BIT_DEFINES */

// ----- OSCTUNE bits --------------------
typedef union {
  struct {
    unsigned char TUN0:1;
    unsigned char TUN1:1;
    unsigned char TUN2:1;
    unsigned char TUN3:1;
    unsigned char TUN4:1;
    unsigned char TUN5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __OSCTUNE_bits_t;
extern volatile __OSCTUNE_bits_t __at(OSCTUNE_ADDR) OSCTUNE_bits;

#ifndef NO_BIT_DEFINES
#define TUN0                 OSCTUNE_bits.TUN0
#define TUN1                 OSCTUNE_bits.TUN1
#define TUN2                 OSCTUNE_bits.TUN2
#define TUN3                 OSCTUNE_bits.TUN3
#define TUN4                 OSCTUNE_bits.TUN4
#define TUN5                 OSCTUNE_bits.TUN5
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
    unsigned char SSPIE:1;
    unsigned char TXIE:1;
    unsigned char RCIE:1;
    unsigned char ADIE:1;
    unsigned char :1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#ifndef NO_BIT_DEFINES
#define TMR1IE               PIE1_bits.TMR1IE
#define TMR2IE               PIE1_bits.TMR2IE
#define CCP1IE               PIE1_bits.CCP1IE
#define SSPIE                PIE1_bits.SSPIE
#define TXIE                 PIE1_bits.TXIE
#define RCIE                 PIE1_bits.RCIE
#define ADIE                 PIE1_bits.ADIE
#endif /* NO_BIT_DEFINES */

// ----- PIE2 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char EEIE:1;
    unsigned char :1;
    unsigned char CMIE:1;
    unsigned char OSFIE:1;
  };
} __PIE2_bits_t;
extern volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;

#ifndef NO_BIT_DEFINES
#define EEIE                 PIE2_bits.EEIE
#define CMIE                 PIE2_bits.CMIE
#define OSFIE                PIE2_bits.OSFIE
#endif /* NO_BIT_DEFINES */

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char TMR2IF:1;
    unsigned char CCP1IF:1;
    unsigned char SSPIF:1;
    unsigned char TXIF:1;
    unsigned char RCIF:1;
    unsigned char ADIF:1;
    unsigned char :1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#ifndef NO_BIT_DEFINES
#define TMR1IF               PIR1_bits.TMR1IF
#define TMR2IF               PIR1_bits.TMR2IF
#define CCP1IF               PIR1_bits.CCP1IF
#define SSPIF                PIR1_bits.SSPIF
#define TXIF                 PIR1_bits.TXIF
#define RCIF                 PIR1_bits.RCIF
#define ADIF                 PIR1_bits.ADIF
#endif /* NO_BIT_DEFINES */

// ----- PIR2 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char EEIF:1;
    unsigned char :1;
    unsigned char CMIF:1;
    unsigned char OSFIF:1;
  };
} __PIR2_bits_t;
extern volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;

#ifndef NO_BIT_DEFINES
#define EEIF                 PIR2_bits.EEIF
#define CMIF                 PIR2_bits.CMIF
#define OSFIF                PIR2_bits.OSFIF
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

// ----- RCSTA bits --------------------
typedef union {
  struct {
    unsigned char RX9D:1;
    unsigned char OERR:1;
    unsigned char FERR:1;
    unsigned char ADDEN:1;
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
#define ADDEN                RCSTA_bits.ADDEN
#define CREN                 RCSTA_bits.CREN
#define SREN                 RCSTA_bits.SREN
#define RX9                  RCSTA_bits.RX9
#define RC9                  RCSTA_bits.RC9
#define NOT_RC8              RCSTA_bits.NOT_RC8
#define RC8_9                RCSTA_bits.RC8_9
#define SPEN                 RCSTA_bits.SPEN
#endif /* NO_BIT_DEFINES */

// ----- SSPCON bits --------------------
typedef union {
  struct {
    unsigned char SSPM0:1;
    unsigned char SSPM1:1;
    unsigned char SSPM2:1;
    unsigned char SSPM3:1;
    unsigned char CKP:1;
    unsigned char SSPEN:1;
    unsigned char SSPOV:1;
    unsigned char WCOL:1;
  };
} __SSPCON_bits_t;
extern volatile __SSPCON_bits_t __at(SSPCON_ADDR) SSPCON_bits;

#ifndef NO_BIT_DEFINES
#define SSPM0                SSPCON_bits.SSPM0
#define SSPM1                SSPCON_bits.SSPM1
#define SSPM2                SSPCON_bits.SSPM2
#define SSPM3                SSPCON_bits.SSPM3
#define CKP                  SSPCON_bits.CKP
#define SSPEN                SSPCON_bits.SSPEN
#define SSPOV                SSPCON_bits.SSPOV
#define WCOL                 SSPCON_bits.WCOL
#endif /* NO_BIT_DEFINES */

// ----- SSPSTAT bits --------------------
typedef union {
  struct {
    unsigned char BF:1;
    unsigned char UA:1;
    unsigned char R:1;
    unsigned char S:1;
    unsigned char P:1;
    unsigned char D:1;
    unsigned char CKE:1;
    unsigned char SMP:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char I2C_READ:1;
    unsigned char I2C_START:1;
    unsigned char I2C_STOP:1;
    unsigned char I2C_DATA:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_W:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_A:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_WRITE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_ADDRESS:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char R_W:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char D_A:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char READ_WRITE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char DATA_ADDRESS:1;
    unsigned char :1;
    unsigned char :1;
  };
} __SSPSTAT_bits_t;
extern volatile __SSPSTAT_bits_t __at(SSPSTAT_ADDR) SSPSTAT_bits;

#ifndef NO_BIT_DEFINES
#define BF                   SSPSTAT_bits.BF
#define UA                   SSPSTAT_bits.UA
#define R                    SSPSTAT_bits.R
#define I2C_READ             SSPSTAT_bits.I2C_READ
#define NOT_W                SSPSTAT_bits.NOT_W
#define NOT_WRITE            SSPSTAT_bits.NOT_WRITE
#define R_W                  SSPSTAT_bits.R_W
#define READ_WRITE           SSPSTAT_bits.READ_WRITE
#define S                    SSPSTAT_bits.S
#define I2C_START            SSPSTAT_bits.I2C_START
#define P                    SSPSTAT_bits.P
#define I2C_STOP             SSPSTAT_bits.I2C_STOP
#define D                    SSPSTAT_bits.D
#define I2C_DATA             SSPSTAT_bits.I2C_DATA
#define NOT_A                SSPSTAT_bits.NOT_A
#define NOT_ADDRESS          SSPSTAT_bits.NOT_ADDRESS
#define D_A                  SSPSTAT_bits.D_A
#define DATA_ADDRESS         SSPSTAT_bits.DATA_ADDRESS
#define CKE                  SSPSTAT_bits.CKE
#define SMP                  SSPSTAT_bits.SMP
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
    unsigned char T1RUN:1;
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
#define T1RUN                T1CON_bits.T1RUN
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

// ----- WDTCON bits --------------------
typedef union {
  struct {
    unsigned char SWDTEN:1;
    unsigned char WDTPS0:1;
    unsigned char WDTPS1:1;
    unsigned char WDTPS2:1;
    unsigned char WDTPS3:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char SWDTE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __WDTCON_bits_t;
extern volatile __WDTCON_bits_t __at(WDTCON_ADDR) WDTCON_bits;

#ifndef NO_BIT_DEFINES
#define SWDTEN               WDTCON_bits.SWDTEN
#define SWDTE                WDTCON_bits.SWDTE
#define WDTPS0               WDTCON_bits.WDTPS0
#define WDTPS1               WDTCON_bits.WDTPS1
#define WDTPS2               WDTCON_bits.WDTPS2
#define WDTPS3               WDTCON_bits.WDTPS3
#endif /* NO_BIT_DEFINES */

#endif
