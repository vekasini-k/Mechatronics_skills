/* #include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    int s=0,end;

    printf("enter string:");
    fgets(s1,100,stdin);

    for(int i=0;i<=strlen(s1);i++){
        if(s1[i]==' '|| s1[i]=='\n' || s1[i]=='\0'){
            end=i-1;

            while (s<end){
                char temp=s1[s];
                s1[s]=s1[end];
                s1[end]=temp;
                s++;
                end--;
            }
            s=i+1;
        }
    }
    printf("%s",s1);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter a word: ");
    scanf("%s", str);

    strrev(str);

    printf("Reversed word: %s", str);

    return 0;
}