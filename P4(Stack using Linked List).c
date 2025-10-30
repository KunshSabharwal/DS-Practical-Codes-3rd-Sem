#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*link;
}*top;
void push(int data);
void display();
void pop();
void main()
{
	int x, y, z=1;
	printf("----------Stack using Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1.Push\n");
		printf("2.Display\n");
		printf("3.Pop\n");
		printf("4.Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("Enter the element you want to push:-");
				scanf("%d",&y);
				push(y);
				break;
			case 2:
				printf("The List is:-\n");
				display();
				break;
			case 3:
				printf("The deleted element is:-\n");
				pop();
				break;
			case 4:
				z=0;
				printf("Thanks for using the code.\n");
				break;
		}
	}
}
void push(int data)
{
	struct node*tmp; //tmp is a pointer which contains address of 1st structure node
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=NULL;
	if(top==NULL)
	{
		top=tmp;
	}
	else
	{
		tmp->link=top;
		top=tmp;
	}
}
void display()
{
	struct node*tmp;
	tmp=top;
	if(tmp==NULL)
	{
		printf("No Element in List.\n");
	}
	else
	{
		while(tmp!=NULL)
		{
			printf("%d\n",tmp->info);
			tmp=tmp->link;
		}
	}
}
void pop()
{
	struct node*tmp;
	if(top==NULL)
	{
		printf("No element in list.\n");
	}
	else
	{
		tmp=top;
		printf("%d\n",tmp->info);
		top=top->link;
		free(tmp);
	}
}	

