#include<stdio.h>
#include<stdlib.h>
void mergeArrays(int arr[], int p, int q, int r)
{
	int i, j;
    int n1 = q - p + 1;
    int n2 = r - q;
    int *l_array = (int *)malloc(sizeof(int) * n1);
    int *r_array = (int *)malloc(sizeof(int) * n2);
    for (i = 0; i < n1; i++)
        l_array[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        r_array[j] = arr[q + 1 + j];
    i = 0;
    j = 0;
    int k = p;
    while (i < n1 && j < n2)
    {
        if (l_array[i] <= r_array[j])
        {
            arr[k] = l_array[i];
            i++;
        }
        else
        {
            arr[k] = r_array[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = l_array[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = r_array[j];
        j++;
        k++;
    }
    free(l_array);
    l_array = NULL;

    free(r_array);
    r_array = NULL;
}
void ms(int arr[], int p, int r)
{
    if (p >= r)
        return;
    int q = p + (r - p) / 2;
    ms(arr, p, q);
    ms(arr, q + 1, r);

    mergeArrays(arr, p, q, r);
}
void merge_sort(int arr[], int n)
{
    ms(arr, 0, n - 1);
}
void main()
{
	int n, i;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element:-",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array  before Sorting is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	merge_sort(arr,n);
	printf("\nSorted Array is:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
