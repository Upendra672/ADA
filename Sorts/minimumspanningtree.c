//practical10
//find minimum spanning tree using prism's algorithm
//200450131028

#include<stdio.h>
#include<stdlib.h>
void prims(int n, int cost[10][10]);
int main()
{
    int i,j,n,cost[10][10];
    printf("\nRead the number of nodes:");
    scanf("%d",&n);
    printf("\n Read the cost of matrix\n");
    for (i=0;i<=n-1; i++)
    {
        for (j=0; j <= n-1; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]=999;
        } 
    }
    prims(n,cost);
    return 0;
}
void prims(int n, int cost[10][10])
{
    int i,j,u,v,min=999,mincost=0,visited[10],ne=1;
    for(i=1;i<=n;i++)
        visited[i]=0;
     printf("\n The edges considered for MST are \n ");
     visited[1]=1;
     while(ne<n)
     {
        for(i=1;i<=n;i++)
            for(j=1; j<=n;j++)
                if(cost[i][j]<min){
                    if(visited[i]==0)
                    continue;
                    else
                    {
                        min =cost[i][j];
                        u=i;
                        v=j;
                    }
                }
                if(visited[u]==0 || visited[v]==0)
                {
                    printf("%d Edge(%d %d)=%d", ne++,u,v,min);
                    mincost=mincost+min;
                    visited[v]=1;
                }
                cost[u][v]=cost[v][u]=999;
     }
     printf("\n cost of constructing MST is %d",mincost);
}