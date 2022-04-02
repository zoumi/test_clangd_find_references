#include <stdio.h>
#include "proj_main.h"

void mod2_func1(void)
{
    if (g_info.thredhold > 10)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
}
