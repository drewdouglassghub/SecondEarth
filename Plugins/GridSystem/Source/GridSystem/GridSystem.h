// GridSystem.h
#pragma once

#include "Modules/ModuleManager.h"

class FGridSystemModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};