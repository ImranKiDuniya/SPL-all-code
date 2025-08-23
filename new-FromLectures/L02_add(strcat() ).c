#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char c[100] = "Imran ";
    char cc[10] = "hossain ";
    strcat(c,cc);
    printf("%s\n",c);

    strcat(c,"faim ");
    printf("%s\n",c);

    strcat(strcat(c,cc),cc);
    printf("%s\n",c);
    return 0;
}