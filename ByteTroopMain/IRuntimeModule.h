#pragma once
#include"Interface.h"
namespace BYTETROOP{
    Interface IRuntimeModule{
        public:
        virtual ~IRuntimeModule(){};// otherwise derived class only call this destructor;
        virtual int Initialize()=0;
        virtual void Finalize()=0;
        virtual void Tick()=0;
	};
}