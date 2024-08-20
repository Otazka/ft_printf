/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:18:15 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/18 13:43:26 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

void			ft_putcharacter_length(char character, int *length);
void			ft_string(char *args, int *length);
void			ft_number(int number, int *length);
void			ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void			ft_unsigned_int(unsigned int u, int *length);
void			ft_pointer(size_t pointer, int *length);
int				ft_printf(const char *string, ...);
#endif
