//Program no 01:

/*This program demonstrates how to use a pointer to access the 
value of an integer variable indirectly, allowing you to read 
or modify the value of the variable through the pointer. 
In this case, it simply prints the value of num.*/

#include <stdio.h>

int main() {
    // Declare an integer variable 'num' and initialize it with the value 10
    int num = 10;

    // Declare an integer pointer 'ptr' and make it point to the address of 'num'
    int *ptr = &num;

    // Use the pointer 'ptr' to access the value of 'num' and print it
    printf("Value of num: %d\n", *ptr);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 02:

/*This program demonstrates how to use a pointer to 
traverse and access elements in an integer array sequentially. */

#include <stdio.h>

int main() {
    // Declare an integer array 'arr' and initialize it with values 1, 2, 3, 4, and 5
    int arr[] = {1, 2, 3, 4, 5};

    // Declare an integer pointer 'ptr' and make it point to the first element of the array 'arr'
    int *ptr = arr;

    // Print the first element of the array using 'ptr'
    printf("First element: %d\n", *ptr);

    // Increment the pointer 'ptr' to point to the second element of the array
    ptr++;

    // Print the second element of the array using the updated 'ptr'
    printf("Second element: %d\n", *ptr);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 03:

/*This program demonstrates how to use pointers to pointers 
(double pointers) to access the value of a variable indirectly.
 In this case, it accesses the value of num using ptr2, which
  points to ptr1, which in turn points to num. */

#include <stdio.h>

int main() {
    // Declare an integer variable 'num' and initialize it with the value 10
    int num = 10;

    // Declare an integer pointer 'ptr1' and make it point to the address of 'num'
    int *ptr1 = &num;

    // Declare an integer pointer to a pointer 'ptr2' and make it point to the address of 'ptr1'
    int **ptr2 = &ptr1;

    // Use 'ptr2' to indirectly access the value of 'num' and print it
    printf("Value of num: %d\n", **ptr2);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 04:

/*This program demonstrates how to pass a pointer to a 
function, modify the value it points to within the 
function, and see the changes reflected in the original 
variable outside the function. */

#include <stdio.h>

// Function to increment the value pointed to by 'x'
void increment(int *x) {
    (*x)++; // Increment the value pointed to by 'x' by 1
}

int main() {
    // Declare an integer variable 'num' and initialize it with the value 5
    int num = 5;

    // Call the 'increment' function and pass the address of 'num' to it
    increment(&num);

    // Print the updated value of 'num' after the function call
    printf("Incremented value: %d\n", num);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 05:

/*This program demonstrates how to iterate through an integer 
array using a pointer and access the elements of the array in a loop. */

#include <stdio.h>

int main() {
    // Declare an integer array 'arr' and initialize it with values 1, 2, 3, 4, and 5
    int arr[] = {1, 2, 3, 4, 5};

    // Declare an integer pointer 'ptr' and make it point to the first element of the array 'arr'
    int *ptr = arr;

    // Use a 'for' loop to iterate through the array elements using the pointer 'ptr'
    for (int i = 0; i < 5; i++) {
        // Print the value of the element pointed to by 'ptr'
        printf("%d ", *(ptr + i));
    }

    // Print a newline character to end the output neatly
    printf("\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 06:

/*This program demonstrates how to use a character pointer 
to store and access a string literal. In C, string literals 
are represented as arrays of characters, and a character 
pointer can be used to point to the first character of the string. */

#include <stdio.h>

int main() {
    // Declare a character pointer 'str' and initialize 
	//it with the address of a string literal "Hello, World!"
    char *str = "Hello, World!";

    // Print the string using 'printf'
    printf("String: %s\n", str);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 07:

/*This program demonstrates the following concepts:

Dynamic memory allocation using malloc.
Checking for successful memory allocation.
Storing and retrieving values in dynamically allocated memory.
Properly releasing dynamically allocated memory using free to prevent memory leaks. */

#include <stdlib.h>

int main() {
    // Declare an integer pointer 'ptr' and allocate dynamic memory for one integer
    int *ptr = (int *)malloc(sizeof(int));

    // Check if memory allocation was successful (if 'ptr' is not NULL)
    if (ptr != NULL) {
        // Assign the value 42 to the dynamically allocated memory
        *ptr = 42;

        // Print the value stored in the dynamically allocated memory
        printf("Dynamic memory value: %d\n", *ptr);

        // Free the dynamically allocated memory to prevent memory leaks
        free(ptr);
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 08:

/* This program demonstrates how to use a pointer to an array to access 
and manipulate elements within the array. In this case, it prints
 the first element of the array arr.*/

#include <stdio.h>

int main() {
    // Declare an integer array 'arr' and initialize it with values 1, 2, 3, 4, and 5
    int arr[] = {1, 2, 3, 4, 5};

    // Declare a pointer 'ptr' to an array of integers with a size of 5, and make it point to the 'arr' array
    int (*ptr)[5] = &arr;

    // Use the pointer 'ptr' to access and print the first element of the array 'arr'
    printf("First element: %d\n", (*ptr)[0]);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 09:

/*The program demonstrates how to compare two pointers 
in C to determine whether they point to the same 
memory location or not. */

#include <stdio.h>

int main() {
    // Declare two integer variables 'num1' and 'num2' and 
	//initialize them with values 10 and 20, respectively.
    int num1 = 10, num2 = 20;

    // Declare two integer pointers 'ptr1' and 'ptr2' 
	//and make them point to the addresses of 'num1' and 'num2', respectively.
    int *ptr1 = &num1, *ptr2 = &num2;

    // Compare the two pointers using the '==' operator to 
	//check if they point to the same address.
    if (ptr1 == ptr2) {
        printf("Pointers are equal.\n");
    } else {
        printf("Pointers are not equal.\n");
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}


//Program no 10:

/*The program demonstrates how to compare two pointers 
in C to determine whether they point to the same 
memory location or not. */

#include <stdio.h>

int main() {
    // Declare two integer variables 'num1' and 'num2' and 
	//initialize them with values 10 and 20, respectively.
    int num1 = 10, num2 = 20;

    // Declare two integer pointers 'ptr1' and 'ptr2' 
	//and make them point to the addresses of 'num1' and 'num2', respectively.
    int *ptr1 = &num1, *ptr2 = &num2;

    // Compare the two pointers using the '==' operator to 
	//check if they point to the same address.
    if (ptr1 == ptr2) {
        printf("Pointers are equal.\n");
    } else {
        printf("Pointers are not equal.\n");
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}


//Program no 11:

/* This program demonstrates how to use a void pointer to point to 
an object of an unknown data type and then cast it back to the 
appropriate type for dereferencing and accessing the value.*/
#include <stdio.h>

int main() {
    // Declare an integer variable 'num' and initialize it with the value 42
    int num = 42;

    // Declare a void pointer 'ptr' and make it point to the address of 'num'
    void *ptr = &num;

    // Use the void pointer to access and print the value it points to
    // We need to cast the void pointer to an int pointer before dereferencing it
    printf("Value through void pointer: %d\n", *(int *)ptr);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 12:

/* This program demonstrates how to use structures and pointers 
to work with complex data structures like points with 
multiple attributes. */

#include <stdio.h>

// Define a structure named "Point" to represent a point with x and y coordinates
struct Point {
    int x; // Integer to store the x-coordinate
    int y; // Integer to store the y-coordinate
};

int main() {
    // Declare a structure variable named 'p' and initialize it with x=3 and y=5
    struct Point p = {3, 5};

    // Declare a pointer to a 'Point' structure and make it point to the 'p' structure
    struct Point *ptr = &p;

    // Use the pointer 'ptr' to access and print the coordinates of the point
    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 13:



/*This program demonstrates how to work with 
structures and pointers to access and 
manipulate data within the structure. */
#include <stdio.h>

// Define a structure named "Student" to represent student data
struct Student {
    char name[50]; // A character array to store the name
    int age;       // An integer to store the age
};

int main() {
    // Declare an array of 3 Student structures
    struct Student students[3];

    // Declare a pointer to a Student structure and 
	//make it point to the first element of the students array
    struct Student *ptr = students;

    // Set the age of the first student using the pointer
    ptr->age = 20;

    // Print the age of the first student using the pointer
    printf("Age of first student: %d\n", ptr->age);

    // Return 0 to indicate successful execution of the program
    return 0;
}


//Program no 14:

/*This demonstrates how you can use function 
pointers to call different functions dynamically 
based on the pointers you have assigned.*/


#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

int main() {
   /*Declare two function pointers, ptr1 and ptr2, 
   which can point to functions taking two int 
   arguments and returning int.*/
    int (*ptr1)(int, int) = &add;
    int (*ptr2)(int, int) = &subtract;
    
    // Call the add function using the ptr1 function pointer and print the result.
    printf("Sum: %d\n", ptr1(5, 7));

    // Call the subtract function using the ptr2 function pointer and print the result.
    printf("Difference: %d\n", ptr2(10, 3));
    
    // Return 0 to indicate successful execution of the program.
    return 0;
}


//Program no 15:


/*When you run this program, it will print 
each character of the "Hello" string followed
 by a space, and then a newline character to 
 produce the output: "H e l l o".*/

#include <stdio.h>

int main() {
    // Declare a character array 'str' and initialize it with the string "Hello".
    char str[] = "Hello";
    
    // Declare a character pointer 'ptr' and make it point to the start of the 'str' array.
    char *ptr = str;

    /* Start a while loop that continues until the character 
	pointed to by 'ptr' is not '\0' (the null terminator).*/
    while (*ptr != '\0') {
        // Print the character pointed to by 'ptr'.
        printf("%c ", *ptr);
        
        // Move the 'ptr' to the next character in the 'str' array.
        ptr++;
    }
    
    // Print a newline character to end the output.
    printf("\n");
    
    // Return 0 to indicate successful execution of the program.
    return 0;
}



