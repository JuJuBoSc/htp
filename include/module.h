#ifndef _MODULE_H_
#define _MODULE_H_

#include "htp.h"
#include "mm.h"

#include <Windows.h>

struct Module
{
    HMODULE   handle;
    char      module_path[MAX_PATH];
    uintptr_t base_address;
    size_t    module_size;
    bool      broker_loaded; // Module loaded using broker
    MMState   state;
};

bool GetProcessModules(struct HTPHandle* handle);
bool CleanupModuleList(struct HTPHandle* handle);

#endif // _MODULE_H_