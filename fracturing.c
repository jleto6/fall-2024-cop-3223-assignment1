// Joseph Letobar
// 5658506

#include <stdio.h>
#include <math.h>

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
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    
    // Calculate the distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    //printf("The distance between the two points is %.3f\n", distance);
    
    return distance;
}

// Function to calculate and output the perimeter (same as distance)
double calculatePerimeter() {
    double distance = calculateDistance();
    printf("The perimeter of the city1 is %.3f\n", distance);
    return 2.0; // Difficulty scale, 1.0 is easy and 5.0 is hard
}

// Function to calculate and output the area (using the distance as an approximation for simplicity)
double calculateArea() {
    double distance = calculateDistance();
    double area = distance * distance; // Assuming a square for simplicity
    printf("The area of the city encompassed by your request is %.3f\n", area);
    return 2.0; // Difficulty scale, 1.0 is easy and 5.0 is hard
}

// Function to calculate and output the width (same as distance)
double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the city encompassed by your request is %.3f\n", distance);
    return 2.0; // Difficulty scale, 1.0 is easy and 5.0 is hard
}

// Function to calculate and output the height (same as distance)
double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the city encompassed by your request is %.3f\n", distance);
    return 2.0; // Difficulty scale, 1.0 is easy and 5.0 is hard
}