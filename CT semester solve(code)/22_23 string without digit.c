#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char c[20]; scanf("%s", c);
    int n = strlen(c);
    for (int i = 0; i < n; i++)
    {
        if(c[i] >= 48 && c[i] <= 57)continue;
        else printf("%c",c[i]);
    }
    
    return 0;
}