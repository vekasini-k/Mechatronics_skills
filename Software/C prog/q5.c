#include <stdio.h>
int main(){
    char s1[100];
    int ch[256]={0};
    int max=0;
    char maxchar;

    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=' ' && s1[i]!='\n'){
            ch[(int)s1[i]]++;
        }
    }
    for(int i=0;i<256;i++){
        if(ch[i]>max){
            max=ch[i];
            maxchar=i;
        }
    }
    printf("%c --> %d",maxchar,max);
    return 0;
}