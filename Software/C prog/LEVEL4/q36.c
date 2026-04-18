#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100];
    int c=0,c1=0,c2=0;
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(isalpha(s1[i])){
            c++;
        }
        else if(isdigit(s1[i])){
            c1++;
        }
        else if(s1[i]!=' ' && s1[i]!='\n'){
            c2++;
        }
    }
    printf("alpha:%d\n",c);
    printf("no.:%d\n",c1);
    printf("s char:%d",c2);
        return 0;
}