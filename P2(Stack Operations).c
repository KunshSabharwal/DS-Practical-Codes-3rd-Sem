#include<stdio.h>
#include<stdlib.h>
int stack[100],i,j,choice=0, n, top=-1, i, x, y;
int peek();
int pop();
int push();
int traverse();
int main()
{
    printf("**********Stack Opearations using array***********\n");
    printf("Enter the number of elements in the stack:-");
    scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        int a;
        printf("Enter the %d element:-",i+1);
        scanf("%d",&a);
        stack[i]=a;
    }


    printf("\n--------------------\n");
    top=n-1;
    while(choice!=5)
    {
    	printf("\n");
        printf("Choose one from the below operations:-\n");
        printf("\n1.Peek\n2.Pop\n3.Push\n4.Traverse\n5.Exit\n");
        printf("Enter your choice:-");
        scanf("%d",&choice);
        printf("\n");

        switch(choice)
        {
            case 1:
                peek();
                break;
            case 2:
                pop();
                break;
            case 3:
                push();
                break;
            case 4:
                traverse();
                break;
            case 5:
            	printf("\n");
            	printf("Thanks for using the code");
                exit(0);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
    }
return 0;
}
int push()
{
    int val;
    if(top==n)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter the value:-");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;        
    }
    return 0;
}
int pop()
{
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
    	y=stack[top];
    	printf("The popped element is:-%d\n",y);
        top=top-1;
    }
    return 0;
}
int peek()
{
    if(top!=-1)
    {
        printf("The element at the top is:-%d\n",stack[top]);
    }
    else
    {
        printf("\nUnderflow\n");
    }
    return 0;
}
int traverse()
{
    if(top==-1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("The values in the stack are:-\n");
        for(x=top;x>=0;x--)
        {
            printf("%d\n",stack[x]);
        }
    }
    printf("\n");
    return 0;
}

