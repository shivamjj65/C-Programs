#include<stdio.h>
int main(){
    printf("There are 3 types of loops\n\t1. WHILE\n\t2. FOR\n\t3. DO..WHILE\n\t4. NESTED");
    /*WHILE*/
    int i=0,j=0,x=5;
    while(i<=9){
        printf("\n%d PRINTED USING WHILE LOOP",i);
        i++;
    }
    for ( j = 0; j < 9; j++)
    {
        /* code */
        printf("\n%d",j);
    }
    do{
        printf("\nHello");
        x--;
    }while (x>=0);
    
    
}
