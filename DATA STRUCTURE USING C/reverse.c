#include<stdio.h>
int main(){
    char s1[]={"hello dv"};
    int length=0;
    while(s1[length]!='\0'){
        length++;
    }
    printf("%d\n",length);
    printf("the reverse string is:");
    for(int i=length-1;i>=0;i--){
        printf("%c",s1[i]);
    }
    return 0;
}