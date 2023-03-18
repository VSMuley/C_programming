//Created by: Vaidehi Muley
//****Arithmetic Operators****//
#include <stdio.h>

int main() {
    
    float x = 12.1, y = 3.4;
    int a = 4, b = 3;
    float division, modulus, add, sub, mult, incr, decr, z;
    int divi, mod;
    
    divi = x/y; //Integer value
    division = x/y; 
    modulus = a % b;
    mod = a % b; // Integer value
    add = x + y; 
    sub = x - y; 
    mult = x * y; 
    incr = ++x; 
    decr = --y; 
    
    z = 20 - 3 / 5 + 4 % 3; //Operator precedance
    
    printf("%d\n %f\n %d\n %f\n %f\n %f\n %f\n %f\n %f\n", divi,division, mod, modulus, add, sub, mult, incr, decr);
    printf("%f", z);

    return 0;
}
