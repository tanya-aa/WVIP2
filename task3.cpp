#include <iostream>
#include <string>
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0;
    }
    return a / b;
}
int main() {
    double num1, num2;
    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
        }
        switch (choice) {
            case 1:
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Result: " << divide(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
