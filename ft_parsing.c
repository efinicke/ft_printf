/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:02:44 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ocean_vortex(char c)
{
	return (c == '*' || c == '-' || (c >= '0' && c <= '9') || c == '.');
}

size_t	ft_vortex(char c)
{
	return ((ft_ocean_vortex(c)) || c == 's' || c == 'd' || c == 'i' || c == 'u'
			|| c == 'c' || c == 'p' || c == 'x' || c == 'X');
}

size_t	ft_is_type(char c)
{
	return (c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'c' || c == 'p'
			|| c == 'x' || c == 'X' || c == '%');
}

int		ft_parse_flags(const char *str, t_printf *tab, va_list params)
{
	while (str[tab->i] && ft_ocean_vortex(str[tab->i]))
	{
		ft_minus(str, tab);
		ft_point(str, tab);
		ft_zero(str, tab);
		ft_stella(str, tab, params);
		ft_digit(str, tab);
		if (str[tab->i + 1] != '\0')
			tab->i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_ask_type(const char *str, t_printf *tab, va_list params)
{
	char	*bribe;

	bribe = NULL;
	if (str[tab->i] == 's')
		bribe = ft_str_conv(params, tab);
	else if (str[tab->i] == 'd' || str[tab->i] == 'i')
		bribe = ft_d_conv(params, tab);
	else if (str[tab->i] == 'u')
		bribe = ft_u_conv(params, tab);
	else if (str[tab->i] == 'c')
		bribe = ft_c_conv(params, tab);
	else if (str[tab->i] == 'p')
		bribe = ft_p_conv(params, tab);
	else if (str[tab->i] == 'x')
		bribe = ft_x_conv(params, tab);
	else if (str[tab->i] == 'X')
		bribe = ft_x_maj_conv(params, tab);
	else if (str[tab->i] == '%')
		bribe = ft_c_to_str('%');
	return (bribe);
}
