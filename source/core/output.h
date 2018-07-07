#pragma one

#ifndef __OUTPUT_H_ICLUDED__
#define __OUTPUT_H_ICLUDED__

#include <3ds.h>
#include <string>
#include <vector>
#include <stdio.h>

#include <stdint.h>
#include <stddef.h>

#include "../includes/utils.h"
class Output 
{
    private:
    std::vector<std::string> messageLog;
    bool inReverse;

    public:
        Output();
        ~Output();
        void print(const std::string& message);
        void printAll();
        void clear();
        void setReverseFlag(const bool value);
        bool getReverseFlag() const;        
};
#endif