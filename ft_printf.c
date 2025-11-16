/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:54:58 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/16 09:59:33 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_valid_conversion(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	handle_conversion(char c, va_list args, int *count)
{
	if (c == 'c')
		ft_print_char((va_arg(args, int), count);
	else if (c == 's')
		ft_print_str(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_print_number(va_arg(args, int), count);
	else if (c == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_print_hexa(va_arg(args, unsigned int), count, c);
	else if (c == 'p')
		ft_print_pointer(va_arg(args, void *), count);
	else if (c == '%')
		ft_print_char('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_printed;

	if (!format)
		return (-1);
	va_start(args, format);
	total_printed = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			if (!is_valid_conversion("cspdiuxX%", *(format + 1)))
				return (-1);
			format++;
			handle_conversion(*format, args, &total_printed);
		}
		else
			ft_print_char(*format, &total_printed);
		if (total_printed == -1)
			return (-1);
		format++;
	}
	va_end(args);
	return (total_printed);
}
