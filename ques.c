// SORTING 
//eg: a[5] = {3,4,1,6,7,2}     n=5
// k = 3 then array would be divided into 2 parts 0 to k and k to n
// o/p: a[5] = {1,2,3,7,6}


#include<stdio.h>
#include<stdlib.h>

int sortArray(int a[],int n, int k)
{    
    int i,j,temp=0;
    for(i=0;i<k;i++){   
        for(j=i+1;j<k;j++){        
            if(a[i]>a[j])                 
            {
                temp=a[i];                    
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }             
    for(i=k;i<n;i++){   
        for(j=i+1;j<n;j++){        
            if(a[i]<a[j])                 
            {
                temp=a[i];                    
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }          
    printf("Array after sort is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

int main(){
    printf("Enter size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("\nEnter divider: ");
    int k;
    scanf("%d",&k);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sortArray(a,n,k);
}
