#include <stdio.h>

/**
 * de - a function that prints a string
 */

void de(void) __attribute__((constructor))

void de(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

