/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：floating-point.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月10日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    printf("%f\n", (3.14 + 1e20) - 1e20);
    printf("%f", 3.14 + (1e20 - 1e20));

    return 0;
}

