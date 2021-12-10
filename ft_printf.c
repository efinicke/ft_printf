/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:07:46 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_simple_print(const char *str, t_printf *tab)
{
	if (str[tab->i] != '%')
	{
		write(1, &str[tab->i], 1);
		tab->len++;
		return (0);
	}
	return (1);
}

int			ft_printf(const char *str, ...)
{
	t_printf	tab;
	va_list		params;

	ft_init_struct(&tab);
	va_start(params, str);
	while (str[tab.i])
	{
		if (ft_simple_print(str, &tab))
		{
			if (str[tab.i] == '%' && str[tab.i + 1] == '\0')
				break ;
			tab.i++;
			if (str[tab.i] == '%')
			{
				ft_putchar('%');
				tab.len += 1;
			}
			else if (ft_vortex(str[tab.i]))
				ft_ask_vortex(str, &tab, params);
		}
		tab.i++;
	}
	return (tab.len);
	va_end(params);
}
