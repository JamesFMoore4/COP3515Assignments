#include <stdio.h>
#include <stdlib.h>

int main()
{

    int date1m, date1d, date1y, date2m, date2d, date2y;
    int sum1 = 1;
    int sum2 = 1;

    while (sum1 != 0) {

        printf("Enter date 1 MM/DD/YY: ");
        scanf("%d/%d/%d", &date1m, &date1d, &date1y);
        sum1 = date1m + date1d + date1y;

        if (sum1 == 0){
            break;
        }

        printf("Enter date 2 MM/DD/YY: ");
        scanf("%d/%d/%d", &date2m, &date2d, &date2y);
        sum2 = date2m + date2d + date2y;

        if (sum2 == 0) {
            break;
        }


        if (date1y < date2y) {
            printf("Date 1 comes first on the calendar\n");
        }

        else if (date2y < date1y) {
            printf("Date 2 comes first on the calendar\n");
        }
        else {
            if (date1m < date2m) {
                printf("Date 1 comes first on the calendar\n");
            }
            else if (date2m < date1m) {
                printf("Date 2 comes first on the calendar\n");
            }
            else {
                if (date1d < date2d) {
                    printf("Date 1 comes first on the calendar\n");
                }
                else if (date2d < date1d) {
                    printf("Date 2 comes first on the calendar\n");
                }
            }
        }
    }

    return 0;
}
