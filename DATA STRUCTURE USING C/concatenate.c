#include<stdio.h>
int main(){
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char concat[100];
     int i = 0;
    // Copy first string into concat
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }
    int j = 0;
    // Append second string into concat
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Concatenated string: %s\n", concat);
    return 0;
}