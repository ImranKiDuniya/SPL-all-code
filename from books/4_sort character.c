#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char s[10];
    scanf("%s",s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(s[i] > s[j])
            {
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("%s",s);
    return 0;
}
//Write a program which will read a string and rewrite it in the alphabetical order. For example, the word STRING should be written as GINRST.
