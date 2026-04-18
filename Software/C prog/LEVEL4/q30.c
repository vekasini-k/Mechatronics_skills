#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    int wc=1;
    int i=0;

    printf("enter string:");
    fgets(s1,100,stdin);

    while(s1[i]!='\0'){
        if(wc%2==0){
            while(s1[i]!=' ' && s1[i]!='\0'){
                printf("%c",s1[i]);
                i++;
            }
        }
        else{
            while(s1[i]!=' '&& s1[i]!='\0')
                i++;     
        }
        if(s1[i]==' '){
            wc++;
            i++;
        }
    }

    return 0;
}