#include <stdio.h>
#include <string.h>
#include "mod1.h"
#include "mod2.h"
#include "proj_main.h"

GInfo g_info = {0};

void main_func1(void)
{
    if (g_info.thredhold >11)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
}

int main(int argc, char *argv[])
{
    mod1_func1();
    mod2_func1();
    if (g_info.thredhold >10)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
    if (g_info.thredhold >10)
    {
        printf("%s:%d\n",__FILE__,__LINE__);
    }
    return 0;
}
