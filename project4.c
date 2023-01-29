#include <stdio.h> //standard input output file 
#include <math.h> // math file 

//calculator 

double add(double a, double b) { // specifing variable function 
    return a + b;
}

double subtract(double a, double b) { //specifing variable function 
    return a - b;
}

double multiply(double a, double b) { //specifing variable function 
    return a * b;
}

double divide(double a, double b) { //specifing variable function 
    return a / b;
}

double sine(double a) { //specifing variable function 
    return sin(a);
}

double cosine(double a) { //specifing variable function 
    return cos(a);
}

double tangent(double a) { //specifing variable function 
    return tan(a);
}

double exponent(double a, double b) { //specifing variable function 
    return pow(a, b);
}

int main() {
    double num1, num2; //definning variable 
    char op; // defining charcater 

    printf("Enter an operator (+, -, *, /, s, c, t, e): "); //operator input 
    scanf("%c", &op);  // takes input &op is used to store variable 

    printf("Enter two operands: "); //command input 
    scanf("%lf %lf", &num1, &num2); 

    switch(op) { //switch and cases used to print output 
        case '+':               // addition i
            printf("%.2lf + %.2lf = %.2lf", num1, num2, add(num1, num2));
            break;

        case '-':               // subtraction 
            printf("%.2lf - %.2lf = %.2lf", num1, num2, subtract(num1, num2));
            break;

        case '*':            // multiplication 
            printf("%.2lf * %.2lf = %.2lf", num1, num2, multiply(num1, num2));
            break;

        case '/':              // division  
            printf("%.2lf / %.2lf = %.2lf", num1, num2, divide(num1, num2));
            break;

        case 's':              //sine
            printf("sin(%.2lf) = %.2lf", num1, sine(num1));
            break;

        case 'c':             //cosine
            printf("cos(%.2lf) = %.2lf", num1, cosine(num1)); //cosine function 
            break;

        case 't':           //tangential
            printf("tan(%.2lf) = %.2lf", num1, tangent(num1)); //tangential function 
            break;

        case 'e':           //exponential
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, exponent(num1, num2)); //exponential function formula 
            break;

        default:
            printf("Invalid operator"); // 
    }

    return 0; // runs without error 
}