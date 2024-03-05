/*Practice assignment 3. James Moore. Requests coordinates from user and calculates area and center point of rectangle*/
#include <stdio.h>
#include <stdlib.h>

/* structure for a point object containing coordinates x and y*/
struct point {
    float x;
    float y;
};

/*structure for a rectangle object containing two "point" structures*/
struct rectangle {
    struct point upper_left;
    struct point lower_right;
};

/*calculates the coordinates of the center point of a rectangle r and returns a point structure*/
struct point center_of_rectangle(struct rectangle r) {

    struct point center;

    center.x = (r.lower_right.x - r.upper_left.x) / 2 + r.upper_left.x;
    center.y = (r.upper_left.y - r.lower_right.y) / 2 + r.lower_right.y;

    return center;

}

/*Calculates the area of a rectangle rect and returns a float value for area*/
float area_of_rectangle(struct rectangle rect) {

    float area;
    area = (rect.lower_right.x - rect.upper_left.x) * (rect.upper_left.y - rect.lower_right.y);
    return area;

}

/*Requests user input to create a rectangle structure and then calls the two previously listed functions to return center point and area*/
int main()
{

    struct rectangle r;
    struct point p;

    printf("Enter upper left and lower right points: ");
    scanf("%f %f %f %f", &r.upper_left.x, &r.upper_left.y, &r.lower_right.x, &r.lower_right.y);

    printf("The area of the rectangle is: %f\n", area_of_rectangle(r));

    p = center_of_rectangle(r);
    printf("The center of the rectangle is %f %f", p.x, p.y);


    return 0;
}
