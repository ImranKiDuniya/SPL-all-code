#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    float unt, bill; scanf("%f", &unt);
    if(unt <= 50) bill = 0.5*unt;
    else if(unt <= 150) bill = (unt - 50)*0.75 + (50*0.5); 
    else if(unt <= 250) bill = (unt - 150)*1.20 + (50*0.5) + (0.75*100);
    else if(unt > 250) bill = (unt - 250)*1.25 + (50*0.5) + (0.75*100)+ (100*1.20);

    bill = 0.2*bill; 
    printf("%02f", bill);
    return 0;
}