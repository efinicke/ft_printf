/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:53:34 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_p_conv(va_list params, t_printf *tab)
{
	void *p;
	char *str;

	p = va_arg(params, void *);
	str = ft_itoa_base_0x((uintptr_t)p, "0123456789abcdef", tab);
	if ((str[0] == '0' && str[1] == 'x' && str[2] == '0' && tab->point == 1)
			|| (tab->digit_one == 0 && tab->digit_two == 0 && p == NULL))
	{
		free(str);
		str = ft_strdup("0x");
	}
	tab->type = 'p';
	return (str);
}

char	*ft_d_conv(va_list params, t_printf *tab)
{
	int		signed_int;
	char	*str;

	signed_int = va_arg(params, int);
	if ((signed_int == 0 && tab->point == 1 && (tab->digit_two == 0
	|| (tab->digit_two == -1 && tab->stella == 1)))
	&& tab->dgt2_case_minus1 == 0)
		str = ft_strdup("");
	else
		str = ft_itoa(signed_int, tab);
	tab->type = 'd';
	return (str);
}

char	*ft_u_conv(va_list params, t_printf *tab)
{
	unsigned int	unsigned_int;
	char			*str;

	unsigned_int = va_arg(params, unsigned int);
	if ((unsigned_int == 0 && tab->point == 1 && (tab->digit_two == 0
	|| (tab->digit_two == -1 && tab->stella == 1)))
	&& tab->dgt2_case_minus1 == 0)
		str = ft_strdup("");
	else
		str = ft_uitoa(unsigned_int, tab);
	tab->type = 'u';
	return (str);
}

char	*ft_x_conv(va_list params, t_printf *tab)
{
	unsigned	num;
	char		*str;

	num = va_arg(params, unsigned int);
	if (num == 0 && tab->point > 0 && tab->digit_two > -1)
		str = ft_strdup("");
	else if (num == 0 && tab->digit_one < 0 && tab->digit_two > -1)
		str = ft_strdup("0");
	else
		str = ft_itoa_base(num, "0123456789abcdef");
	tab->type = 'x';
	return (str);
}

char	*ft_x_maj_conv(va_list params, t_printf *tab)
{
	unsigned	num;
	char		*str;

	num = va_arg(params, unsigned int);
	if (num == 0 && tab->point > 0 && tab->digit_two > -1)
		str = ft_strdup("");
	else if (num == 0 && tab->digit_one < 0 && tab->digit_two == 0)
		str = ft_strdup("0");
	else
		str = ft_itoa_base(num, "0123456789ABCDEF");
	tab->type = 'X';
	return (str);
}
