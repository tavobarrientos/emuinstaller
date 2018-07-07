#include "core.h"

Core::Core(Output* output)
{
    this->output = output;
    this->output->print("Inicializando...");
}

Core::~Core()
{
    this->output->print("Destruyendo core...");
}

void Core::Update(u32 kDown)
{
}
