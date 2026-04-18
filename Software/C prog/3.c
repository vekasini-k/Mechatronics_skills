#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(!(tolower(s1[i])=='a'|| tolower(s1[i])=='e'|| tolower(s1[i])=='i'|| tolower(s1[i])=='o'|| tolower(s1[i])=='u')){
            printf("%c",s1[i]);
        }
    }
    return 0;
}