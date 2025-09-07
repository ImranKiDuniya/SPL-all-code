#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char c[10] = "abba";
    char cc[10]; strcpy(cc,c);
    char ch[10];
    int j = 0;
    for (int i = strlen(c)-1; i >= 0; i--)ch[j++] = c[i];
    ch[j] = '\0';
    if(strcmp(cc,ch) == 0) printf("Palindrome");
    else printf("Not");
    
    return 0;
}