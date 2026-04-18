#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len - 1; i += 2) {
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }

    printf("Output: %s\n", str);

    return 0;
}