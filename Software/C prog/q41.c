#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],c,c1;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char:");
    scanf(" %c",&c);
    printf("enter char:");
    scanf(" %c",&c1);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            s1[i]=c1;
            break;
        }
    }
    printf("%s",s1);
    return 0;
}