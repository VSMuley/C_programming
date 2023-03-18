//Created by: Vaidehi Muley
//****Do - While Loop****//

#include <stdio.h>

int main() {

int count = 1;

do {
    printf("\n%d", count);
    count = ++count;
}while (count <=0); // Do-While loop executes atleast once even though the condition is false

    return 0;
}
