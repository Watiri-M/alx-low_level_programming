#include <stdio.h>
#include "main.h"

int main(void)

{

	char s[] = "Main.\n";
	char *p;

	p = leet(s);
	printf("%s", p);

	printf("%s", s);

	return (0);

}
