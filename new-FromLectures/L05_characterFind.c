#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
int find(char ch[], char c)
{
    for (int i = 0; i < strlen(ch); i++)
    {
        if(c == ch[i]) return 1;
    }
    return 0;
}
int main(){
    char ch[100], c;
    fgets(ch,sizeof(ch),stdin);
    scanf(" %c",&c);
    printf("%d",find(ch,c));
    return 0;
}