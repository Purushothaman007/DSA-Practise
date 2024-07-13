#include<stdio.h>
#include<stdlib.h>


int main()
{
  int top=-1,size;
  int top2=-1;
  int push;
  int remove,choice,n,op=1;
  
  printf("Enter the stack size:");
  scanf("%d",&size);
  
  int stack[size],delstack[size];;
  
  while(op!=2)
  {
  printf("\n1 for push\n2 for pop\n3 for delete\n4 for display");
  printf("\nEnter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
	case 1:
  	printf("\nEnter the number of elements to push:");
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{
       	if(top==size-1)
           	{
            	printf("\nStack is full!!!");
            	break;
           	}
       	else
          	{
           	scanf("%d",&push);
           	++top;
           	stack[top]=push;
          	}
 	}
 	break;
	 
 	case 2:
  	printf("Enter the number of top elements to be poped :");
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{
    	if(top==-1)
    	{
     	printf("Stack is empty");
     	break;
    	}
    	else
    	{
      	top--;
    	}
  	}
 	break;
 	
 	case 3:
 	printf("\nEnter the element to remove:");
 	scanf("%d",&remove);
    while(top!=-1)
    {
        
        if(stack[top]==remove)
        {
            top--;
            break;
        }
        else
        {
            ++top2;
           delstack[top2]=stack[top];
           top--;
        }
    }
   while(top2!=-1)
    {
        ++top;
        stack[top]=delstack[top2];
        top2--;
    }
    printf("\nElement removed from stack successfully !!!");
 	break; 
 
 	case 4:
 	     printf("\nStack elements:");
          for(int i=0;i<=top;i++)
           {
	         printf("%d\t",stack[i]);
           } 
 	 break;
 	 
 	default :
    	printf("\n Invalid option");
 	break;  
 	
  }
  
  printf("\nDo you want to continue[1 to continue||2 to discontinue]:");
  scanf("%d",&op);
  
  }
 return 0;
}
