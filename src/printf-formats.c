#include <stdio.h>
#include <string.h>

int main()
{
    printf("Example 1\n\n");
    int i = -42;
    unsigned int u = 42;
    float f = 3.14159;
    double d = 2.718281828;
    char c = 'A';
    char *s = "Hello, world!";
    void *p = &i;

    printf("Signed int: %d\n", i);    // %d or %i - signed decimal integer
    printf("Unsigned int: %u\n", u);  // %u - unsigned decimal integer
    printf("Hex lowercase: %x\n", u); // %x - unsigned hexadecimal integer (lowercase)
    printf("Hex uppercase: %X\n", u); // %X - unsigned hexadecimal integer (uppercase)
    printf("Octal: %o\n", u);         // %o - unsigned octal integer
    printf("Float (f): %f\n", f);     // %f - decimal floating point
    printf("Float (e): %e\n", f);     // %e - scientific notation (exponential)
    printf("Float (g): %g\n", f);     // %g - shortest representation (%f or %e)
    printf("Character: %c\n", c);     // %c - single character
    printf("String: %s\n", s);        // %s - string of characters
    printf("Pointer: %p\n", p);       // %p - pointer address
    printf("Percent sign: %%\n");     // %% - prints a literal '%'

    printf("\n\nExample 2 \n\n");

    char string[10];
    int A = -73;
    unsigned int B = 31337;

    strcpy(string, "sample");

    // Example of printing with different format string
    printf("[A] Dec: %d, Hex: %x, Unsigned: %u\n", A, A, A);
    printf("[B] Dec: %d, Hex: %x, Unsigned: %u\n", B, B, B);
    printf("[field width on B] 3: '%3u', 10: '%10u', '%08u'\n", B, B, B);
    printf("[string] %s  Address %08x\n", string, string); //string contains address %s calls value and %x converts address to hex
    //you can pass addresss of strings to %s

    // Example of unary address operator (dereferencing) and a %x format string
    printf("variable A is at address: %08x\n", &A);
}