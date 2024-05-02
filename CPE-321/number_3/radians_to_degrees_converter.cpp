#include <iostream>
#include <cmath>

double convertToDegrees(double radians) {
    const double PI = 3.14159265359;
    return radians * (180.0 / PI);
}

int main() {
    double radians;
    
    // Input the number in radians
    std::cout << "Enter the number in radians: ";
    std::cin >> radians;

    // Convert radians to degrees
    double degrees = convertToDegrees(radians);

    // Output the result
    std::cout << "The number in degrees is: " << degrees << std::endl;

    return 0;
}
