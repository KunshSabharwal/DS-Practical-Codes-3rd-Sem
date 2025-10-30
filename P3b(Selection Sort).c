#include<stdio.h>
void Selection(int arr[], int n);
void main()
{
	int n, i;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element:-",i+1);
		scanf("%d",&a[i]);
	}
	printf("Array  before Sorting is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	Selection(a,n);
	printf("\nSorted Array is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void Selection(int arr[], int n)
{
	int i, j, small;
	for (i=0;i<n-1;i++)
	{
		small=i; 
		for (j=i+1;j<n;j++)
		if (arr[j]<arr[small])
		{
			small=j;
		}
	int temp=arr[small];
	arr[small]=arr[i];
	arr[i]=temp;
	}
}
