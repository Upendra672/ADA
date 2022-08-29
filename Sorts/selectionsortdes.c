//Selection sort
//for descending order


#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,j,n;
	printf("Enter the number of array you want in array:");
	scanf("%d",&n);
	printf("Enter %d elements of array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[min])
			min=j;
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("Array in sorted way in descending manner\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}