/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/CCriticalSection.h
*  PURPOSE:     Header for critical section class
*  DEVELOPERS:  Christian Myhre Lundheim <>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __CCRITICALSECTION_H
#define __CCRITICALSECTION_H

#include <windows.h>

class CCriticalSection
{
public:
    inline              CCriticalSection        ( void )            { InitializeCriticalSection ( &m_CriticalSection ); };
    inline              ~CCriticalSection       ( void )            { DeleteCriticalSection ( &m_CriticalSection ); };

    inline void         Lock                    ( void )            { EnterCriticalSection ( &m_CriticalSection ); };
    inline void         Unlock                  ( void )            { LeaveCriticalSection ( &m_CriticalSection ); };

private:
    CRITICAL_SECTION    m_CriticalSection;
};

#endif
