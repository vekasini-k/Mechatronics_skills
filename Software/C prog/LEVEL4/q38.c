#include <stdio.h>
#include <string.h>

int main(){
    char s1[100], c;
    int j = 0;

    printf("Enter string: ");
    fgets(s1, 100, stdin);

    printf("Enter char: ");
    scanf(" %c", &c);

    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] != c){
            s1[j] = s1[i];
            j++;
        }
    
    }


    s1[j] = '\0';

    printf("Result: %s", s1);

    return 0;
}