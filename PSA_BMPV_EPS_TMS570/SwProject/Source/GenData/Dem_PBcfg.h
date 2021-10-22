/* -----------------------------------------------------------------------------
  Filename:    Dem_PBcfg.h
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nxtr Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
               Configuration   : C:\SynergyProjects\PSA_BMPV_EPS_TMS570-nzx5jd\PSA_BMPV_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U

  Generated by , 2015-01-15  12:47:26
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(DEM_PBCFG_H)
#define DEM_PBCFG_H

/* -----------------------------------------------------------------------------
    &&&~ Dem configuration type definitions for postbuild
 ----------------------------------------------------------------------------- */

typedef struct Dem_PBConfigTypeTag
{
  uint32 Dem_PBCfgLeader;
  uint32 Dem_EnableConditionInitialState;
  uint32 Dem_PBCfgTrailer;
} Dem_PBConfigType;



/* -----------------------------------------------------------------------------
    &&&~ Global Data Prototypes
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_PBCONST_ROOT
#include "MemMap.h"

extern CONST(Dem_PBConfigType, DEM_PBCFG) Dem_PBConfig;
#define DEM_STOP_SEC_PBCONST_ROOT
#include "MemMap.h"

#define DEM_START_SEC_PBCONST
#include "MemMap.h"
extern CONST(uint8, DEM_PBCFG) Dem_PostBuildProperty[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint16, DEM_PBCFG) Dem_DTCNumberTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_DTC_FTB_Table[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_AgingCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_FunctionalUnitTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_EventFlagsTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_DebounceIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_DebounceCountInTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_DebounceCountOutTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_DTCKindType, DEM_PBCFG) Dem_DtcKindTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_EventDestinationTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_EventDidIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_EventDidCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint16, DEM_PBCFG) Dem_DidNumberTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_DidSizeTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotNumberTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotSizeTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotDidIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_PBCFG) Dem_SnapshotDidCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
#define DEM_STOP_SEC_PBCONST
#include "MemMap.h"



#endif /* DEM_PBCFG_H */
