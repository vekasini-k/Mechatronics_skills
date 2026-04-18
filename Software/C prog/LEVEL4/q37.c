#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100],ch;
    int c=0,i;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char:");
    scanf(" %c",&ch);

    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==ch){
            printf("%d ",i);
            c++;
        }
    }
        
    printf("\n%d",c);

    return 0;
}