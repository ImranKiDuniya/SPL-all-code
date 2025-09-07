#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int i,j,k;
    char c[100], cc[100],ccc[100], ch[1000];
    gets(c);
    gets(cc);
    gets(ccc);
    for ( i = 0; c[i] != '\0' ; i++)ch[i] = c[i];
    ch[i] = ' ';
    for ( j = 0; cc[j] != '\0' ; j++)ch[i+j+1] = cc[j];
    ch[i+j+1] = ' ';
    for ( k = 0; c[k] != '\0' ; k++)ch[i+j+k+2] = ccc[k];
    ch[i+j+k+2] = '\0';
    printf("%s",ch);
    return 0;
}