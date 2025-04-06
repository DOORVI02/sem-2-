#include<stdio.h>
int main(){
    char mainStr[] = "This is a simple string.";
    char subStr[] = "simple";
    int mainLen = 0, subLen = 0;
    
    while (mainStr[mainLen] != '\0') {
        mainLen++;
    }
    while (subStr[subLen] != '\0') {
        subLen++;
    }
    
    int found = 0;
    for (int i = 0; i <= mainLen - subLen; i++) {
        int match = 1;
        for (int j = 0; j < subLen; j++) {
            if (mainStr[i + j] != subStr[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("Sub-string \"%s\" found at index %d\n", subStr, i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Sub-string \"%s\" not found\n", subStr);

    return 0;
}
