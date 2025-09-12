EXPERIMENT 1

1) To print hello message on screen

Objective:

Write a program to print HELLO message on O/p screen.

Resources Required:

Hardware Requirement: Computer.

Software Requirement: Dev C++ Software.

Theory:

3/7

The #include command occurs before the program starts, and loads libraries that contain the functions you need. In this example, stdio.h lets us use the printf() functions. The int main() command tells the compiler that the program is running the function called "main" and that it will return an integer when it is finished. The () indicate that everything inside them is part of the function, printf() functions are inbuilt library functions in C programming language which are available in C library by default. We use printf() function with %d format specifier to display the value of an integer variable.

Similarly, %c is used to display character, %f for float variable, %s for string variable, %lf for double and %x for hexadecimal variable.

Steps to check the HELLO on screen are as follows:

The #include <stdio.h> is a preprocessor command. The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively. If you use printf() function without writing #include <stdio.h>, the program will not be compiled.

The execution of a C program starts from the main() function.

The printf() is a library function to send formatted output to the screen. In this program, the printf() displays "HELLO" text on the screen.

The return 0; statement is the "Exit status of the program.

Algorithm:

Step1: BEGIN

Step2: PRINT "Hello"

Step3: END

OBSERVATION: The program was successfully compiled and executed using the Dev C++ software. Upon execution, the output screen displayed the message "HELLO", confirming that the printf() function worked as expected.

Terminal output (sample): HELLO
