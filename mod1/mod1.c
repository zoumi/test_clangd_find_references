#include <stdio.h>
#include "proj_main.h"

void mod1_func1(void)
{
    if (g_info.thredhold > 10)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
}

#if 0
void mod1_func2(void)
{
    if (g_info.Nested.nested_thredhold > 10)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
}
#endif
