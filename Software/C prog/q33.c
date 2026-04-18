#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],ch;
    int i;
    printf("enter string:");
    scanf("%s",s1);
    printf("enter char:");
    scanf(" %c",&ch);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==ch){
            printf("%d ",i);
        }
    }
    return 0;
}