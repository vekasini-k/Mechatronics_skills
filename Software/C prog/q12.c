#include <stdio.h>
int main(){
    char s1[100];
    int freq[256]={0};
    int j=0;
    
    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]=='\n')
        continue;
        
        if(freq[(int)s1[i]]==0){
            s1[j++]=s1[i];
            freq[(int)s1[i]]=1;
        }
    }
    s1[j]='\0';
    printf("%s",s1);

    return 0;
}