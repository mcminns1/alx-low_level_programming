#ifndef FUNCTION_POINTERS_MAIN_H
#define FUNCTION_POINTERS_MAIN_H

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));





#endif
