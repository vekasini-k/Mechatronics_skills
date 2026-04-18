#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    int n=1;
    printf("enter string:");
    scanf("%s",s1);

    int len=strlen(s1);

    for(int i=0;i<len/2;i++){
        if(s1[i]!=s1[len-i-1]){
            n=0;
            break;
        }
    }
    if(n)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}