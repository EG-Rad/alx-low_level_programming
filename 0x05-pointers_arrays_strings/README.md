0x05. C - Pointers, arrays and strings

Concepts
For this project, we expect you to look at these concepts:

Pointers and arrays
Data Structures

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables

Tasks

0. 98 Battery st.
mandatory
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);
File: 0-reset_to_98.c

1. Don't swap horses in crossing a stream
mandatory
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
File: 1-swap.c

2. This report, by its very length, defends itself against the risk of being read
mandatory
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
2-strlen.c

3. I do not fear computers. I fear the lack of them
mandatory
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
3-puts.c

4. I can only go one way. I've not got a reverse gear
mandatory
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
4-print_rev.c

5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
mandatory
Write a function that reverses a string.

Prototype: void rev_string(char *s);
File: 5-rev_string.c

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
6-puts2.c

7. Winning is only half of it. Having fun is the other half
mandatory
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
File: 7-puts_half.c

8. Arrays are not pointers
mandatory
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
File: 8-print_array.c

9. strcpy
mandatory
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
