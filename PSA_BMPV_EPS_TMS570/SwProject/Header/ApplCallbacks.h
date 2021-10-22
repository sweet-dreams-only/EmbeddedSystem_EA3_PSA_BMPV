/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : ApplCallbacks.h
* Module Description: Application defined Callback functions
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Jul 17 11:00:00 2013
 * %version:          1 %
 * %derived_by:       nzx5jd %
 * %date_modified:    Wed Feb 26 16:28:31 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                               SCR #
 * --------  -------  --------  ------------------------------------------------------------------------------  -------
 * 07/17/13   1       OT        Initial Haitec version
 * 01/27/14   2       OT        Removed Fee dummy variable
 */


#ifndef APPLCALLBACKS_H
#define APPLCALLBACKS_H


extern uint8 Appdesc_MCU_Reset(void);
extern void Appl_WaitNvMReady(const uint16 blockNumber, const boolean fastMode);
extern void SystemTick(void);


#endif /*APPLCALLBACKS_H*/
