#include <stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    
    /*if-else*/
    if(age>18){
        printf("\nYOU CAN VOTE");
    }
    else{
        printf("\nYOU CANNOT VOTE");
    }

    /*nested if-else*/
    if(age==16){
        printf("\nYou can give board exams");
    }
    else if (age>16&&age<=18)
    {
        printf("\nYou can go to gradution college");
    }
    else{
        printf("\nThis is example of nested else-if");
    }

    /* switch-case */
    printf("\nChoose 1/2/3/4");
    int x;
    printf("\nENTER CHOICE");
    scanf("%d",&x);
    switch (x)
    {
    case 1/* constant-expression */:
        /* code */
        printf("\nYOU CHOSE 1");
        break;
    case 2/* constant-expression */:
        /* code */
        printf("\nYOU CHOSE 2");
        break;
    case 3/* constant-expression */:
        /* code */
        printf("\nYOU CHOSE 3");
        break;
    case 4/* constant-expression */:
        /* code */
        printf("\nYOU CHOSE 4");
        break;
        
    default:
        printf("\n\nENDING PROGRAM");
        break;
    }
}