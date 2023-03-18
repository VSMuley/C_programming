//Created by: Vaidehi Muley
//****Type Conversion****//
#include <stdio.h>

int main() {
    
    float a = 5.6753;
    int b = 9; //b converted from integer to float
    
    int result1 = a + b;
    double result2 = a + b;
    float result3 = a + b;
    
    printf(" %d\n %lf\n %f", result1, result2, result3);

    return 0;
}
