#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],c1,c2;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char change:");
    scanf(" %c",&c1);
    printf("enter char to change:");
    scanf(" %c",&c2);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c1)
            s1[i]=c2;
    }
    printf("%s",s1);
    return 0;
}