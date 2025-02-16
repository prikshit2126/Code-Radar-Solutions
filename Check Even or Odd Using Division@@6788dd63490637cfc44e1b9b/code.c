// Your code here...
#include <stdio.h>
int main(){
    int num, quotient;
    scanf("%d %d",&num,&quotient);
    quotient = num/2;
    if(num==(quotient*2)){
        printf("Even");
    }else{
        printf("Odd");
    }
}