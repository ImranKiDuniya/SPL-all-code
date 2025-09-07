#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
void subset(int arr[], int idx, int n, int sSet[], int sSize)
{
    if(idx == n)
    {
        for (int i = 0; i < sSize; i++)printf("%d ",sSet[i]);
        printf("\n");
        return;
    }
    sSet[sSize] = arr[idx];
    subset(arr, idx+1, n, sSet, sSize+1);
    subset(arr, idx+1, n, sSet, sSize);
}
int main(){
    int arr[3] = {1,2,3};
    int sSet[10];
    subset(arr, 0, 3, sSet, 0);
    return 0;
}