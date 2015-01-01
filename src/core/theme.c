#include <fcntl.h>
#include <dlfcn.h>
#include <stdio.h>

#include <united.h>

#include "theme.h"

int load_theme(const char *name)
{
    char path[4096];
    void *handle;

    sprintf(path, "/opt/united/usr/lib64/united/themeloaders/%s.so", name);
    if (access(path, F_OK) == -1)
    {
        fprintf(stderr, "[united] Can't access %s!\n", path);
        return 1;
    }
    printf("[united] Loading theme \"%s\"...\n", name);

    handle = dlopen(path, RTLD_LAZY);
    if (!handle)
    {
        fprintf(stderr, "[united] Theme loading error: %s\n", dlerror());
        return 1;
    }

    dlerror();

    *(unsigned char **) (&draw_primitive) = dlsym(handle, "theme_draw_primitive");

    return 0;
}
