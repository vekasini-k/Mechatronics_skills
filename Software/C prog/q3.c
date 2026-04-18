#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[100],s2[100];
    int j=0;
    fgets(s1,100,stdin);
    for(int i=0;s1[i]!='\0';i++){
        if(!(tolower(s1[i])=='a' || tolower(s1[i])=='e' || tolower(s1[i])=='i' || tolower(s1[i])=='o' || tolower(s1[i])=='u')){
            s2[j]=s1[i];
        j++;
        }
    }
    s2[j]='\0';
    printf("%s",s2);


    return 0;
}