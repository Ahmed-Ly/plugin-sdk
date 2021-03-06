/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"

class CPathNode {
public:
    short m_wPathData;
    short m_wPosX;
    short m_wPosY;
    short m_wPosZ;
};

VALIDATE_SIZE(CPathNode, 0x8);