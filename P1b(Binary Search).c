#include<stdio.h>
int bsearch(int [], int, int);
int main()
{
	int arr1[20], item, size, index, i;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&size);
	printf("Enter the array elements in ascending order:-\n");
	for(i=0;i<size;i++)
	{
		printf("Enter the %d element:-",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("Enter the element to be searched:-");
	scanf("%d",&item);
	index=bsearch(arr1,size,item);
	if(index==-1)
	{
		printf("Element was not found");
	}
	else
	{
		printf("Element found at position:-%d",index+1);
	}
	return 0;
}
int bsearch(int arr1[], int size, int item)
{
	int beg, last, mid;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(item==arr1[mid])
		{
			return mid;
		}
		else if(item>arr1[mid])
		{
			beg=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	return -1;
}
