#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    for (int i=0;s1[i]!='\0';i++){
        if(!isalnum(s1[i]) && isprint(s1[i]) && !isspace(s1[i])){
            printf("%c",s1[i]);
        }
    }
    return 0;

}