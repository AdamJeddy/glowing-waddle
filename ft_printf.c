/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:11:56 by aahsan            #+#    #+#             */
/*   Updated: 2022/09/06 16:03:21 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Handle: c, s, p, d, i, u, x, X, %
*/

int	ft_putchar(int ch)
{
	write(1, &ch, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int		size;

	size = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[size])
		size += ft_putchar(str[size]);
	return (size);

}

static int	ft_check_conversions(const char flag, va_list args)
{
	int		i;

	i = 0;
	if (flag == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (flag == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (flag == 'p')
		i = ft_putpointer(va_arg(args, void *));
	else if (flag == 'i' || flag == 'd')

	return (i);
}

int		ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
			len += ft_check_conversions(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}