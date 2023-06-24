#include<stdio.h>

// Function declarations
void add(float*, float*, float*);
void subtract(float*, float*, float*);
void multiply(float*, float*, float*);
void divide(float*, float*, float*);

int main()
{
    float n1, n2, result;
    char op;
    float *a, *b, *c;  // Pointers to store the input values and the result

    printf("Enter 2 numbers: ");
    scanf("%f%f", &n1, &n2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    a = &n1;  // Store the addresses of n1, n2, and result in the pointers
    b = &n2;
    c = &result;

    switch(op)
    {
        case '+': 
            add(a, b, c);  // Call the add() function with pointers as parameters
            printf("Result: %0.2f\n", *c);
            break;

        case '-': 
            subtract(a, b, c);  // Call the subtract() function with pointers as parameters
            printf("Result: %0.2f\n", *c);
            break;

        case '*': 
            multiply(a, b, c);  // Call the multiply() function with pointers as parameters
            printf("Result: %0.2f\n", *c);
            break;

        case '/': 
            if(n2 == 0)  // Check for division by zero
            {
                printf("Error: Division by zero\n");
                break;
            }
            divide(a, b, c);  // Call the divide() function with pointers as parameters
            printf("Result: %0.2f\n", *c);
            break;

        default: 
            printf("Invalid operator\n");
            break;
    }

    return 0;
}

// Function definitions

// Add two numbers
void add(float* x, float* y, float* z)
{
    *z = *x + *y;  // Dereference the pointers to get the actual values
}

// Subtract two numbers
void subtract(float* x, float* y, float* z)
{
    *z = *x - *y;  // Dereference the pointers to get the actual values
}

// Multiply two numbers
void multiply(float* x, float* y, float* z)
{
    *z = *x * *y;  // Dereference the pointers to get the actual values
}

// Divide two numbers
void divide(float* x, float* y, float* z)
{
    *z = *x / *y;  // Dereference the pointers to get the actual values
}