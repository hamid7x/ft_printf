/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:23:11 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/15 21:25:23 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(void *p, int *count)
{
	unsigned long	num;

	if (!p)
	{
		ft_print_str("(nil)", count);
		return ;
	}
	num = (unsigned long)p;
	ft_print_str("0x", count);
	if (*count == -1)
		return ;
	ft_print_hexa(num, count, 'x');
}
