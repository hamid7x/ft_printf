/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:52:03 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/15 20:53:28 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char *format, ...);
void	ft_print_char(char c, int *cnt);
void	ft_print_number(int n, int *cnt);
void	ft_print_str(char *s, int *cnt);
void	ft_print_unsigned(unsigned int num, int *cnt);
void	ft_print_hexa(unsigned long num, int *cnt, char c);
void	ft_print_pointer(void *p, int *cnt);

#endif
