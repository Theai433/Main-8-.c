//c program calculating yearly salary of employee and tax
#include<stdio.h>

int main() {
    float salary, tax = 0;

   
   // Input the yearly salary
   
    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);

    // Calculate tax based on salary
    
    if (salary <= 400000) {
   tax = salary * 0.01; // 1% tax
    } 
    else if (salary > 400000 && salary <= 1000000) {
  tax = 400000 * 0.01 + (salary - 400000) * 0.15; // 1% tax for first 400,000 and 15% tax for the rest
    } 
    else {
   tax = 400000 * 0.01 + 600000 * 0.15 + (salary - 1000000) * 0.25; // 1% tax for first 400,000, 15% tax for next 600,000, and 25% tax for the rest
    }

    // Display the calculated tax
   
    printf("The tax for the given salary is: %.2f\n", tax);

    return 0;
}