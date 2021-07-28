#include<stdio.h>
#define MAX 3
int queue[MAX],front=-1,rear=-1;
int insert();
int qdelete();
int display();
int main()
{   
    int ch;
    do
    {
        printf("\n**** MAIN MENU ****\n");
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
    
        printf("Enter your option:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:insert();
                    break;
            case 2:qdelete();
                    break;
            case 3:display();
                    break;
        }
        
    }
    while(ch!=4);
    
    return 0;
}

int insert()
{    
    int val;
    if (front==0 && rear==MAX-1)
       printf("OVERFLOW\n");
    else
    {
        printf("Enter the element to insert:");
        scanf("%d",&val);
        if (front==-1 && rear==-1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear==MAX-1 && front!=0)
        {
             rear=0;
        }
        else 
        {
            rear=rear+1;
        }
        queue[rear]=val;
    }
    return 0;
}

int qdelete()
{
    int val;
    val=queue[front];
    if(front==-1 || front==rear+1)
       printf("UNDERFLOW\n");
    else
    {
        
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
             if (front==MAX-1)
                front=0;
             else
                front=front+1;
        }
        printf("Deleted element is %d ",val);
    }
    return 0;
}

int display()
{
    int i;
    if(front==-1 && rear==-1)
       printf("QUEUE IS EMPTY\n");
    else
    {
       printf("**** QUEUE ****\n");
       for(i=front;i<=rear;i++)
           printf("%d\t",queue[i]);
    }
    
    return 0;
}