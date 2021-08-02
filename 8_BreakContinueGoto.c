#include<stdio.h>
int main(){
    int i;

    /* BREAK */
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("\n%d",i);
        if(i==3){
            break;
        }
    }
    printf("\nVALUE OF i AFTER BREAK IS %d:",i);

    /* CONTINUE */
    int j;
    for ( j = 0; j < 7; j++)
    {
        /* code */
        printf("\n value of j is %d :",j);
        if (j==3)
        {
            continue;
        }
    }
     /* GOTO */
    int x;
    for ( x = 0; x < 7; x++)
    {
        /* code */
        printf("\n value of x is %d :",x);
        label1:
            printf("\nGOTO IMPLEMENTED");
            break;
        if (x==6)
        {
            goto label1;
        }
    }
     
}