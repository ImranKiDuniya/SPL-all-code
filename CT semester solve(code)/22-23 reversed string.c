#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char ch[20];
    scanf("%s",ch);
    int n = strlen(ch);
    for (int i = n-1; i >= 0; i--)printf("%c", ch[i]);
    
    return 0;
}