/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ask_vortex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:04:13 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_ask_vortex(const char *str, t_printf *tab, va_list params)
{
	char	*bribe;

	bribe = NULL;
	if (ft_parse_flags(str, tab, params) == 0)
	{
		tab->len = 0;
		return (0);
	}
	ft_exept(str, tab);
	if (ft_is_type(str[tab->i]))
		bribe = ft_bring_together(str, bribe, tab, params);
	else
	{
		tab->len = 0;
		return (0);
	}
	ft_impr_bribe(bribe, tab);
	tab->len += ft_strlen(bribe);
	ft_init_struct_switch(tab);
	free(bribe);
	return (1);
}

char	*ft_add_width_digit_two(t_printf *tab, char *bribe, int len)
{
	char	*width;
	int		diff_len;
	int		i;

	i = 0;
	width = NULL;
	if ((tab->zero == 1 || tab->point == 1))
		tab->c = '0';
	else
		tab->c = ' ';
	diff_len = tab->digit_two - len;
	width = ft_width_generator(diff_len, tab);
	if (width == NULL)
		return (bribe);
	width = ft_strjoin(width, bribe);
	return (width);
}

char	*ft_add_width_digit_one(t_printf *tab, char *bribe, int len)
{
	char	*width;
	int		diff_len;
	int		i;

	width = NULL;
	i = 0;
	if (tab->zero == 1 || tab->point == 1)
		tab->c = '0';
	else
		tab->c = ' ';
	if (tab->digit == 2)
		tab->c = ' ';
	if (tab->digit == 2 && tab->digit_two < 0 && tab->zero == 1)
		tab->c = '0';
	diff_len = tab->digit_one - len;
	width = ft_width_generator(diff_len, tab);
	if (width == NULL)
		return (bribe);
	if (tab->minus == 1)
		width = ft_strjoin(bribe, width);
	else
		width = ft_strjoin(width, bribe);
	return (width);
}

char	*ft_bring_together(const char *str, char *bribe,
		t_printf *tab, va_list params)
{
	bribe = ft_ask_type(str, tab, params);
	if (tab->type == 's' && (tab->digit_two > -1))
		bribe = ft_stroncat(tab, bribe, ft_strlen(bribe));
	if (tab->digit_two > -1 && tab->type != 's')
	{
		bribe = ft_add_width_digit_two(tab, bribe, ft_strlen(bribe));
		if (tab->neg == 1 && bribe[0] != '-')
			bribe = ft_add_negstring(bribe);
	}
	if (tab->digit_one > 0)
	{
		if (tab->neg == 1 && tab->minus == 0 && tab->zero == 0
		&& tab->digit_one > ft_strlen(bribe) && tab->digit_two < -1)
			bribe = ft_add_negstring(bribe);
		bribe = ft_add_width_digit_one(tab, bribe, ft_strlen(bribe));
		if (bribe[0] == '0' && tab->neg == 1 && tab->type != 's')
			bribe[0] = '-';
		if (tab->neg == 1 && bribe[0] != '-' && bribe[0] != ' '
				&& tab->type != 's')
			bribe = ft_add_negstring(bribe);
	}
	if (tab->stella > 0 && tab->neg == 1 && bribe[0] != '-'
			&& bribe[0] != ' ')
		bribe = ft_add_negstring(bribe);
	return (bribe);
}
