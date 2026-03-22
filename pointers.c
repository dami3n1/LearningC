#include <stdio.h>
#include <string.h>

int main() {
    printf("Example 1 \n\n");

   char str_a[20];  // a 20 element character array
   char *pointer;   // a pointer, meant for a character array
   char *pointer2;  // and yet another one

   strcpy(str_a, "Hello World\n");
   pointer = str_a; // set the first pointer to the start of the array
   printf(pointer);

   pointer2 = pointer + 2; // set the second one 2 bytes further in
   printf(pointer2);       // print it
   strcpy(pointer2, "y you guys!\n"); // copy into that spot
   printf(pointer);        // print again

   //seperate examples
   printf("\n\nExample 2\n\n");

   int int_var = 5;
   int *int_ptr;

   int_ptr = &int_var; // put the address of int_var into int_ptr

   printf("int_ptr = 0x%08x\n", int_ptr); //location of int_var
   printf("int_var = 0x%08x\n", &int_var); //location of int_var
   printf("&int_ptr = 0x%08x\n", &int_ptr); // location of int_ptr
   printf("*int_ptr = 0x%08x\n\n", *int_ptr); // value of int_var

   printf("int_var is located at 0x%08x and contains %d\n", &int_var, int_var);
   printf("int_ptr is located at 0x%08x, contains 0x%08x, and points to %d\n\n", 
      &int_ptr, int_ptr, *int_ptr);
}