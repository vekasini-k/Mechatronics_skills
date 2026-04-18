#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[50];
    int f=-1;
    printf("enter string:");
    fgets(s1,100,stdin);
    s1[strcspn(s1,"\n")] = '\0';
    printf("enter word:");
    fgets(s2,50,stdin);
    s2[strcspn(s2,"\n")] = '\0';
    int len2=strlen(s2);
    for(int i=0;s1[i]!='\0';i++){
        if(strncmp(s1+i,s2,len2)==0){
            printf("%d",i);
            f=1;
        }
    }
    if(!f)
        printf("not found");
        return 0;
}