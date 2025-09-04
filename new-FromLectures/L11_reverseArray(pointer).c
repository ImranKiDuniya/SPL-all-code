#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)scanf("%d",(ptr+i));
    for (int i = n-1; i >= 0; i--)printf("%d ",*(ptr+i));
    
    return 0;
}
// Write a program using pointers to read in an array of integers and print its elements in reverse order