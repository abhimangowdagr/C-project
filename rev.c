#include <stdio.h>

void reverse() {
    char str[1000], rev[1000];
    int i, j, count = 0;

    printf("Enter string to reverse: ");
    scanf("%s", str);

    while (str[count] != '\0') {
        count++;
    }

    j = count - 1;
    for (i = 0; i < count; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';

    printf("String After Reverse: %s\n", rev);
}

int main() {
    reverse();
   // return 0;
}

