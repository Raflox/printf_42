#include "ft_printf.h"

int main()
{
	char str[] = "+++";
	ft_printf("NULL %s NULL", NULL);
	write(1, "\n", 1);
	printf("NULL %s NULL", NULL);

}
