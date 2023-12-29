//  Copyright (C) Sven Rosvall (sven@rosvall.ie)
//  This file is part of VLCB-Arduino project on https://github.com/SvenRosvall/VLCB-Arduino
//  Licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
//  The full licence can be found at: http://creativecommons.org/licenses/by-nc-sa/4.0
//
//

#pragma once

#include "UserInterface.h"
#include "Configuration.h"
#include "vlcbdefs.hpp"

class MockUserInterface : public VLCB::UserInterface
{
public:
  virtual void process(const VLCB::Command *cmd) override;
  
  VlcbModeParams getIndicatedMode();

private:
  VlcbModeParams indicatedMode = MODE_UNINITIALISED;
};
