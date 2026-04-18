#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==' '){
            s1[i]='$';
        }
    }
    printf("%s",s1);
    return 0;
}