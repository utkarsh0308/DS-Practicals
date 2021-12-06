#include<stdio.h>
void main()
{
	int arr[30],i,size,index,value;
	
	printf("Enter number of elements : ");
	scanf("%d",&size);
	
	printf("Enter array elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray elements are : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("Enter index and value : ");
	scanf("%d%d",&index,&value);

	for(i=size-1;i>=index;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = value;

	printf("\nArray elements after insertion : \n");
	for(i=0;i<=size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
