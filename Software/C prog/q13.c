#include <stdio.h>
int main(){
    char s1[100];
    int freq[256]={0};

    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=' ' && s1[i]!='\n'){
            freq[(int)s1[i]]++;
        }
    }

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!='\n' && freq[(int)s1[i]]>1){
            printf("%c",s1[i]);
        }
    }

    return 0;
}