#include "printf.h"
#include <limits.h>
#include <stdio.h>

int main()
{
    char *p = "haha";
    // printf("%i", ft_printf(NULL));
    // printf("%i", printf(NULL));
    // ft_printf("Hello%c\n", 'a');
    // ft_printf("Hello%s\n", "haha");
    // ft_printf("Hello%i\n", INT_MIN);
    // ft_printf("Hello%u %i\n", -43, 0);
    // ft_printf("Hello%x %X\n", 433,-124545);
    printf("%i\n", ft_printf("%s %p %s", p, NULL, p));
    printf("%i\n", printf("%s %p %s", p, NULL, p));
}