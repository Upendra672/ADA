#include<stdio.h>
#define N 100
int dfs(int v);

int main()
{
    int a[N][N],n,i,j;
    printf("enter the number of nodes:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++){
        printf("enter the %d row",i);
        printf("and %d column:",j);
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the starting node %d");
}
