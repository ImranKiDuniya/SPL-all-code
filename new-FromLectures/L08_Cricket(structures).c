#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct p
{
    char team[25];
    char player[25];
    float avgRun;
}pl[50];

int main(){
    int n;scanf("%d",&n);
    for (int i = 0; i < n; i++)scanf("%s %s %f",pl[i].team, pl[i].player, &pl[i].avgRun);
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)if(strcmp(pl[i].team , pl[j].team) == 0){ flag = 1;break;}
        if(!flag)
        {   printf("%s\n",pl[i].team);
            for (int j = 0; j < n; j++)
            {
                if(strcmp(pl[i].team, pl[j].team) == 0)printf("%s %.2f\n", pl[j].player, pl[j].avgRun);
            }
            
        }
        
    }
    
    
    return 0;
}
//  Define a structure called cricket that will describe the following information: player name, team name, batting average Using cricket, declare an array player with 50 elements and write a program to read the information about all the 50 players and print a team-wise list containing names of players with their batting average.