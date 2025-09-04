#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
void addMatrix(int *a, int *b, int *c, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(c + i*m + j) = *(a + i*m + j)+ *(b + i*m + j);
        }
    }
}
int main(){
    int n,m; scanf("%d%d",&n,&m);
    int a[n][m], b[n][m], c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)scanf("%d",&a[i][j]);
        for (int j = 0; j < m; j++)scanf("%d",&b[i][j]);
    }
    addMatrix((int *)a, (int *)b, (int *)c, n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
// Write a function using pointers to add two matrices and to return the resultant matrix to the calling function. Finally print the resultant matrix. Write a program to perform the above tasks.