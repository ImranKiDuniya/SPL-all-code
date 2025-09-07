#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
union data
{
    int i;
    float f;
}a;

void printI(union data d)
{
    printf("%d", d.i);
}
void printF(union data d)
{
    printf(" %f", d.f);
}
int main(){
    a.i = 10;
    printI(a);

    a.f = 10.00;
    printF(a);
    return 0;
}