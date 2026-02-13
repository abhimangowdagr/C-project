#include <stdio.h>

void reverse()
{
    char str[1000], rev[1000];
    int i, j, count = 0;

    printf("\nEnter string to reverse: ");
    scanf("%s", str);

    printf("\nString Before Reverse: %s", str);

    // finding length
    while (str[count] != '\0')
    {
        count++;
    }

    j = count - 1;

    // reversing
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }

    rev[count] = '\0';   // ✅ Important line

    printf("\nString After Reverse: %s", rev);
}
