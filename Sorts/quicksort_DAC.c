//Quick sort with DAQ strategy.
//200450131028
#include<stdio.h>
int quicksort(int [],int,int);
int main()
{
	int i,n,a[10];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Eter the elements: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("Sorted array using Quick Sort is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int quicksort(int a[],int low,int high)
{
	int i,j,pivot,temp;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
		while(i<j)
		{
			while((a[i]<=a[pivot])&&(i<high))
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
		return 0;
	}
}