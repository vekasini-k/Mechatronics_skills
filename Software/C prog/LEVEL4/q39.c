#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],c;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char:");
    scanf(" %c",&c);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            for(int j=i;s1[j]!='\0';j++){
                s1[j]=s1[j+1];
            }
            break;
        }
    }
    printf("%s",s1);
    return 0;
}