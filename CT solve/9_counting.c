#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    int dgt = 0, chr = 0, alp = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(isdigit(ch[i]))dgt++;
        else if(isalpha(ch[i]))alp++;
        else if(!isspace(ch[i]))chr++;
    }
    printf("%d %d %d", dgt , chr, alp);
    return 0;
}