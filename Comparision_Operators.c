//Created by: Vaidehi Muley
//****Comparision Operators****//
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float num1 = 3.00;
    int num2 = 3;
    bool value1 = (num1 > num2);
    bool value2 = (num1 < num2);
    bool value3 = (num1 == num2);
    bool value4 = (num1 != num2);
    bool value5 = (num1 >= num2);
    bool value6 = (num1 <= num2);
   
    printf("%d\n%d\n%d\n%d\n%d\n%d", value1,value2,value3,value4,value5,value6);

    return 0;
}
