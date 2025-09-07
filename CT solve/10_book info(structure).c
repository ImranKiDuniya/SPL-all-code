#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct book
{
    char name[100];
    char author[100];
    int page;
    float price;
}a;

int main(){
    scanf("%s %s %d %f", a.name, a.author, &a.page, &a.price);
    printf("%s %s %d %.2f", a.name, a.author, a.page, a.price);
    
    return 0;
}