#include <iostream>
#include <cmath>

int main() {
    // Part 1: Add numbers from 1 to 10
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    std::cout << "Sum of numbers from 1 to 10: " << sum << std::endl;

    // Part 2: Find square root of numbers from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        double squareRoot = sqrt(i);
        std::cout << "Square root of " << i << " is: " << squareRoot << std::endl;
    }

    // Part 3: Solve a quadratic equation for fixed coefficients
    double a = 1.0;
    double b = -3.0;
    double c = 2.0;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Find roots
    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        std::cout << "Root 1 = Root 2 = " << root << std::endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}
