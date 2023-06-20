Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Why C programming is awesome
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official C coding style and how to check your code with betty-style
How to find the right header to include in your source code when using a standard library function
How does the main function influence the return value of the program

0-putchar.c  Write a program that prints _putchar, followed by a new line.

The program should return 0

1-alphabet.c  Write a function that prints the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet(void);
You can only use _putchar twice in your code

2-print_alphabet_x10.c  Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code

3-islower.c  Write a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise

4-isalpha.c  Write a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise

5-sign.c  Write a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero

6-abs.c  Write a function that computes the absolute value of an integer.

Prototype: int _abs(int);

7-print_last_digit.c  Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit

8-24_hours.c  Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);

9-times_table.c  Write a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);

10-add.c  Write a function that adds two integers and returns the result.

Prototype: int add(int, int);

11-print_to_98.c  Write a function that prints all natural numbers from n to 98, followed by a new line.

Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library
