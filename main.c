#include "ft_printf.h"

int main()
{
	char c = 'c';
	ft_printf("char = %c\n",c); /* Output = c*/
	char *str = "This is tester code :)";
	ft_printf("str = %s\n",str); /* Output = This is tester code :)*/
	ft_printf("pointer = %p\n", str); /* Output = 0x10f74df7e (like this)*/
	ft_printf("int = %d\n", 3); /* Output = 3*/
	unsigned int num = 1231233212;
	ft_printf("unsigned int = %u\n",num); /* Output = 1231233212 */
	ft_printf("percent = %%\n"); /* Output = % */
	ft_printf("hex = %x\n", 1233231); /* Output = 12d14f */
	ft_printf("hex = %X\n", 1233231); /* Output = 12D14F */
}