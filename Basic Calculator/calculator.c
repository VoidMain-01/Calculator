#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void displayMenu() {
    printf("\n========================================\n");
    printf("         CLI CALCULATOR MENU\n");
    printf("========================================\n");
    printf("1.  Addition\n");
    printf("2.  Subtraction\n");
    printf("3.  Multiplication\n");
    printf("4.  Division\n");
    printf("5.  Modulus\n");
    printf("6.  Power (x^y)\n");
    printf("7.  Square Root\n");
    printf("8.  Factorial\n");
    printf("9.  Clear Screen\n");
    printf("0.  Exit\n");
    printf("========================================\n");
    printf("Enter your choice: ");
}

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
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}

long long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of negative number doesn't exist!\n");
        return -1;
    }
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}



int main() {
    int choice, a_int, b_int;
    double a, b, result;
    
    printf("Welcome to CLI Calculator!\n");
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = add(a, b);
                printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = subtract(a, b);
                printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
                break;
                
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = multiply(a, b);
                printf("Result: %.2f × %.2f = %.2f\n", a, b, result);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = divide(a, b);
                if (b != 0)
                    printf("Result: %.2f ÷ %.2f = %.2f\n", a, b, result);
                break;
                
            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &a_int, &b_int);
                if (b_int != 0) {
                    int mod_result = modulus(a_int, b_int);
                    printf("Result: %d %% %d = %d\n", a_int, b_int, mod_result);
                }
                break;
                
            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result: %.2f ^ %.2f = %.2f\n", a, b, result);
                break;
                
            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Error: Square root of negative number!\n");
                } else {
                    result = sqrt(a);
                    printf("Result: √%.2f = %.2f\n", a, result);
                }
                break;
                
            case 8:
                printf("Enter a non-negative integer: ");
                scanf("%d", &a_int);
                long long fact = factorial(a_int);
                if (fact != -1)
                    printf("Result: %d! = %lld\n", a_int, fact);
                break;
                
            case 9:
                system("clear || cls");
                printf("Screen cleared!\n");
                break;
                
            case 0:
                printf("\nThank you for using CLI Calculator!\n");
                printf("Goodbye!\n");
                exit(0);
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}