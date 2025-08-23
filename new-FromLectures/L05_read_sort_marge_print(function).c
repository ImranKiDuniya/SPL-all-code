#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
void read(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    for (int i = 0; i < n; i++) scanf("%d",&b[i]);
}
void sort(int a[], int b[], int n)
{   int t,tt;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(b[j] > b[j+1])
            {
                tt = b[j];
                b[j] = b[j+1];
                b[j+1] = tt;
            }
        }
        
    }
}
void marge(int a[], int b[], int m[], int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if(a[i] > b[j]) m[k++] = b[j++];
        else m[k++] = a[i++];
    }
    while(i<n) m[k++] = a[i++];
    while(j<n) m[k++] = b[j++];
}
void print(int m[], int n)
{
    for (int i = 0; i < 2*n; i++)printf("%d ",m[i]);
}
int main(){
    int n;scanf("%d",&n);int a[n],b[n],m[2*n];
    read(a,b,n);
    sort(a,b,n);
    marge(a,b,m,n);
    print(m,n);
    
    return 0;
}