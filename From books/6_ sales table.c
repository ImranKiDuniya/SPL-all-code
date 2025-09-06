#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct car
{
    char type[20];
    char month[10];
    int price;
}a;

int main(){
    struct car a[] = {
        {"MARUTI-800",	"02/01",	210000},
        {"MARUTI-DX",	"07/01",	265000},
        {"GYPSY",	"04/02",	315750},
       { "MARUTI-VAN",	"08/02",	240000},
    };
    char Typ[20], stM[20], end[20];
    scanf("%s %s %s", Typ, stM, end);
    for (int i = 0; i < 4; i++)
    {
        if(strcmp(a[i].type, Typ) == 0 && strcmp(a[i].month, stM) >= 0 && strcmp(a[i].month, end) <= 0) 
        printf("%s  %s  %d",a[i].type, a[i].month, a[i].price);
    }
    
    return 0;
}
// A Maruti car dealer maintains a record of sales of various vehicles in the following form:

// Vehicle type	Month of sales	Price
// MARUTI-800	02/01	210000
// MARUTI-DX	07/01	265000
// GYPSY	04/02	315750
// MARUTI-VAN	08/02	240000

// Write a program to read this data into a table of strings and output the details of a particular vehicle sold during a specified period. The program should request the user to input the vehicle type and the period (starting month, ending month).