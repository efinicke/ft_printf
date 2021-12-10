/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:04:50 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi_printf(const char *str, t_printf *tab)
{
	int		atoi;

	atoi = 0;
	while (str[tab->i] >= '0' && str[tab->i] <= '9')
	{
		atoi = atoi * 10 + str[tab->i] - 48;
		(tab->i)++;
	}
	tab->i--;
	return (atoi);
}
