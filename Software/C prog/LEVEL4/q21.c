#include <stdio.h>
int main(){
    char s1[100];
    char oldc,newc;
    printf("enter string:");
    fgets(s1,100,stdin);

    printf("enter replace letter:");
    scanf(" %c",&oldc);

    printf("enter new letter:");
    scanf(" %c",&newc);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==oldc)
        s1[i]=newc;
    }
    printf("%s",s1);

    return 0;
}