#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char c[6] = "imran";
    char ch[6] = "imran";
    int i;
    while (c[i] == ch[i] && c[i] != '\0' && ch[i] != '\0')i++;
    if(c[i] == '\0' && ch[i] == '\0') printf("Equal");
    else printf("Not");
    return 0;
}