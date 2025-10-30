#include<stdio.h>
void main()
{
	int arr1[20], size, i, flag=0, num, pos;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&size);
	printf("Enter the elements of the array:-\n");
	for(i=0;i<size;i++)
	{
		printf("Enter the %d element:-",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("Enter the element to be searched:-");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(arr1[i]==num)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==0)
	{
		printf("Element not found in the array");
	}
	else
	{
		printf("Element found at position:-%d",pos+1);
	}
}

