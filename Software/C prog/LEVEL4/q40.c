#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],c;
    int ind=-1;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char:");
    scanf(" %c",&c);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            ind=i;
        }
    }
    if(ind!=-1){
        for(int i=ind;s1[i]!='\0';i++){
            s1[i]=s1[i+1];
        }
    }
    printf("%s",s1);


    return 0;
}