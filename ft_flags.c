/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:27:21 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_minus(const char *str, t_printf *tab)
{
	if (str[tab->i] == '-')
	{
		tab->minus = 1;
	}
}

void		ft_point(const char *str, t_printf *tab)
{
	if (str[tab->i] == '.')
		tab->point = 1;
}

void		ft_zero(const char *str, t_printf *tab)
{
	int i;

	i = tab->i + 1;
	if (str[tab->i] == '0')
	{
		if (ft_isdigit(str[tab->i + 1]))
		{
			while (ft_isdigit(str[i]))
				i++;
			tab->zero = 1;
		}
	}
	if (str[tab->i] == '0' && str[tab->i + 1] == '*')
	{
		if (str[tab->i + 2] == 's')
			tab->zero = 0;
		else
			tab->zero = 1;
	}
	if (str[tab->i] == '0' && str[tab->i + 1] == '0'
	&& ft_is_type(str[tab->i + 2]) && str[tab->i + 2] != 's')
		tab->dgt1_case_0 = 1;
	if (tab->dgt1_case_0 == 1)
		tab->digit = 1;
}

void		ft_digit(const char *str, t_printf *tab)
{
	if (ft_isdigit(str[tab->i]) && str[tab->i] != '0'
	&& tab->digit == 0 && str[tab->i - 1] != '.')
	{
		tab->digit_one = ft_atoi_printf(str, tab);
		tab->digit += 1;
	}
	else if (ft_isdigit(str[tab->i])
	&& (tab->digit > 0 || str[tab->i - 1] == '.'))
	{
		tab->digit_two = ft_atoi_printf(str, tab);
		tab->digit += 1;
	}
}

void		ft_stella(const char *str, t_printf *tab, va_list params)
{
	if (str[tab->i] == '*')
	{
		tab->stella += 1;
		if (tab->digit == 0 && str[tab->i - 1] != '.')
		{
			tab->digit_one = va_arg(params, int);
			if (tab->digit_one < 0 && tab->type != 's')
			{
				tab->digit_one *= -1;
				tab->minus = 1;
			}
		}
		else if (tab->digit > 0 || str[tab->i - 1] == '.')
		{
			tab->digit_two = va_arg(params, int);
			if (tab->digit_two == -1)
				tab->dgt2_case_minus1 = 1;
		}
		tab->digit += 1;
	}
}
