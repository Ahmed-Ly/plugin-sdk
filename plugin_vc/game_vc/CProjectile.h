/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CObject.h"

class CProjectile : public CObject {
public:
    
    //funcs
    CProjectile(int arg0);
};

VALIDATE_SIZE(CProjectile, 0x194);