#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct - op
 * @op: the operator
 * @f: the function associtiated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int

#endif
