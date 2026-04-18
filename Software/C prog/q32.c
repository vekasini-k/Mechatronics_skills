#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    int m1[256]={0};
    int m2[256]={0};
    int i,len;

    printf("enter 1 string:");
    scanf("%s",&s1);
    printf("enter 2 string:");
    scanf("%s",&s2);

    len=strlen(s1);
    if(len!=strlen(s2)){
        printf("not isomorphic");
        return 0;
    }

    for(int i=0;i<len;i++){
        if(m1[s1[i]]==0 && m2[s2[i]]==0){
            m1[s1[i]]=s2[i];
            m2[s2[i]]=s1[i];
        }
        else if(m1[s1[i]]!=s2[i]){
            printf("not isomorphic");
            return 0;
        }
    }
    printf("isomorphic");
    return 0;
}