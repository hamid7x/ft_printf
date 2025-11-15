/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:14:56 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/15 21:31:09 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned long num, int *count, char c)
{
	char	*hexa;
	char	ch;

	hexa = "0123456789abcdef";
	if (num >= 16)
		ft_print_hexa(num / 16, count, c);
	ch = hexa[num % 16];
	if (c == 'X' && (ch >= 'a' && ch <= 'f'))
	{
		ch -= 32;
	}
	if (*count == -1)
		return ;
	ft_print_char(ch, count);
}
