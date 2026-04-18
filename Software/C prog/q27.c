#include <stdio.h>
#include <string.h>

void revword(char s1[]){
    int len=strlen(s1);

    for(int i=0;i<len/2;i++){
        char temp=s1[i];
        s1[i]=s1[len-i-1];
        s1[len-i-1]=temp;
    }
    int s=0;
    for(int i=0;i<=len;i++){
        if(s1[i]==' '|| s1[i]=='\0'){
            int end=i-1;
            while(s<end){
                char temp=s1[s];
                s1[s]=s1[end];
                s1[end]=temp;
                s++;
                end--;
            }
            s=i+1;
        }
    }
}

int main(){
    char s1[100];
    printf("enter string:");
    fgets(s1,100,stdin);

    if(s1[strlen(s1)-1]=='\n')
        s1[strlen(s1)-1]='\0';

        revword(s1);
        printf("%s",s1);


    return 0;
}