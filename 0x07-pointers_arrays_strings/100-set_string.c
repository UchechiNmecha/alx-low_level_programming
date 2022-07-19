#include <stdio.h>
#include "main.h"


/**
 * set_string - Set value of a pointer to a char
 * @s: Pointer to the pointer
 * @to: Pointer to set attribute
 */

void set_string(char **s, char *to)
{
	*s = to;
}
