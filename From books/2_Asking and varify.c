#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char ans[20];
    int cnt = 0;
    while (cnt < 3)
    {
        scanf("%s",ans); 
        if(strcmp(ans, "Dennis") == 0 || strcmp(ans, "dennis") == 0)
        {
            printf("Correct answer\n");
            return 0;
        }
        else printf("try again\n");
        cnt++;
    }
    printf("Correct answer is : Dannis Ritchie\n");
   return 0;
}
// Write a program to do the following:
// (a) To output the question “Who is the inventor of C?”
// (b) To accept an answer.
// (c) To print out “Good” and then stop, if the answer is correct.
// (d) To output the message “try again”, if the answer is wrong.
// (e) To display the correct answer when the answer is wrong even at the third attempt and stop.
