#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char s1[100][100];
    int l=0,sl=0;
    printf("enter no. of string:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",s1[i]);
    }

    for(int i=0;i<n;i++){
        int len=strlen(s1[i]);

        if(len>l){
            sl=l;
            l=len;
        }
        else if(len>sl && len!=l){
            sl=len;
        }
    }
    printf("%d",sl);
    return 0;
}