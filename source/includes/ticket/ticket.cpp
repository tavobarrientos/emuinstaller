#include "ticket.h"

#include "../cia/cia.h"
#include "../../utils/files.h"

Result Ticket::ProcessCIA(std::string dir, std::string title)
{
    FILE *tik = fopen((dir + "/ticket").c_str(), "rb");

    if(!tik)
    {
        return -1;
    }

    TIK_CONTEXT tik_context = process_tik(tik);

    return 1;
}


void Ticket::CreateTicket(std::string titleId, std::string encTitleKey, char* titleVersion, std::string outputFullPath)
{
}


void Ticket::InstallTicket(std::string FullPath, std::string TitleId)
{
    Files files;
    Handle hTik;
    u32 writtenByte;
    std::string curr = files.GetFileContents(FullPath.c_str()); //Files::GetFileContents(FullPath.c_str());

    char *nTitleId = parse_string(TitleId);
    u64 titleId = 10; // u8_to_u64
    free(nTitleId);
    AM_DeleteTicket(titleId);

    AM_InstallTicketBegin(&hTik);
    FSFILE_Write(hTik, &writtenByte, 0, curr.c_str(), 0x10000, 0);
    AM_InstallTicketFinish(hTik);
    printf("Ticket instalado");
    remove(FullPath.c_str());
}


Result Ticket::DownloadTitle(std::string titleId, std::string encTitleKey, std::string titleName, std::string region)
{
    return -1;
}

char* Ticket::parse_string(const std::string &s)
{
    char* buffer = new char[s.size() / 2];
    for (std::size_t i = 0; i != s.size() / 2; ++i)
        buffer[i] = 16 * parse_hex(s[2 * i]) + parse_hex(s[2 * i + 1]);
    return buffer;
}

char Ticket::parse_hex(char c)
{
    if ('0' <= c && c <= '9') return c - '0';
    if ('A' <= c && c <= 'F') return c - 'A' + 10;
    if ('a' <= c && c <= 'f') return c - 'a' + 10;
    std::abort();
}