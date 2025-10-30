#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct college
{
	int clgid;
	char clgname[100];
	int stdcount;
	struct college*next;
}*start=NULL;
void create();
void insert_at_beg();
void del_at_end();
void display();
void main()
{
	int x, y=0, z=1;
	printf("----------College Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1. Create a Linked List\n");
		printf("2. Insertion at Beginning\n");
		printf("3. Deletion at End\n");
		printf("4. Display\n");
		printf("5. Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				if(y==0)
				{
					printf("Creating a New Linked List\n");
					create();
					y=1;
				}
				else
				{
					printf("Linked List already exists! Try inserting at beginning.\n");
				}
				break;
			case 2:
				insert_at_beg();
				break;
			case 3:
				del_at_end();
				printf("Last Element deleted successfully!\n");
				break;
			case 4:
				display();
				break;
			case 5:
				z=0;
				printf("Thanks for using this code!\n");
			default:
				printf("Invalid Choice!");
		}
	}		
}
void create()
{
	struct college*tmp;
	int clgid, stdcount;
	char clgname[100];
	tmp=(struct college*)malloc(sizeof(struct college));
	printf("Enter the College ID:-");
	scanf("%d",&clgid);
	tmp->clgid=clgid;
	printf("Enter the College Name:-");
	scanf("%s",&clgname);
	strcpy(tmp->clgname,clgname);
	printf("Enter Number of Students in College:-");
	scanf("%d",&stdcount);
	tmp->stdcount=stdcount;
	start=tmp;
	tmp->next=start;
}
void insert_at_beg()
{
	struct college*tmp;
	int clgid, stdcount;
	char clgname[100];
	tmp=(struct college*)malloc(sizeof(struct college));
	printf("Enter the College ID:-");
	scanf("%d",&clgid);
	tmp->clgid=clgid;
	printf("Enter the College Name:-");
	scanf("%s",&clgname);
	strcpy(tmp->clgname,clgname);
	printf("Enter Number of Students in College:-");
	scanf("%d",&stdcount);
	tmp->stdcount=stdcount;
	tmp->next=NULL;
	struct college*q=start;
	while(q->next!=start)
	{
		q=q->next;
	}
	tmp->next=start;
	q->next=tmp;
	start=tmp;
}
void del_at_end()
{
	struct college*p,*q;
	if(start==NULL)
	{
		printf("Linked List is empty!");
		return;
	}
	else
	{
		p=start;
		while(p->next!=start)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		free(p);
	}
	
}
void display()
{
	struct college*p;
	p=start;
	if(start==NULL)
	{
		printf("Linked List is empty!");
	}
	else
	{
		while(p->next!=start)
		{
			printf("%d\n",p->clgid);
			printf("%s\n",p->clgname);
			printf("%d\n",p->stdcount);
			p=p->next;
		}
		printf("%d\n",p->clgid);
		printf("%s\n",p->clgname);
		printf("%d\n",p->stdcount);
	}
}
