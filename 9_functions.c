#include <stdio.h>
//CALL BY VALUE : ACTUAL VALUE IS PASSED
void addByValue(int x, int y){ // x=a and y=b
    int c=x+y;
    printf("%d is value of addition of %d and %d ",c,x,y);
}
//CALL BY REFERENCE : ADDRESS OF ACTUAL VALUE IS PASSED
void addByRefernce(int *x,int *y){  // pointer x and y points to value at address of a and b
    int c= *x+*y;
    printf("\n%d",c);
}

int main(){
    int a,b;
    printf("ENTER X AND Y: ");
    scanf("%d %d",&a,&b);
    addByValue(a,b);      // actual value of a and b is passed
    addByRefernce(&a,&b); // address of a and b is passed
}