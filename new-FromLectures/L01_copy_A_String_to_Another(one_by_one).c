#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char c[100],ch[100];
    gets(c);
    int i;
    for ( i = 0; c[i] != '\0'; i++)ch[i] = c[i];
    ch[i] = '\0';
    printf("%s",ch);
    
    return 0;
}