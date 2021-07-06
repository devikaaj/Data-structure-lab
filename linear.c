#include<stdio.h>
int main()
{
    int a[25],n,found,num,i;
    printf("Enter no.of elmts of array:" );
    scanf("%d",&n);
    printf("Enter elmts of array:" );
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. to be searched:");
    scanf("%d",&num);
    for(i=1;i<=n;i++)
    {
        if(a[i]==num)
        {
            found=1;
            printf("%d is present at position %d",num,i);
            
            break;  
        }
    }
if(found==0)
    printf("%d is not present in the array",num);
    
    return 0;
}