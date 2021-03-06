#pragma one

#ifndef __FILES_H_ICLUDED__
#define __FILES_H_ICLUDED__

#include <3ds.h>
#include <string>
#include <errno.h>
#include <sys/stat.h>
#include <vector>
#include <stdio.h>

#include <stdint.h>
#include <stddef.h>

using namespace std;

class Files {
    public:
        int mkpath(std::string folder, mode_t mode);
        std::string GetFileContents(const char *filename);
};

#endif