#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

struct time // initialize
{
    int h; int m; int s;
} t, tt,sum;
struct time add(struct time t, struct time tt) // function for add
{
    struct time ans;
    ans.s = t.s + tt.s;
    ans.m = t.m + tt.m + (ans.s/60);
    ans.s %= 60;
    ans.h = t.h + tt.h + (ans.m / 60);
    ans.m %= 60;
    return ans;
}

int main(){
    scanf("%d%d%d",&t.h, &t.m, &t.s);
    scanf("%d%d%d",&tt.h, &tt.m, &tt.s);
    sum = add(t,tt);
    printf("%02d:%02d:%02d", sum.h, sum.m, sum.s);
    return 0;
}

//Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.