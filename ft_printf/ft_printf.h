/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:18:13 by nadesjar          #+#    #+#             */
/*   Updated: 2022/04/26 16:37:33 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int		ft_choose_action(va_list choose, const char c);
int		ft_putptr(unsigned long int nbr, int i);
int		ft_put_unsigned(unsigned int nbr);
int		ft_printf(const char *str, ...);
int		ft_puthexa(unsigned int nbr, const char c);
int		ft_hexa_len(unsigned int nbr);
int		ft_putpcent(void);
int		ft_putchar(char c);
int		ft_put_nbr(int n);
int		ft_print_hex(unsigned int nbr, const char c);

size_t	ft_putstr(const char *str);
size_t	ft_nbrlen(long long n);

#endif
