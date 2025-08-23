#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
void sort(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int AnagramCheck(char s[], char ss[])
{
    if(strlen(s) != strlen(ss)) return 0;

    for (int i = 0; s[i]; i++) s[i] = tolower(s[i]); // convert to lower
    for (int i = 0; ss[i]; i++) ss[i] = tolower(ss[i]);
    sort(s);
    sort(ss);
    if(strcmp(s,ss) == 0) return 1;
    else return 0; 
}
int main(){
    char s[100], ss[100];
    scanf("%s%s", s, ss);

    if(AnagramCheck(s,ss)) printf("YES");
    else printf("NO");
    return 0;
}
// Write a program in C to check whether two given strings are an anagram using function.