#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

void stringCopy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void stringAppend(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("Length of first string = %d\n", stringLength(str1));

    stringCopy(str1, result);
    printf("Copied string: %s\n", result);

    stringAppend(str1, str2);
    printf("Appended string: %s\n", str1);

    if (stringCompare(str1, str2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
