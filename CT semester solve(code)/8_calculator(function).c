#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

float add(float a, float b){return a+b; }
float sub(float a, float b){return a-b; }
float mul(float a, float b){return a*b; }
float div(float a, float b){return a/b; }
int rem(int a, int b){return a%b; }

int main(){
    float a, b; int ch; scanf("%f%f%d", &a, &b, &ch);
    switch (ch)
    {
    case 1:
        printf("%.2f", add(a,b));
        break;
    case 2:
        printf("%.2f", sub(a,b));
        break;
    case 3:
        printf("%.2f", mul(a,b));
        break;
    case 4:
        printf("%.2f", div(a,b));
        break;
    case 5:
        printf("%.2f", rem((int)a,(int)b));
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}