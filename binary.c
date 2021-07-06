#include<stdio.h>
int main()
{
    int a[25],n,val,i,pos=-1,beg,end,mid;
    printf("Enter no.of elmts of array:" );
    scanf("%d",&n);
    printf("Enter elmts of array:" );
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. to be searched:");
    scanf("%d",&val);
    beg=1;end=n;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==val)
        {
            pos=mid;
            printf("%d is present at position %d",val,pos);
            break;
        }
        else if(a[mid]>val)
              end=mid-1;
        else
            beg=mid+1;
    }
    if(pos==-1)
      printf("Value is not present in the array");
    return 0;
}