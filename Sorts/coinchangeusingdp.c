// practical-18 coin change using dp
// 200450131028

#include <stdio.h>

int main()
{
    int change = 8, coins[5] = {1, 4, 6, 3, 2}, c[5][9], row, col, temp1, temp2;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 9; col++)
        {
            if (col == 0)
                c[row][col] = 0;
            if (row == 0 && coins[0] == 1)
            {
                c[row][col] = col;
            }
            else
            {
                temp1 = c[row - 1][col];
                temp2 = 1 + c[row][col - coins[row]];
                if (temp1 <= temp2)
                    c[row][col] = temp1;
                else
                    c[row][col] = temp2;
            }
        }
    }
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 9; col++)
        {
            printf("%d", c[row][col]);
        }
        printf("\n");
    }
}