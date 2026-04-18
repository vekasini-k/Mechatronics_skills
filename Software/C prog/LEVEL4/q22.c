#include <stdio.h>
#include <ctype.h>
int main(){
    char s1[100];
    int c=0;
    printf("enter string:");
    fgets(s1,100,stdin);
    for(int i=0;s1[i]!='\0';i++){
        if(ispunct(s1[i]))
        c++;
    }
    printf("%d",c);


    return 0;
}