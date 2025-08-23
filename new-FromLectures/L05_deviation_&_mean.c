#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
float mean(int a[], int n)
{
    float sum = 0.0;
    for (int i = 0; i < n; i++)sum += a[i];
    return sum/n;
}
float stdDev(int a[], int n)
{
    float m = mean(a,n);
    float dev = 0.0;
    for (int i = 0; i < n; i++) dev += pow(a[i] - m , 2);
    return sqrt(dev/n);
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)scanf("%d",&a[i]);
    float m = mean(a,n);
    float dev = stdDev(a,n);
    printf("mean = %.2f\nstandardDeviation = %.2f", m,dev);
    return 0;
}