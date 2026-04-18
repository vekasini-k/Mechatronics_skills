#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100];
    int freq[26]={0};

    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(isalpha(s1[i])){
            char ch=tolower(s1[i]);
            freq[ch-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            printf("%c=%d\n",i+'a',freq[i]);
        }
    }

    return 0;
}