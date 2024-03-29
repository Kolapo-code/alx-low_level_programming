#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
int (*get_op_func(char *s))(int, int);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void num(int r, int n);


#endif
