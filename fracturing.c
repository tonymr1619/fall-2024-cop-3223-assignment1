// Tony Romero
// 5467314

#include <stdio.h>
#include <math.h> // For sqrt and pow

#define PI 3.14159 // Define PI

double calculateDistance(); // Defining functions
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) { // Call functions
    double distance = calculateDistance();
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();

    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;

    printf("Input x1, x2: "); // Ask user for coordinates
    scanf("%lf %lf", &x1, &x2);
    printf("Input y1, y2: ");
    scanf("%lf %lf", &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Formula to calculate the total distance between the points

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); // Display the points and total distance
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    double x1, y1, x2, y2;

    printf("Input x1, x2: ");
    scanf("%lf %lf", &x1, &x2);
    printf("Input y1, y2: ");
    scanf("%lf %lf", &y1, &y2);

    double distance = calculateDistance(); // To calculate the distance
    double perimeter = 2 * PI * distance; // Formula to calculate the perimeter of city
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 3.5; // Difficulty rating
}

double calculateArea() {
    double x1, y1, x2, y2;

    printf("Input x1, x2: ");
    scanf("%lf %lf", &x1, &x2);
    printf("Input y1, y2: ");
    scanf("%lf %lf", &y1, &y2);

    double distance = calculateDistance();
    double radius = distance / 2; // Formula for radius of circle
    double area = PI * pow(radius, 2); // Formula for area of cirle using pow to calculate square of radius

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 4;
}

double calculateWidth() {
    double x1, y1, x2, y2;

    printf("Input x1, x2: "); 
    scanf("%lf %lf", &x1, &x2);
    printf("Input y1, y2: ");
    scanf("%lf %lf", &y1, &y2);

    double distance = calculateDistance();
    double width = distance; // Width is same as distance

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 2.5;
}
double calculateHeight() {
    double x1, y1, x2, y2;

    printf("Input x1, x2: ");
    scanf("%lf %lf", &x1, &x2);
    printf("Input y1, y2: ");
    scanf("%lf %lf", &y1, &y2);

    double distance = calculateDistance();
    double height = distance; // Height is same as distance

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 2;
}
