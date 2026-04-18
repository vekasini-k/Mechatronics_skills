#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100];
    fgets(s1,100,stdin);
    int freq[256]={0};
    int i,max=0;
    char maxChar;

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=' '&& s1[i]!='\n'){
            freq[(int)s1[i]]++;
        }
    }
    
    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            maxChar=i;
        }
    }
    printf("%c -->",maxChar);
    printf("%d",max);

    return 0;
}