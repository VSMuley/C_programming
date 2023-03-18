//Created by: Vaidehi Muley

//****Integer Datatype and Segmentation Fault****//

#include <stdio.h>

int main() {
  
  int var = 45;
  printf("%d\n", var); //print decimal value of the number
  printf("%b\n", var); //print binary value of the number
  
  var = 31;
  printf("%d\n", var); //Variable value can be changed at any point within the code
  
  int var2 = var;
  printf("%d\n", var2); //assign one variable value to another variable
  
  printf(var); //Gives segmentation fault
  
  return 0; 
}
