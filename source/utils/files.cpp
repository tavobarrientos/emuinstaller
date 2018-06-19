#include "files.h"

int Files::mkpath(std::string folder, mode_t mode)
{
    size_t pre=0, pos;
    std::string dir;
    int result = 0;

    if(folder[folder.size()-1] != '/')
    {
        folder += '/';
    }

    
    while((pos = folder.find_first_of('/', pre)) != std::string::npos){
        dir = folder.substr(0, pos++);
        pre = pos;
        if(dir.size() == 0) continue;
        if((result=mkdir(dir.c_str(), mode)) && errno != EEXIST)
        {
            return result;
        }
    }
    return result;
}

std::string Files::GetFileContents(const char *filename)
{
    std::ifstream in(filename, std::ios::in | std::ios::binary);
}