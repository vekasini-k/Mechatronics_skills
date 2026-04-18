#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    int freq[256]={0};

    printf("enter 1st string:");
    fgets(s1,100,stdin);
    printf("enter 2nd string:");
    fgets(s2,100,stdin);

    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=' '){
            freq[tolower(s1[i])]++;
        }
    }
    for(int i=0;s2[i]!='\0';i++){
        if(s2[i]!=' '){
            freq[tolower(s2[i])]--;
        }
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram"); 

    return 0;
}