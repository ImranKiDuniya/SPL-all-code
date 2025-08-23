#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int c = 0;
    char line[100], ch;
    do
    {
        ch = getchar();
        line[c] = ch;
        c++;
    } while (ch != '\n');
    c = c - 1;
    line[c] = '\0';
    printf("%s",line);
    return 0;
}