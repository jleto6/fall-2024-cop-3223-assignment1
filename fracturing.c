// Joseph Letobar
// 5658506

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
    // Call the functions
    double distance = calculateDistance();
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();
    return 0;
}

// Function to get user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}

// Function to calculate distance
double calculateDistance() {
    
    static double distance = -1;

    if (distance == -1) {  // Check if distance needs to be calculated
        double x1, x2, y1, y2;
   
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();
    
    // Output the entered points
    printf("Point #1 entered: x1 = %g; y1 = %g\n", x1, y1);
    printf("Point #2 entered: x2 = %g; y2 = %g\n", x2, y2);
    
    // Calculate the distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("The distance between the two points is %.3lf\n", distance);
    
    return distance;
    }
}

// Function to calculate and output the perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = ((distance/2) * 2 * PI);
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return 2.5; 
}

// Function to calculate and output the area
double calculateArea() {
    double distance = calculateDistance();
    double area = ((distance/2) * (distance/2) * PI); // Assuming a square for simplicity
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 2.5;
}

// Function to calculate and output the width 
double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the city encompassed by your request is %.3lf\n", distance);
    return 1.0;
}

// Function to calculate and output the height 
double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the city encompassed by your request is %.3lfg\n", distance);
    return 1.0; 
}