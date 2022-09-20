#ifndef MAIN_H
#define MAIN_H
/**
* reset_to_98 - function that takes a pointer to an integer
* as parameter and update the value it points to.
* @*n: variable to reset to a give number
* Return: 0
*/
void reset_to_98(int *n);

/**
* swaps_int - function that swaps the vaues of two integers
* @*a: first input integer
* @*b: second input integer
* Return: 0
*/
void swaps_int(int *a, int *b);

/**
* int_strlen - is a function that return the length of a given string
* @*s: string entered for length check
* Return: 0
*/
int int_strlen(char *s);

/**
* _puts - function that prints a string
* followed by new ine
* Return: 0
*/
void _puts(char *s);

/**
* print_rev - function that prints a string in reverse
* followed by new line
* Return: 0
*/
void print_rev(char *s);

/**
* rev_string - function that reverses a string
* Return: 0
*/
void rev_string(char *s);

/**
* puts2 - function every other character of a string
* starting with the first character, followed by new line
* Return: 0
*/
void puts2(char *s);

/**
* puts_half - function that prints half of a string
* followed by new line
* Return: 0
*/
void puts_half(char *str);

/**
* print_array - function that prints n elements of an array
* followed by new line
* @*a: pointer
* @n: array variable
* Return: 0
*/
void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);
int _atoi(char *str);

#endif
