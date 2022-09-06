/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:28:53 by aahsan            #+#    #+#             */
/*   Updated: 2022/09/06 15:59:04 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_get_ptr_size(unsigned long num)
{
	int		i;

	i = 0;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

static void ft_putptr(unsigned long num)
{
	if (num > 17)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else if (num < 10)
		ft_putchar(num + '0');
	else
		ft_putchar(num - 10 + 'a');
}

int ft_putpointer(void *ptr)
{
	int				size;
	unsigned long	value;

	size = 2;
	value = (unsigned long) ptr;
	write(1, "0x", 2);
	if (value == 0)
		size += write(1, "0", 1);
	else
		ft_putptr(value);
	size = ft_get_ptr_size(value);
	return (size);
}