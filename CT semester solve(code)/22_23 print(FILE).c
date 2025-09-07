#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("log.text", "a+");
    if(!fp)
    {
        perror("failed");
        return 1;
    }
    fputc('H', fp);
    fputs("ello World\n", fp);
    fprintf(fp, "value = %d\n",42);
    fclose(fp);
    return 0;
}