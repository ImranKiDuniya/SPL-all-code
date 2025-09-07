#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct personal
{
    char name[20];
    int salary;
}perosn;

int main(){
    scanf("%s %d", perosn.name, &perosn.salary);
    printf("%s\n%d",perosn.name, perosn.salary);
    
    return 0;
}
// Define a structure type, struct personal that would contain person name, date of joining and salary. Using this structure, Write a program to read this information for one person from the keyboard and print the same on the screen