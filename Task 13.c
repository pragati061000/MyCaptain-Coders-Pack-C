#include<stdio.h>
void main()
{
	int i=0, max=0, min=0, arr[100], n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	/*printf("\nThe array is:");
	for(i=0;i<5;i++)
	{
		printf("\t",arr[i]);
	}*/
	
	max = arr[0];
	
	for(i=0;i<n;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	min = arr[0];
	
	for(i=0;i<n;i++)
	{
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nLargest element in the array : %d",max);
	printf("\nSmallest element the array : %d",min);
	
}
