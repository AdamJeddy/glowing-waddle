/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:11:56 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/23 17:23:11 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Handle
		- c, s, p, d, i, u, x, X, %
*/
static int	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

static int	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size])
	{
		size += ft_putchar(str[size]);
	}
	return (size);

}

static int	ft_check_conversions(const char str)
{
	int		i;

	i = 0;
	if (str == 'c')
		i = ft_putchar(str);
	else if (str == 's')
		i = ft_putstr("ABC");
	return (i);
}

int		ft_printf(const char *str, ...)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
			len += ft_check_conversions(str[++i]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}