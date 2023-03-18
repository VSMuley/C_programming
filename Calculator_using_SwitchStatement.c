//Created by: Vaidehi Muley
//****Calculator using Switch Statement****//

#include <stdio.h>

int main() {

char character;
int num1, num2;

printf("Enter the operation you want the calculator to perform (+, -, *, /, %) ");
scanf("\n%c", &character);
printf("Enter the two numbers with space after first one: ");
scanf("\n%d %d", &num1, &num2);


switch (character){
    
    case '+':
        printf("%d", (num1 + num2));
        break;
    case '-':
        printf("%d", (num1 - num2));
        break;
    case '*':
        printf("%d", (num1 * num2));
        break;
    case '/':
        printf("%d", (num1 / num2));
        break;
    case '%':
        printf("%d", (num1 % num2));
        break;
    
    default:
        printf("Operation not supported by Calculator");
    
}

    return 0;
}
