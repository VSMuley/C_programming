//Created by: Vaidehi Muley
//****Sum using For Loop****//

#include <stdio.h>

int main() {

int sum = 0;
for (int i = 0; i <= 100; i= i+2) {
    sum = sum + i;
}
printf("\n%d",sum);
    return 0;
}
