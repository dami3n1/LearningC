#include <stdio.h> // include a library with other pre made functions like printf
#include <string.h> // for strcpy

int main(){// main is always an int because it has to return the exit value 0=good, other #= bad
    //an array that stores a character every element it needs in the array
    char str_a[20]; //20 chracter array but only 7 will be used the rest will just have garbage value unless you assing them something
    str_a[0] = 'H';
    str_a[1] = 'e';
    str_a[2] = 'l';
    str_a[3] = 'l';
    str_a[4] = 'o';
    str_a[5] = '\n';
    str_a[6] = 0; // null byte to let any function that is dealing with the string to stop operations there
    printf(str_a);

    //manually putting the chracters is tedious so using strcpy is faster and easier to read
    char str_b[20];

    strcpy(str_a, "strcpy hello\n");
    printf(str_a);

    //you would want to print it with like 
    //printf(%s, str_b)
    //also arays always have to be the same type according to what you assigned it in this case char
} 