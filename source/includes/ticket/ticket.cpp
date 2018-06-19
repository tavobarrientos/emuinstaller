#include "ticket.h"

#include "../types.h"
#include "../cia/cia.h"

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
    
}


Result Ticket::DownloadTitle(std::string titleId, std::string encTitleKey, std::string titleName, std::string region)
{
    return -1;
}
