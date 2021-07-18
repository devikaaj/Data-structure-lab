#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
int insert();
int delete();
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
            case 2:delete();
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
    int num;
    if (rear==MAX-1)
       printf("OVERFLOW\n");
    else
    {
        printf("Enter the element to insert:");
        scanf("%d",&num);
        if (front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=num;
    }
    
    return 0;
}

int delete()
{
    int val;
    if (front==-1 || front>rear)
       printf("UNDERFLOW\n");
    else
    {
        val=queue[front];
        front=front+1;
        printf("Deleted element is %d ",val);
    }
    
    return 0;
}

int display()
{
    int i;
    if (front==-1 && rear==-1)
       printf("QUEUE IS EMPTY\n");
    else
    {
        printf("**** QUEUE ****\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
    
    return 0;
}