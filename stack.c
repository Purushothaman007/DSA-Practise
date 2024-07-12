#include<stdio.h>
#include<stdlib.h>


int main()
{
  int top=-1,size;
  int push;
  printf("Enter the stack size:");
  scanf("%d",&size);
  int stack[size];
  
  int choice,n,op=1,rem;
  while(op!=2)
  {
  printf("\n1 for push\n2 for pop\n3 for display");
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
     printf("\nStack elements:");
          for(int i=0;i<top+1;i++)
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
