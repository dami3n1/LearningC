#include <stdio.h>

int main()
{

    printf("Example 1:\n\n");

    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_pointer;
    int *int_pointer;

    char_pointer = char_array;
    int_pointer = int_array;

    for (i = 0; i < 5; i++)
    { // iterate through the int array with the int_pointer
        printf("[integer pointer] points to %p, which contains the integer %d\n",
               int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
    }

    for (i = 0; i < 5; i++)
    { // iterate through the char array with the char_pointer
        printf("[char pointer] points to %p, which contains the char '%c'\n",
               char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
    }

    // this code wont work because you are seeting an array of a different type to a pointer of a different type
    // if you ignore warnings you will get random data because the data is being read from char array as if it was
    // a int but char only use 1 byte but ints use 4 bytes
    /*printf("\n\nExample 2:\n\n");

    char_pointer = int_array; // The char_pointer and int_pointer now
    int_pointer = char_array; // point to incompatable data types

    for (i = 0; i < 5; i++)
    { // iterate through the int array with the int_pointer
        printf("[integer pointer] points to %p, which contains the char '%c'\n",
               int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
    }

    for (i = 0; i < 5; i++)
    { // iterate through the char array with the char_pointer
        printf("[char pointer] points to %p, which contains the integer %d\n",
               char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
    } */

    printf("\n\nExample 3:\n\n");

    // tells pointer to read as a char or as a int
    char_pointer = (char *)int_array; // Typecast into the
    int_pointer = (int *)char_array;  // pointer's data type

    for (i = 0; i < 5; i++)
    { // iterate through the int array with the int_pointer
        printf("[integer pointer] points to %p, which contains the char '%c'\n",
               int_pointer, *int_pointer);
        int_pointer = (int *)((char *)int_pointer + 1);
        //(int *) reads the char like an int. doing ((char *)int_pointer + 1)
        // tells it to move up one if it was a char (1 byte)
    }

    for (i = 0; i < 5; i++)
    { // iterate through the char array with the char_pointer
        printf("[char pointer] points to %p, which contains the integer %d\n",
               char_pointer, *char_pointer);
        char_pointer = (char *)((int *)char_pointer + 1);
        //(char *) reads the int like an char. doing ((int *)char_pointer + 1)
        // tells it to move up one if it was a int(4 bytes)
    }

    printf("\n\nExample 4:\n\n");

    // a void pointer can be a typeless pointer that can be used for multiple things
    // pointers need a type to read or write using void makes a "typeless" variable
    //void doesnt care about data or data type it just stores location of data
    void *void_pointer;

    //sets char array in the void pointer
	void_pointer = (void *) char_array;

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[char pointer] points to %p, which contains the char '%c'\n",
            void_pointer, *((char *) void_pointer));
		void_pointer = (void *) ((char *) void_pointer + 1);
        //moves as char in the void pointer then stores location in the void pointer
	}

    //sets int array in void pointer
	void_pointer = (void *) int_array;
	
	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[integer pointer] points to %p, which contains the integer %d\n",
            void_pointer, *((int *) void_pointer));
		void_pointer = (void *) ((int *) void_pointer + 1);
        //moves as int in the void pointer then stores location in the void pointer
	}

    //This program causes a segmentation fault in 64 bit because you are
    // trying to put a pointer (64 bit) into a unsigned int (32 bit)
    printf("\n\nExample 5:\n\n");

    // this program basically sets the unsigned int into the typecast then prints not recomended to do this
    // if you do this in a real company you will probably get fired
	unsigned int hacky_nonpointer;

	hacky_nonpointer = (unsigned int) char_array;

	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[hacky_nonpointer] points to %p, which contains the char '%c'\n",
            hacky_nonpointer, *((char *) hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(char);
	}

	hacky_nonpointer = (unsigned int) int_array;
	
	for(i=0; i < 5; i++) { // iterate through the int array with the int_pointer
		printf("[hacky_nonpointer] points to %p, which contains the integer %d\n",
            hacky_nonpointer, *((int *) hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(int);
	}

}