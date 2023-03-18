//Created by: Vaidehi Muley
//****Arithmetic Operators****//
#include <stdio.h>

int main() {
    
    float x = 12.1, y = 3.4;
    int a = 4, b = 3;
    float division, modulus, add, sub, mult, incr, decr;
    int divi, mod;
    
    divi = x/y;
    division = x/y;
    modulus = a % b;
    mod = a % b;
    add = x + y; 
    sub = x - y; 
    mult = x * y; 
    incr = ++x; 
    decr = --y; 
    
    
    printf("%d\n %f\n %d\n %f\n %f\n %f\n %f\n %f\n %f\n", divi,division, mod, modulus, add, sub, mult, incr, decr);

    return 0;
}
