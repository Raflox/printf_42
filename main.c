#include "libftprintf.h"

int main()
{
	char str[] = "+++";
	ft_printf("%: % % %%% |char: %c str: %s d: %d i: %i X: %X x: %x p: %p%%", 65 + 256, str, 0x65, 0x65, 1200, 1200, str);
	write(1, "\n", 1);
	printf("%: % % %%% |char: %c str: %s d: %d i: %i X: %X x: %x p: %p%%", 65 + 256, str, 0x65, 0x65, 1200, 1200, str);

}
