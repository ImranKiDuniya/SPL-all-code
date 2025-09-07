#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
float f(float x)
{
    return x*x + 1;
}
float curve(float a, float b, int n)
{
    float h = (b-a)/n;
    float area = 0.0;
    for (int i = 0; i < n; i++)
    {
        float x0 = a + i*h;
        float x1 = x0 + h;
        float h1 = f(x0);
        float h2 = f(x1);
        area += 0.5*(h1 + h2)*h;
    }
    return area;
}
int main(){
    float a,b;
    int n; scanf("%f%f%d",&a,&b,&n);
    printf("%.2f",curve(a,b,n));
    return 0;
}