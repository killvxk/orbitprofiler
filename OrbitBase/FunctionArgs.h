#pragma once

#include "OrbitDbgHelp.h"
#include "cvconst.h"
#include "BaseTypes.h"

#include <string>
#include <vector>

//-----------------------------------------------------------------------------
struct Argument
{
    Argument() { memset(this, 0, sizeof(*this)); }
    DWORD      m_Index;
    CV_HREG_e  m_Reg;
    DWORD      m_Offset;
    DWORD      m_NumBytes;
};

//-----------------------------------------------------------------------------
struct FunctionArgInfo
{
    FunctionArgInfo() : m_NumStackBytes(0), m_ArgDataSize(0) {}
    int m_NumStackBytes;
    int m_ArgDataSize;
    std::vector< Argument > m_Args;
};