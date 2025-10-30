#include<stdio.h>
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
	InsertionSort(a,n);
	printf("\nSorted Array is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int InsertionSort(int arr1[], int n)
{
	int temp, i, c;
	for(i=1;i<=n;i++)
	{
		int j=i-1;
		temp=arr1[i];
		while (j>=0 && arr1[j]>temp)
		{
			arr1[j+1]=arr1[j];
			j=j-1;
		}
		arr1[j+1]=temp;
	}
	return 0;
} 

