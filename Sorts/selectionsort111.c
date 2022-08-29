//simple insertion sort without function
//without user input


#include<stdio.h>

int main()
{
    int i,j,a[5]={5,4,1,2,6}, temp,min;
    for(i=0; i<5;i++)
    {
        min =i;

        for(j=i+1; j<5; j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Array in sorted way in descending manner\n");
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);
}
