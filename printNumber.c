#include <stdio.h>
#include "lab04.h"

int num[10];
char *str;
int numCount;

void printNumber(){
    numCount = sizeof(num) / sizeof(int);

    printf("\"請輸入十個數字, 用空格隔開\"");

    str = (char *) "%d %d %d %d %d %d %d %d %d %d";

    scanf(str, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);

    int i;
    for (i = 0; i < numCount; i++) {
        printf("您輸入的數字： %d\n", num[i]);
    }
}

