// practical-19-Implementation Of Max-Heap Sort Algorithm//
// 200450131028

#include <stdio.h>
void max_heap_sort(int heap[], int n);
void main()
{
    int a[10], n, i;
    printf("\n Enter no of elements :");
    scanf("%d", &n);
    printf("\n Enter the nos : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max_heap_sort(a, n);
}

void max_heap_sort(int heap[], int n)
{
    int i, j, c, root, temp;
    for (i = 1; i < n; i++)
    {
        c = i;
        do
        {
            root = (c - 1) / 2;
            if (heap[root] < heap[c]) // to create MAX heap array //
            {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        } while (c != 0);
    }
    printf("Heap array : ");
    for (i = 0; i < n; i++)
        printf("%d\t ", heap[i]);
    for (j = n - 1; j >= 0; j--)
    {
        temp = heap[0];
        heap[0] = heap[j]; // swap max element with right leaf element //
        heap[j] = temp;
        root = 0;
        do
        {
            c = (2 * root) + 1; // left node of root element //
            if ((heap[c] < heap[c + 1]) && c < j - 1)
                c++;
            if (heap[root] < heap[c] && c < j) // Again rearrange to max heap array //
            {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while (c < j);
    }
    printf("\n The sorted array is : ");
    for (i = 0; i < n; i++)
        printf("\t %d", heap[i]);
    printf("\n Complexity : \n Best case = Avg case = Worst case = O(n logn) \n");
}