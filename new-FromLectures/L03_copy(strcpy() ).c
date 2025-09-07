#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char c[10] = "imran";
    char cc[10] = "fahim";
    strcpy(c,cc);
    printf("%s",c);

    return 0;
}