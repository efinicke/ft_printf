/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:15:06 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_exept(const char *str, t_printf *tab)
{
	if ((str[tab->i - 1] == '.' && tab->digit_two == -1))
	{
		tab->digit_two = 0;
		tab->digit += 1;
	}
	if (str[tab->i - 1] == '0' && str[tab->i - 2] == '.'
			&& (tab->digit_two == -1 && tab->dgt2_case_minus1 == 0))
	{
		tab->digit_two = 0;
		tab->digit += 1;
	}
	if (tab->digit_one == 0 && tab->digit_two > -1)
		tab->digit += 1;
	if (tab->zero == 1 && tab->minus == 1)
		tab->zero = 0;
	if (tab->point == 1 && tab->minus == 1 && tab->digit == 1)
		tab->minus = 0;
}

int			ft_itoa_conditions_00(t_printf *tab, int i)
{
	if (tab->digit_two == -1 && tab->neg == 1 && tab->zero == 0)
		return (1);
	else if (tab->digit_one == 0 && tab->digit_two > -1
			&& tab->neg == 1 && tab->digit_two < (i + 1))
		return (1);
	else if (tab->digit_two == -1 && tab->digit_one > 0 && tab->neg == 1
			&& tab->zero == 1 && tab->digit_one == (i + 1))
		return (1);
	return (0);
}

int			ft_itoa_conditions_01(t_printf *tab, int i)
{
	if (tab->digit_two == -1 && tab->neg == 1 && tab->zero == 0)
		return (1);
	else if (tab->digit_one == 0 && tab->digit_two > -1 && tab->neg > 0
			&& tab->digit_two < (i + 1))
		return (1);
	else if (tab->digit_two == -1 && tab->digit_one > 0 && tab->neg == 1
			&& tab->zero == 1 && tab->digit_one == (i + 1))
		return (1);
	return (0);
}
