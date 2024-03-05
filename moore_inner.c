//Program calculates inner product and inner reverse product of two arrays. James Moore.
#include <stdio.h>
#include <stdlib.h>

//Calculates inner product of arrays, using loop to iterate through arrays
int inner_product(int a[], int b[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {

        sum += a[i] * b[i];
    }

    return sum;
}

//Calculates inner reverse product of arrays, using loop to iterate
int inner_product_reverse(int a[], int b[], int n)
{
    int sum = 0;
    int j = 1;
    //Integer j allows for reverse iteration through array b
    int i;
    for (i = 0; i < n; i++) {

        sum += a[i] * b[n-j];
        j++;
    }

    return sum;
}

//Allows user to enter two arrays of size 10, displays inner product and inner reverse product
int main()
{

    int a[10], b[10];
    printf("Enter the first array of size 10: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    printf("Enter the second array of size 10: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6],&b[7],&b[8],&b[9]);

    int prod_inn = inner_product(a, b, 10);
    int prod_inn_rev = inner_product_reverse(a, b, 10);

    printf("Inner Product is: %d\nInner Product Reverse is: %d", prod_inn, prod_inn_rev);


    return 0;
}
