#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	char name[100];
	int empid;
	char department[50];
	char designation[50];
	int salary;
	struct employee*prev;
	struct employee*next;
}*start;
void create();
void insert_at_beg();
void del_at_end();
void display();
void main()
{
	int x, y=0, pos, z=1;
	printf("----------Employee Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1. Create a Linked List\n");
		printf("2. Insert at beginning\n");
		printf("3. Deletion at end\n");
		printf("4. Display\n");
		printf("5. Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				if(y==0)
				{
					printf("Creating a new Linked List:-\n");
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
				printf("Last Element of Linked List deleted successfully!\n");
				break;
			case 4:
				display();
				break;
			case 5:
				z=0;
				printf("Thanks for using the code!\n");
				break;
			default:
				printf("Invalid Choice!\n");
		}
	}
}
void create()
{
	struct employee*tmp,*q;
	char name[100], department[50], designation[50];
	int empid, salary;
	tmp=(struct employee*)malloc(sizeof(struct employee));
	printf("Enter the Employee's Name:-");
	scanf("%s",&name);
	strcpy(tmp->name,name);
	printf("Enter the Employee's ID:-");
	scanf("%d",&empid);
	tmp->empid=empid;
	printf("Enter the Employee's Department:-");
	scanf("%s",&department);
	strcpy(tmp->department,department);
	printf("Enter the Employee's Designation:-");
	scanf("%s",&designation);
	strcpy(tmp->designation,designation);
	printf("Enter the Employee's Salary:-");
	scanf("%d",&salary);
	tmp->salary=salary;
	tmp->prev=NULL;
	tmp->next=NULL;
	start=tmp;
}
void insert_at_beg()
{
	struct employee*tmp;
	char name[100], department[50], designation[50];
	int empid, salary;
	tmp=(struct employee*)malloc(sizeof(struct employee));
	printf("Enter the Employee's Name:-");
	scanf("%s",&name);
	strcpy(tmp->name,name);
	printf("Enter the Employee's ID:-");
	scanf("%d",&empid);
	tmp->empid=empid;
	printf("Enter the Employee's Department:-");
	scanf("%s",&department);
	strcpy(tmp->department,department);
	printf("Enter the Employee's Designation:-");
	scanf("%s",&designation);
	strcpy(tmp->designation,designation);
	printf("Enter the Employee's Salary:-");
	scanf("%d",&salary);
	tmp->salary=salary;
	tmp->prev=NULL;
	tmp->next=NULL;
	tmp->next=start;
	start->prev=tmp;
	start=tmp;
}
void del_at_end()
{
	struct employee*tmp=start;
	if(start==NULL)
	{
		printf("List is empty!");
		return;
	}
	else if(tmp->next==NULL)
	{
		start=NULL;
		return;
	}
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	struct employee*q=tmp->prev;
	q->next=NULL;
	free(tmp);
}
void display()
{
	struct employee*q;
	if(start==NULL)
	{
		printf("List is empty!");
	}
	else
	{
		q=start;
		while(q!=NULL)
		{
			printf("%s\n",q->name);
			printf("%d\n",q->empid);
			printf("%s\n",q->department);
			printf("%s\n",q->designation);
			printf("%d\n",q->salary);
			q=q->next;
		}
	}
}
