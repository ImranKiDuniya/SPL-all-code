#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){ 
    int a = 10, b = 12;
    Swap(&a, &b);
    printf("%d %d", a , b);
    return 0;
}