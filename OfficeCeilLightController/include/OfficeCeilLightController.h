#pragma once

#include "OfficeCeilLight.h"

namespace PhysicalToyController
{
    class OfficeCeilLightController
    {
    public:
        String currentMode;
        String* currentModePtr;

        OfficeCeilLightController();

        Toy::OfficeCeilLight officeLamp {};

        void setTogglePin(uint8_t pin);

        void init() const;

        void changeMode(char* modeToSet);
    };
}
