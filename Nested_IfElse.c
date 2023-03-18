//Created by: Vaidehi Muley
//****Nested If - Else Statements****//
#include <stdio.h>
#include <stdbool.h>

int main() {

int age;
char loc;
printf ("Enter your age: "); // Ask user for age and location and check if eligible to vote
scanf ("\n%d", &age);
printf ("Are you from Mumbai?y/n: "); 
scanf ("\n%c", &loc);

if (age >= 18){
    if (loc == 'y'){
        printf ("Congratulations!, You are eligible to vote.");
    }
    else {
        printf ("Sorry,You are not eligible to vote.");
    }
}
else {
    printf ("Sorry,You are not eligible to vote.");
}

    return 0;
}
