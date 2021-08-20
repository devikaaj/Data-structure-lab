#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}node;

node * create(int);
int display(node * start);
int main()
{
    int n;
    node * start=NULL;
    printf("How many nodes:");
    scanf("%d",&n);
    start=create(n);
    display(start);
    
    return 0;
}

node * create(int n)
{
    int i;
    node * start=NULL;
    node * newnode=NULL;
    node * ptr=NULL;
    
    for(i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter data for node no. %d:",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        
        if (start==NULL)
        {
            start=newnode;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }
    }
   
    return start;
}

int display(node * start)
{
    node * ptr=start;
    while(ptr!=NULL)
    {
        printf("%d-->\t",ptr->data);
        ptr=ptr->next;
    }
    
    return 0;
}
