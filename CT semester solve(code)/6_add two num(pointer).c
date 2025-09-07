#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){

    int a,b, sum;
    int *p = &a, *pp = &b, *ppp = &sum;
    scanf("%d %d", p, pp);
    *ppp = *p + *pp;
    printf("%d", *ppp);
    return 0;
}