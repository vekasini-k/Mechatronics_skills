#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],oc,nc;
    int ind=-1;
    printf("enter string:");
    fgets(s1,100,stdin);
    printf("enter char:");
    scanf(" %c",&oc);
    printf("enter char:");
    scanf(" %c",&nc);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==oc){
            ind=i;
        }
    }
    if(ind!=-1){
        s1[ind]=nc;
    }
    printf("%s",s1);
    return 0;
}