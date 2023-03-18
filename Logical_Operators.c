//Created by: Vaidehi Muley
//****Logical Operators****//
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float age = 18;
    int height = 5.5;
    bool value1 = (age >= 18) && (height >=6); //Logical AND
    bool value2 = (age >= 18) || (height >=6);//Logical OR
    bool value3 = !(age >= 18);//Logical NOT
   
   
    printf("%d\n%d\n%d", value1,value2,value3);

    return 0;
}
