#include <stdio.h>
int main(){
   float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    float x = (a+b+c)/0.3;
    printf("Average: %.2f",x );
}