/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:10:52 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/15 21:11:53 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number(int n, int *cnt)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_print_char('-', cnt);
		nb *= -1;
	}
	if (nb >= 10)
		ft_print_number(nb / 10, cnt);
	ft_print_char(nb % 10 + '0', cnt);
}
