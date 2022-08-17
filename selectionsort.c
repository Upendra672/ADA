#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,j,n;
	printf("Enter the number of array you want in array:");
	scanf("%d",&n);
	printf("Enter %d elements of array",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	//assume first element as a min element and the search for the smallest element in the array
    //then swap it with the min element in the array
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;            //updating the min value if upper condition is satisfied
		}
		if(min!=i)            //if min value is change then swapping will be done else elements remains on the same index value
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("Sorted list in asecending manner\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}