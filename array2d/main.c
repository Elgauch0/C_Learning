#include <stdio.h>

void print_matrix(int rows, int cols, int m[rows][cols]);
int sum_row(int cols, int row[cols]);
int sum_col(int rows, int cols, int a[rows][cols], int col);
int max_in_matrix(int rows, int cols, int a[rows][cols]);

int main()
{

    int array2d[3][4] = {{1, 2, 3, 3},
                         {2, 2, 33, 4},
                         {1, 2, 3, 4}};

    int sumrow = sum_row(4, array2d[0]);
    int sumcol = sum_col(3, 4, array2d, 0);
    int max = max_in_matrix(3, 4, array2d);

    printf(" sum is rows is  : %d\n", sumrow);
    printf(" sum col is : %d\n", sumcol);
    printf("max is %d", max);

    return 0;
}

void print_matrix(int rows, int cols, int m[rows][cols])

{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
int sum_row(int cols, int row[cols])
{
    int sum = 0;
    for (int i = 0; i < cols; i++)
    {
        sum += row[i];
    }
    return sum;
}

int sum_col(int rows, int cols, int a[rows][cols], int col)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += a[i][col];
    }
    return sum;
}

int max_in_matrix(int rows, int cols, int a[rows][cols])
{
    int max = a[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    return max;
}