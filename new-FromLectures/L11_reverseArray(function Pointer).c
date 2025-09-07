#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
void reverse(int *a, int n)
{
    int *st = a;
    int *end = a + n - 1;
    while (st < end)
    {
        int t = *st;
        *st = *end;
        *end = t;
        st++; end--; 
    }
}
int main(){
    int n; scanf("%d", &n); int a[n];
    for (int i = 0; i < n; i++)scanf("%d",&a[i]);
    reverse(a, n);
    for (int i = 0; i < n; i++)printf("%d ",a[i]);
    
    return 0;
}
//  Write a function (using a pointer parameter) that reverses the elements of a given array. Finally print the elements. Write a program to perform the above tasks