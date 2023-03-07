/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:27:44 by osyuceba          #+#    #+#             */
/*   Updated: 2023/03/07 15:27:45 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(char c, va_list va)
{
	int	sum;

	sum = 0;
	if (c == 'c')
				sum += ft_putchar(va_arg(va, int)); //listeye ekle ve bir sonraki elemanı tut
	else if (c == 's')
		sum += ft_putstr(va_arg(va, char *));
	else if (c == 'd' || c == 'i')
		sum += ft_putnbr(va_arg(va, int), 10, 0);
	else if (c == 'u')
		sum += ft_putnbr(va_arg(va, unsigned int), 10, 0);
	else if (c == 'x')
		sum += ft_putnbr(va_arg(va, unsigned int), 16, 0);
	else if (c == 'X')
		sum += ft_putnbr(va_arg(va, unsigned int), 16, 1);
	else if (c == 'p')
		sum += ft_putptr(va_arg(va, unsigned long), 16, 0);
	else
		sum += ft_putchar(c);
	return (sum);
}

int	ft_printf(const char *str, ...) // variadic function
{
	va_list	va; //list oluşturuldu (va adında)
	int		sum; // uzunluk

	va_start(va, str); //strden sonra başla
	sum = 0;
	while (*str)
	{
		if (*str == '%')
		{
			sum += ft_control(*(str + 1), va);
			str++;
		}
		else
			sum += ft_putchar(*str /* = str[i] */);
		str++;
	}
	va_end(va); //listeyi kapa ve belleği temizle
	return (sum);
}
int main() {
	//ft_printf("%s", NULL);
	int sum = ft_printf("fatih\n%s\n%d\n","mehmet",5);
	ft_printf("%d", sum);
}

// int main() {
// 	char *s = NULL;
// 	ft_printf("%s", s);
// } //null basma maini

//va_list ve makroları
//variadic fonksiyon
//taban dönüşümleri

// variadic fonksiyon kullanarak max-min, toplam bulan fonksiyon
// null basma

// ft_printf("%s%", "fatih"); // fatihfatih
// ft_printf("((12&s)");
