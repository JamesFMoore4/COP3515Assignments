/*Program to find max and min of user-entered numbers using pointers.
 * James Moore */

#include <stdio.h>
#include <stdlib.h>
#define N 10

/*Function that accepts an array and two variables. Iterates through array
 * and assigns maximum and minimum integer values to pointers */
void max_min(int *a, int *max, int *min) {

    *max = *a;
    *min = *a;
    int *p;

    for(p = a; p < a + N; p++) {

        if (*p > *max) {
            *max = *p;
        }
        if (*p < *min) {
            *min = *p;
        }
    }
}


/*Accepts integers from user, calls function to determine max and min, then
 * prints max and min*/
int main()
{

    int num_array[N];
    int i, max_num, min_num;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N ; i++) {

        scanf("%d", &num_array[i]);
    }

    max_min(num_array, &max_num, &min_num);

    printf("Largest: %d\nSmallest: %d\n", max_num, min_num);

    return 0;
}

