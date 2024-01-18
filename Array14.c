// Read a 3x3 matrix from the user and print the addition of each row and each
// column
#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][3];
    int add = 0;
    // read a matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element at position %d %d\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // print the addition of each row
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            add = add + arr[i][j];
        }
        printf("Addition of %d row is %d\n", i, add);
        add = 0;
    }
    // print addition of each column
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            add = add + arr[i][j];
        }
        printf("Addition of %d column is %d\n", j, add);
        add = 0;
    }
    return 0;
}