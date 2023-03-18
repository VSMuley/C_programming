//Created by: Vaidehi Muley
//****Taking Input from User****//

#include <stdio.h>

int main() {
  
 int age;
 double number;
 char character;
 float f;
 
 printf("Enter the Age: "); //Integer as input
 scanf("%d", &age);
 
 printf("Enter the Number: ");//Double as input
 scanf("%lf", &number);
 
 printf("Enter the Character: ");//Character as input
 scanf("\n%c", &character);
 
 printf("Age = %d\n ", age);
 printf("Number = %lf\n ", number);
 printf("Character = %c\n ", character);
 
 printf("Enter the Integer and Float values: ");//Multiple Inputs
 scanf("\n%d %f", &age, &f);
 printf("Age = %d ", age);
 printf("Float = %f ", f);
 
 return 0; 
}

