#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct time
{
    int h; int m; int s;
}t;

int main(){
    t.h = 16;
    t.m = 40;
    t.s = 51;
    printf("%d:%d:%d", t.h, t.m , t.s);
    return 0;
}
// Define a structure data type time_struct containing three members integer hour, integer minute and integer second. Write a program that would assign values to the individual members and display the time in the following form: 16:40:51