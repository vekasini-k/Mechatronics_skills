#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100];
    char s='z'+1;
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(isalpha(s1[i])){
            char ch=tolower(s1[i]);

            if(ch<s){
                s=ch;
            }
        }
    }
    if(s<='z'){
        printf("%c",s);
    }
    else{
        printf("no alpha");
    }

    return 0;
}