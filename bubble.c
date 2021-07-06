#include<stdio.h>
int main()
{
    int n,i,j,a[25],temp;
    printf("Enter no.of elmts of array:");
    scanf("%d",&n);
    printf("Enter elmts of array:");
    for(i=1 ; i<=n ; i++)
        scanf("%d",&a[i]);
    printf("Array before sorting:\n");
    for(i=1 ; i<=n ; i++)
        printf("%d   ",a[i]);
    for(i=1; i<=n ; i++)
    {
        for(j = 1; j<=n-i ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nArray after sorting:\n");
    for(i=1 ; i<=n ; i++)
        printf("%d   ",a[i]);
    return 0;
}