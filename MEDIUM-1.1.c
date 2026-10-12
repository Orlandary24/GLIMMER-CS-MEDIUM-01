#include <stdio.h>

// 请补全以下代码
int hasCommonChar(const char *s1, const char *s2) {
    int mask1 = 0;
    int mask2 = 0;
    while(*s1 != '\0'){
        mask1=mask1 | (1<<(*s1 - 'a'));
    }
     while(*s2 != '\0'){
        mask2=mask2 | (1<<(*s2 - 'a'));
    }
    if(mask1 & mask2)
        return 1;


    return 0;
}