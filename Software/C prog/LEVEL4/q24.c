#include <stdio.h>
#include <string.h>

void removec(char s1[],char c){
    int i,f=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            f=1;
            break;
        }
    }
    if(f){
        while(s1[i]!='\0'){
            s1[i]=s1[i+1];
            i++;
        }
    }
}
int main(){
    char s1[100],c;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char remove:");
    scanf(" %c",&c);

    removec(s1,c);
    printf("%s",s1);
    
    return 0;
}