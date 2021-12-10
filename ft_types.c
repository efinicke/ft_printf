/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:08:01 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_c_conv(va_list params, t_printf *tab)
{
	char c;
	char *str;

	c = va_arg(params, int);
	if (c == '\0')
	{
		c = '\021';
		tab->backslash_zero = 1;
	}
	str = ft_c_to_str(c);
	tab->type = 'c';
	return (str);
}

char	*ft_str_conv(va_list params, t_printf *tab)
{
	char *str;

	str = va_arg(params, char *);
	if (str == NULL)
		str = "(null)";
	str = ft_strdup(str);
	tab->type = 's';
	return (str);
}
