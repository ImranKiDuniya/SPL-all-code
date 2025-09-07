#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    FILE *fdata, *fodd, *feven;
    int num;

    fdata = fopen("data.txt", "r");
    fodd = fopen("odd.txt", "w");
    feven = fopen("even.txt", "w");
    if(fdata == NULL || fodd == NULL || feven == NULL)
    {
        printf("Error");
        return 1;
    }

    while (fscanf(fdata, "%d", &num) != EOF)
    {
        if(num%2 == 0) fprintf(feven, "%d\n", num);
        else fprintf(fodd, "%d\n", num);
    }
    
    fclose(fdata);
    fclose(fodd);
    fclose(feven);
    return 0;
}