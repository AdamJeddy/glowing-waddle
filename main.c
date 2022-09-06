#include "ft_printf.h"

#include <limits.h>

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"

int main()
{
	int i;

	i = 33;
	ft_printf(COLOR_YELLOW "*** FT_PRINTF TESTS ***\n");

	ft_printf(COLOR_MAGENTA "Testing the c flag:\n" COLOR_RESET);
	while (i < 127)
		ft_printf("'%c'  ", i++);

	ft_printf(COLOR_MAGENTA "\n\nTesting the s flag:\n" COLOR_RESET);
		ft_printf(COLOR_CYAN "Empty string:" COLOR_RESET " '%s'\n", "");
		ft_printf(COLOR_CYAN "Normal string:" COLOR_RESET " '%s'\n", "Hello World!");
		ft_printf(COLOR_CYAN "Numbers as string:" COLOR_RESET " '%s'\n", "0123456789");
		ft_printf(COLOR_CYAN "Tabs:" COLOR_RESET "  '%s' \n", "\t");
		ft_printf(COLOR_RED "Null: " COLOR_RESET " '%s' \n", NULL);

	
	ft_printf(COLOR_MAGENTA "\nTesting the p flag:\n" COLOR_RESET);
		ft_printf(COLOR_CYAN "Zero: " COLOR_RESET " %p\n", 0);
		ft_printf(COLOR_CYAN "Negative -1: " COLOR_RESET " %p\n", -1);
		ft_printf(COLOR_CYAN "Positive 1: " COLOR_RESET " %p\n", 1);
		ft_printf(COLOR_CYAN "Positive 15, 16, 17: " COLOR_RESET " %p %p %p\n", 15, 16, 17);
		ft_printf(COLOR_CYAN "Int Max & MIN: " COLOR_RESET " %p | %p\n", INT_MAX, INT_MIN);
		ft_printf(COLOR_CYAN "Unsigned Int Max & -Max: " COLOR_RESET " %p | %p\n", UINT_MAX, -UINT_MAX);
		ft_printf(COLOR_CYAN "Long Max & MIN: " COLOR_RESET " %p | %p\n", LONG_MAX, LONG_MIN);
		ft_printf(COLOR_CYAN "Unsigned Long Max & -Max: " COLOR_RESET " %p | %p\n", ULONG_MAX, -ULONG_MAX);



	return (0);
}