#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[100];
	char section[1];
	int rollno;
	char branch[20];
	struct student*link;
}*start=NULL;
void create();
void insert_at_pos();
void display();
void main()
{
	int x, y=0, pos, z=1;
	printf("----------Student's Linked List----------\n");
	while(z==1)
	{
		printf("Select the operation you want to perform:-\n");
		printf("1.Create Linked List\n");
		printf("2.Insert at position\n");
		printf("3.Display Entire Linked List\n");
		printf("4.Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				if (y==0)
				{
					printf("Creating New Linked List:-\n");
					create();
					y=1;
			    }
				else
				{
					printf("Linked List already exists! Try inserting at position.\n");
				}
				break;
			case 2:
				insert_at_pos();
				break;
			case 3:
				display();
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
void create()
{
	struct student*q, *tmp;
	char name[100], sec[1], branch[20];
	int rollno;
	tmp=(struct student*)malloc(sizeof(struct student));
	printf("Enter the students name:-");
	scanf("%s",&name);
	strcpy(tmp->name,name);
	printf("Enter the students branch:-");
	scanf("%s",&branch);
	strcpy(tmp->branch,branch);
	printf("Enter the students section:-");
	scanf("%s",&sec);
	strcpy(tmp->section,sec);
	printf("Enter the students roll number:-");
	scanf("%d",&rollno);
	tmp->rollno=rollno;
	tmp->link=NULL;
	start=tmp;
}
void insert_at_pos()
{
	struct student*tmp, *q;
	char name[100], sec[1], branch[20];
	int rollno;
	int pos;
	int i;
	q=start;
	printf("Enter the position you want to insert at:-");
	scanf("%d",&pos);
	for(i=0;i<pos-1;i++)
	{
		q=q->link;
		if(q==NULL)
		{
			printf("Invalid Position!\n");
			return;
		}
	}
	tmp=(struct student*)malloc(sizeof(struct student));
	printf("Enter the students name:-");
	scanf("%s",&name);
	strcpy(tmp->name,name);
	printf("Enter the students branch:-");
	scanf("%s",&branch);
	strcpy(tmp->branch,branch);
	printf("Enter the students section:-");
	scanf("%s",&sec);
	strcpy(tmp->section,sec);
	printf("Enter the students roll number:-");
	scanf("%d",&rollno);
	tmp->rollno=rollno;
	tmp->link=q->link;
	q->link=tmp;
}
void display()
{
	struct student*q;
	if(start==NULL)
	{
		printf("List is empty!\n");
		return;
	}
	q=start;
	printf("Linked List of students is:-\n");
	while(q!=NULL)
	{
		printf("Name:-%s\n",q->name);
		printf("Branch:-%s\n",q->branch);
		printf("Section:-%s\n",q->section);
		printf("Roll No:-%d\n",q->rollno);
		q=q->link;
	}
}
