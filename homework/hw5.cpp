#include <iostream>
using namespace std;

void Function(int *ptr1[3], int *ptr2[3], int total[][3])
{
    int tmp = 0;
    for (int z = 0; z < 3; z++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                tmp += *(*(ptr1 + i) + z) * *(*(ptr2 + j) + i); // calculating the value of multiplication
            }
            total[j][z] = tmp; 
            tmp = 0; //reset tmp to zero
        }
    }
}
int main()
{
    int arr1[3][3], arr2[3][3], total[3][3] = {0};
    printf("the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]); //let the user enter the first matrix
        }
    }
    printf("the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]); //let the user enter the second matrix
        }
    }
    int *ptr1[3] = {arr1[0], arr1[1], arr1[2]};
    int *ptr2[3] = {arr2[0], arr2[1], arr2[2]};
    int *prt_total[3] = {total[0], total[1], total[2]};
    Function(ptr1, ptr2, total); //call the sub function
    printf("product of two matrices:\n"); //print the product of two matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", total[i][j]); 
        }
        printf("\n");
    }
    return 0;
}
