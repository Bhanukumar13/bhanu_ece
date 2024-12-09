#include<stdio.h>
//fun dec
int sumofevennumber(int);

int main(){
    int inputNumber=0,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    res=sumofevennumbers(inputNumber);
    printf("the sum of even number %d is %d ",inputNumber,res);
    return 0;
}

int sumofevennumber(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}