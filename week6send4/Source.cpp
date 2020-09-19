#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sqar(int);
int main()
{
    int input;
    scanf("%d", &input);
    sqar(input);
    return 0;
}
void sqar(int input) {
    int i, j;
    for (i = 0; i < input; i++) {
        for (j = 0; j < input; j++) {
            printf("*");
        }
        printf("\n");
    }
}