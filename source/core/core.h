#pragma one

#ifndef __CORE_H_ICLUDED__
#define __CORE_H_ICLUDED__

#include <3ds.h>
#include <string>
#include <vector>
#include <stdio.h>

#include <stdint.h>
#include <stddef.h>

#include "../includes/utils.h"
#include "Output.h"
class Core 
{
    private:
    Output *output;

    public:
        Core(Output* output);
        ~Core();
        void Update(u32 kDown);       
};
#endif