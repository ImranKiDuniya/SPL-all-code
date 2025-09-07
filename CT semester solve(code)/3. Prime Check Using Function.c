#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
int prime (int n)
{
    if(n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;scanf("%d",&n);
    if(prime(n))printf("YES");
    else printf("NO");
    return 0;
}
//Write a program in C to check whether a number is a prime number or not using the function.