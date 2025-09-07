#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    char name[20];
    fgets(name, 20, stdin);
    int n = strlen(name);
    for (int i = 0; i < n; i++)printf("%d ", name[i]);
    
    return 0;
}
// WOF which reads your name from the keyboard and  outputs a list of ASCII codes, which represent your name.