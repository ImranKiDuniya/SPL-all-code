#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char text[100] = "It is good to program in PASCAL lnguage";
    char *p;
    p = strstr(text, "PASCAL");
    if(p != NULL) 
    {
        strcpy(p, "C");
        strcat(text, " language");
    }
    printf("%s", text);
    return 0;
}
// Write a program to replace a particular word by another word in a given string. For example, the word “PASCAL” should be replaced by “C” in the text “It is good to program in PASCAL language.