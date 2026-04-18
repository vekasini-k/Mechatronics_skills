#include <stdio.h>
#include <string.h>

int main(){
    char s1[200],word[100];
    char large[100]="",small[100]="";
    int j=0;
    printf("enter string:");
    fgets(s1,200,stdin);

    int len=strlen(s1);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==' '|| s1[i]=='\n' || s1[i]=='\0'){
            word[j]='\0';
            if(strlen(word)>0){
                if(strlen(large)==0 || strlen(word)>strlen(large))
                    strcpy(large,word);
                if(strlen(small)==0 || strlen(word)<strlen(small))
                    strcpy(small,word);
            }
            j=0;
        }
        else{
            word[j++]=s1[i];
        }
    }

    printf("%s",large);
    printf("\n%s",small);
    return 0;
}