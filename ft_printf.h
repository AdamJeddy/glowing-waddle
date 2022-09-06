/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:43:52 by aahsan            #+#    #+#             */
/*   Updated: 2022/09/06 15:45:17 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINT_H
# define FT_PRINT_H

#include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

int		ft_putstr(char *str);
int		ft_putchar(int ch);
int		ft_putpointer(void *ptr);



# endif