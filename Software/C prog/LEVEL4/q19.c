#include <stdio.h>
#include <string.h>
int n;
int isPrime(n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;
    }
}
int main(){
    char s1[100];
    int c=0;
    printf("enter string:");
    fgets(s1,100,stdin);
    
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!='\n')
        c++;
    }

    if(c%2==0){
        printf("even\n");
    }
    else{
        printf("Odd\n");
    }

    if(isPrime(c)){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}