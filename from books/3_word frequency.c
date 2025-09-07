#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char text[50], w[10], cur[10];
    int i = 0, j = 0, cnt = 0;
    gets(text);
    scanf("%s", w);
    while (1)
    {
        if(text[i] != ' ' && text[i] != '\0') cur[j++] = text[i];
        else 
        {
            cur[j] = '\0';
            if(strcmp(cur,w) == 0)cnt++;
            j = 0;
        }
        if(text[i] == '\0')break;
        i++;
    }
    printf("%d",cnt);
    return 0;
}
// Write a program which will read a text and count all occurrences of a particular word