#include<stdio.h>
#include<string.h>
#include<math.h>
int fact(int n)
{
    int f;
    if(n == 1) return 1;
    else f = n*fact(n-1);
    return f; 
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}