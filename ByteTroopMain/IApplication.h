#pragma once
#include "Interface.h"
#include "IRuntimeModule.h"
namespace BYTETROOP{
	// Interface of application
    Interface IApplication: implements IRuntimeModule{
        public:
        virtual int Initialize()=0;// why cannot we put it in construct
        virtual void Finalize()=0;
        virtual void Tick()=0;
        virtual bool IsQuit()=0;
	};
}