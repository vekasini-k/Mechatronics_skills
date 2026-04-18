#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(isupper(s1[i])){
            printf("%c",s1[i]);
            break;
        }
    }
    return 0;
}