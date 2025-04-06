#include<stdio.h>
int main(){
    char palindrome[] = "RADAR";
    int palLength = 0;
    while (palindrome[palLength] != '\0') {
        palLength++;
    }
    int isPalindrome = 1;
    for (int i = 0; i < palLength / 2; i++) {
        if (palindrome[i] != palindrome[palLength - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome){
        printf("\"%s\" is a palindrome\n", palindrome);
    }else{
        printf("\"%s\" is not a palindrome\n", palindrome);
    }
      return 0; 
}