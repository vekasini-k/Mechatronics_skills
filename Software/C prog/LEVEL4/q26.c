#include <stdio.h>
#include <string.h>

void removelast(char s1[],char c){
    int i,f=-1;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==c)
            f=i;
    }
    if(f!=-1){
        while(s1[f]!='\0'){
            s1[f]=s1[f+1];
            f++;
        }
    }
}

int main(){
    char s1[100],c;
    printf("enter string:");
    fgets(s1,100,stdin);

    printf("enter remove char:");
    scanf(" %c",&c);

    removelast(s1,c);
    printf("%s",s1);


    return 0;
}