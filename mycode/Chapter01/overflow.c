/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：overflow.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月10日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {
    
    long int iVal = 200 * 300 * 400 * 500;

    printf("%ld", iVal);

    return 0;
}

