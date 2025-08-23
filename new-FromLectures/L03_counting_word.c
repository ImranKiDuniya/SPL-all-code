#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char ch[100];
    int cnt = 0, word = 0;
    fgets(ch,sizeof(ch),stdin);
    for (int i = 0; i < strlen(ch); i++)
    {
        if(!isspace(ch[i]) && word == 0){cnt++; word = 1;}
        else if(isspace(ch[i])) word = 0;
    }
    printf("%d",cnt);
    return 0;
}