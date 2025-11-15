/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:00:53 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/15 21:26:45 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n >= 10)
		ft_print_unsigned(n / 10, count);
	if (*count == -1)
		return ;
	ft_print_char(n % 10 + '0', count);
}
