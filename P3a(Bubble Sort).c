#include<stdio.h>
int BubbleSort(int arr1[], int n);
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
	BubbleSort(a,n);
	printf("\nSorted Array is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int BubbleSort(int arr1[], int n)
{
	int temp, i, j;
	for(i=0;i<=n-2;i++)
	{
		int c=0;
		for(j=0;j<=n-i-2;j++)
		{
			if(arr1[j]>arr1[j+1])
			{
				temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
				c=1;
			}
		}
		if(c==0)
		{
			printf("Array is already sorted\n");
			break;
		}
	}
	return 0;
}

