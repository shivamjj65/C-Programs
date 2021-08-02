#include<stdio.h>
int main(){
    int x=20;
    int *a = &x;
    printf("%d",x);
    printf("\n%d",*a); // *a stores value at address of x
    printf("\n%d",a); // a stores address of x
}