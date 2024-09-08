// Joseph Letobar
// 5658506

#include <stdio.h>
#include <math.h>

// Define PI constant
#define PI 3.14159

// Function declarations
double calculateDistance();            
void calculatePerimeter(double distance); 
void calculateArea(double distance);      
void calculateWidth(double distance);     
void calculateHeight(double distance);    

// Main function
int main(void) {
    // Call calculateDistance() to get the distance and store it in a variable
    double distance = calculateDistance();
    
    // Use the distance in the other functions
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0;
}

// Function to calculate distance
double calculateDistance() {
    // Ask for input
    int x1, x2, y1, y2;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter y2: ");
    scanf("%d", &y2);

    // Calculate the distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Output the distance
    printf("The distance between the two points is %.5f\n", distance);

    return distance;
}

// Function to calculate perimeter
void calculatePerimeter(double distance) {

    // Calculate the perimeter
    double perimeter = 2 * PI * (distance / 2.0);

    // Output the perimeter
    printf("The perimeter of the city is %.5f\n", perimeter);
}

// Function to calculate area 
void calculateArea(double distance) {

    // Calculate the area
    double area = PI * (distance / 2.0) * (distance / 2.0);

    // Output the area
    printf("The area of the city is %.5f\n", area);
}

// Function to calculate width
void calculateWidth(double distance) {
    // Output the width
    printf("The width of the city is %.5f\n", distance);
}

// Function to calculate height
void calculateHeight(double distance) {
    // Output the height
    printf("The height of the city is %.5f\n", distance);
}