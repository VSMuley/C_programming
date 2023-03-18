//Created by: Vaidehi Muley
//****Multiplication Table using While Loop****//

#include <stdio.h>

int main() {

int num, count = 1;
printf("Enter the number whose multiplication table is required: ");
scanf("\n%d", &num);

while (count <= 10) {
    printf("\n%d", count*num);
    count = ++count;
}

    return 0;
}
