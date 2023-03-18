//Created by: Vaidehi Muley
//****Type Conversion****//
#include <stdio.h>

int main() {
    
    float a = 5.6753;
    int b = 9; //b converted from integer to float
    
    int result1 = a + b;
    double result2 = a + b;
    float result3 = a + b;
    double result4 = (int)a + b; //Explicit Type Conversion
    
    printf(" %d\n %lf\n %f\n %lf", result1, result2, result3, result4);

    return 0;
}
