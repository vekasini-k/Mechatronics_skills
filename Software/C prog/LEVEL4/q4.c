#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]=='a'){
            s1[i]='b';
        }
        else if(s1[i]=='t'){
            s1[i]='g';
        }
        else if(isdigit(s1[i])){
            s1[i]='n';
        }
    }
    printf(s1);
    return 0;
}