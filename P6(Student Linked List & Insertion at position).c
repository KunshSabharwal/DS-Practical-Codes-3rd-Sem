#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[100];
	char section;
	int rollno;
	char branch[20];
	struct student*link;
}*start=NULL;
int c=0;
void insert_at_pos(int pos);
void main()
{
	int x, y, pos,z=1;
	printf("----------Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1.Insert at position\n");
		printf("2.Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				if (c==0)
				{
					printf("Inserting at 1st position.");
					insert_at_pos(0);
					c=1;
			    }
				else
				{
					printf("Enter the position you want to insert at:-");
					scanf("%d",&pos);
					insert_at_pos(pos);
				}
				break;
			case 2:
				z=0;
				printf("Thanks for using the code.\n");
				break;
			default:
				printf("Invalid Choice!\n");
		}
	}
}
void insert_at_pos(int pos)
{
	char name[100], sec, branch[20];
	int rollno;
	struct student*tmp,*q;
	tmp=(struct student*)malloc(sizeof(struct student));
	printf("Enter the students name:-");
	gets(name);
	tmp->name=name;
	printf("Enter the students branch:-");
	gets(branch);
	tmp->branch=branch;
	printf("Enter the students section:-");
	scanf("%c",&sec);
	tmp->section=sec;
	printf("Enter the students roll number:-");
	scanf("%d",&rollno);
	tmp->rollno=rollno;
	tmp->link=NULL;
	if(pos==0)
	{
		start=tmp;
	}
	else
	{
		int count=0;
		while(q!=NULL)
		{
			if(count==pos)
			{
				
			}
			count+=1;
			q=q->link;
		}
		q->link=tmp;
		q=tmp;
	}
}
void display()
{
	struct que*tmp;
	if(f==NULL)
	{
		printf("No Element in list.");
	}
	else
	{
		tmp=f;
		while(tmp!=NULL)
		{
			if(q)printf("%d\n",tmp->data);
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

