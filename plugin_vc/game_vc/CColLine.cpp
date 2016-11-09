/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColLine.h"

// Converted from fastcall void CColLine::CColLine(CVector const& start, CVector const& end) 0x410940
CColLine::CColLine(CVector const& start, CVector const& end) {
    plugin::Call<0x410940, CVector const&, CVector const&>(start, end);
}