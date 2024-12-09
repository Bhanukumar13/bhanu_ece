#include<stdio.h>
int main(){
    char inputchar;
    printf("Enter a character");
    scanf("%d",&inputchar);
    if(inputchar>=65 && inputchar<=90){
        printf("the given character is upper");
    }
    else{
        printf("the given character is lower");
    }
    return 0;
}