#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)scanf("%d", &a[i]);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)if(a[i] == a[j]){cnt++; break;}
    }
    printf("%d", cnt);
    
    return 0;
}