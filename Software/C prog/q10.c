#include <stdio.h>
#include <ctype.h>
int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(isalpha(s1[i]) && isalpha(s1[i+1])){
            char temp=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=temp;
            i++;
        }
    }
    printf("%s",s1);

    return 0;
}