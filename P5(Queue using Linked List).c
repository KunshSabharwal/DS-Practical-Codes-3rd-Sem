#include<stdio.h>
#include<stdlib.h>
struct que
{
	int data;
	struct que*link;
}*f,*r=NULL;
void enqueue(int x);
void display();
void dequeue();
void main()
{
	int x, y, z=1;
	printf("----------Queue using Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1.Enqueue\n");
		printf("2.Display\n");
		printf("3.Dequeue\n");
		printf("4.Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("Enter the element you want to insert:-");
				scanf("%d",&y);
				enqueue(y);
				break;
			case 2:
				printf("The List is:-\n");
				display();
				break;
			case 3:
				printf("The Deleted element is:-\n");
				dequeue();
				break;
			case 4:
				z=0;
				printf("Thanks for using the code.\n");
				break;
			default:
				printf("Invalid Choice!\n");
		}
	}
}
void enqueue(int x)
{
	struct que*tmp;
	tmp=(struct que*)malloc(sizeof(struct que));
	tmp->data=x;
	tmp->link=NULL;
	if(f==NULL && r==NULL)
	{
		f=tmp;
		r=tmp;
	}
	else
	{
		r->link=tmp;
		r=tmp;
	}
}
void display()
{
	struct que*tmp;
	if(f==NULL)
	{
		printf("No Element in list.\n");
	}
	else
	{
		tmp=f;
		while(tmp!=NULL)
		{
			printf("%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
}
void dequeue()
{
	struct que*tmp;
	if(f==NULL)
	{
		printf("No Element in List.\n");
	}
	else
	{
		printf("%d\n",f->data);
		f=f->link;
	}
}

