#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    // Write a program to extract a portion of a character string and print the extracted string. Assume  that m characters are extracted, starting with the nth character .
    
    int n,m;scanf("%d%d",&n,&m);
    getchar();
    char c[1000];
    fgets(c,sizeof(c),stdin);
    for (int i = n; i <= m; i++)printf("%c",c[i]);
    return 0;
}