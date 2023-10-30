#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, *ptrNum;
    num = 5;
    ptrNum = &num;

    printf("Puntero: %d\n", *ptrNum);
    system("pause");
}