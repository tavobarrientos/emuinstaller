#pragma one

#ifndef __TICKET_H_ICLUDED__
#define __TICKET_H_ICLUDED__

#include <3ds.h>
#include <string>
#include <vector>
#include <stdio.h>


#include <stdint.h>
#include <stddef.h>

#include "../types.h"

using namespace std;

class Ticket {
    public:
        Result ProcessCIA(std::string dir, std::string title);
        void CreateTicket(std::string titleId, std::string encTitleKey, char* titleVersion, std::string outputFullPath);
        void InstallTicket(std::string FullPath, std::string TitleId);
        Result DownloadTitle(std::string titleId, std::string encTitleKey, std::string titleName, std::string region);
    private:
        char* parse_string(const std::string &s);
        char parse_hex(char c);
};

#endif