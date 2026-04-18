#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    fgets(s1,100,stdin);
    for(int i=0;s1[i]!='\0';i++){
        if(isalpha(s1[i])){
            printf("%c",s1[i]);
        }
    }

    return 0;
}
