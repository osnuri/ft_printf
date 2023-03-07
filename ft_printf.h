/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:31:01 by osyuceba          #+#    #+#             */
/*   Updated: 2023/03/07 15:31:03 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# ifndef LOWER_BASE
#  define LOWER_BASE "0123456789abcdef"
# endif

# ifndef UPPER_BASE
#  define UPPER_BASE "0123456789ABCDEF"
# endif

int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnbr(long double nbr, int base, int is_upper);
int			ft_putptr(long double nbr, int base, int is_upper);
int			ft_printf(const char *str, ...);
int			ft_control(char c, va_list va);

#endif