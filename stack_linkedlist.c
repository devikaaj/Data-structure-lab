#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node * next;
}node;

int push();
int pop();
int display();

node * start=NULL;

int main() 
{
    int ch;
    do
    {
        printf("\n *****MAIN MENU *****");
        printf("\n 1: PUSH");
        printf("\n 2: POP");
        printf("\n 3: DISPLAY");
        printf("\n 4: EXIT");

        printf("\n\n Enter your option : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
        }
    }while(ch !=4);
    
    return 0;
}

int push()
{
    int val;  
    struct node * new_node = (struct node*)malloc(sizeof(struct node));   
    if(new_node == NULL)  
    {  
        printf("Not able to push the element\n");   
    }  
    else   
    {  
        printf(" Enter the value:");  
        scanf("%d",&val);  
        if(start==NULL)  
        {         
            new_node->data = val;  
            new_node -> next = NULL;  
            start=new_node;  
        }   
        else   
        {  
            new_node->data = val;  
            new_node->next = start;  
            start=new_node;      
        }  
        printf(" Item pushed\n");  
          
    }  
    
    return 0;
}  
  
int pop()  
{  
    int item;  
    node * ptr;  
    if (start == NULL)  
    {  
        printf(" Underflow\n");  
    }  
    else  
    {  
        item = start->data;  
        ptr = start;  
        start = start->next;  
        free(ptr);  
        printf(" %d popped\n",item);  
          
    }  
    
    return 0;
} 
 
int display()  
{  
    struct node * ptr;  
    ptr=start;  
    if(ptr == NULL)  
    {  
        printf(" Stack is empty\n");  
    }  
    else  
    {  
        printf(" **** STACK ****\n");  
        while(ptr!= NULL)  
        {  
            printf(" %d\n",ptr->data);  
            ptr = ptr->next;  
        }  
    }  
    
    return 0;
}  