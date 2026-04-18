#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, i, count = 0;
    char data[20];

    printf("Enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", data);

        char ageStr[3];
        ageStr[0] = data[11];
        ageStr[1] = data[12];
        ageStr[2] = '\0';

        int age = atoi(ageStr);

        if (age >= 60) {
            count++;
        }
    }

    printf("Output: %d\n", count);

    return 0;
}