/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:06:58 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/07 11:44:04 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_itoa_content(char *str, t_printf *tab, int i, long long n)
{
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		if (ft_itoa_conditions_01(tab, i))
			str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}

static int	len(long long int nb, t_printf *tab)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		tab->neg = 1;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	len++;
	return (len);
}

char		*ft_itoa(long long int nb, t_printf *tab)
{
	char			*str;
	long long int	n;
	int				i;

	n = nb;
	i = len(n, tab);
	if (ft_itoa_conditions_00(tab, i))
		i++;
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	str = ft_itoa_content(str, tab, i, n);
	return (str);
}

char		*ft_uitoa(unsigned long long int nb, t_printf *tab)
{
	char					*str;
	unsigned long int		n;
	int						i;

	n = nb;
	i = len(n, tab);
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}
