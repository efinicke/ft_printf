/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:05:21 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_struct(t_printf *tab)
{
	tab->type = '0';
	tab->c = 0;
	tab->i = 0;
	tab->len = 0;
	tab->neg = 0;
	tab->backslash_zero = 0;
	tab->zero = 0;
	tab->point = 0;
	tab->stella = 0;
	tab->minus = 0;
	tab->digit = 0;
	tab->digit_one = 0;
	tab->digit_two = -1;
	tab->dgt1_case_0 = 0;
	tab->dgt2_case_minus1 = 0;
}

void	ft_init_struct_switch(t_printf *tab)
{
	int		i;
	int		len;

	i = tab->i;
	len = tab->len;
	ft_init_struct(tab);
	tab->i = i;
	tab->len = len;
}
