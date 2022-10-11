//practical-9 counting sort 
//200450131028

#include<stdio.h>
#include<sys/time.h>

int counting(int [],int );
int main()
{
    int a[8]={2,3,3,1,0,3,5,2},k=5,b[10],i;
    clock_t start,end;
    double time=0;

    start=clock();
    counting(a,k);
    end=clock();
    time=end-start;
    
    printf("\nthis is time: %f \n",time);

}

int counting(int a[],int k)
{
    int i,j;
    int c[k+1];
    int b[8];
    
    for(i=0;i<=k;i++)
        c[i]=0;
        
    //assigning values 0 to c
    printf("Values of c in every index of c:");
    for(i=0; i<=k; i++)
        printf("\t%d",c[i]);
        printf("\n");  

    for(j=0;j<8;j++)
        c[a[j]]=c[a[j]]+1;

    //printing frequency of each number 
    printf("Frequency of each element of array a:");
    for(j=0; j<6; j++)
        printf("\t%d",c[j]);
        printf("\n");

    for(i=1;i<=k;i++)
        c[i]=c[i]+c[i - 1];
    //printing cummulative frquency

    printf("Cummulative frquency is of array c:");
    for(i=0; i<=k; i++)
        printf("\t%d",c[i]);
        printf("\n");

    for(j=7;j>=0;j--)
    {
        c[a[j]]=c[a[j]]-1;
        b[c[a[j]]] = a[j];
    }

    printf("Sorted array in ascending order:");
    {
        for(i=0; i<8;i++)
        {
            printf("\t%d",b[i]);
        }  
    }
}
        