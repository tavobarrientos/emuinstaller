#include "output.h"
#include "common.h"

Output::Output() : inReverse(false)
{
    this->clear();
}

Output::~Output()
{
    this->clear();
}

void Output::print(const std::string& message)
{
    this->messageLog.push_back(message);
    if(this->messageLog.size() > 29)
    {
        this->messageLog.erase(this->messageLog.begin());
    }
    this->printAll();
}

void Output::printAll()
{
    consoleClear();
    for (size_t i = 0; i < this->messageLog.size(); i++)
    {
        if(this->inReverse)
        {
            text(i, 0, this->messageLog[this->messageLog.size() - i - 1]);
        }
        else
        {
            text(i, 0, this->messageLog[i]);
        }
    }
}

void Output::clear() {
    while(!this->messageLog.empty())
    {
        this->messageLog.erase(this->messageLog.begin());
    }
}
void Output::setReverseFlag(const bool value)
{
    this->inReverse = value;
}
bool Output::getReverseFlag() const 
{
    return this->inReverse;
}