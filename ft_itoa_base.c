/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:07:24 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 15:13:28 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_intlen_base(unsigned long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen(base);
	while (n >= base_len)
	{
		n = n / base_len;
		len++;
	}
	return (len);
}

char		*ft_itoa_base(unsigned int n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_intlen_base(n, base);
	base_len = ft_strlen(base);
	if (!(str = malloc(sizeof(char *) * (num_len + 1))))
		return (NULL);
	str[num_len] = '\0';
	while (num_len)
	{
		str[--num_len] = base[n % base_len];
		n = n / base_len;
	}
	return (str);
}

char		*ft_itoa_base_0x(unsigned long long n, char *base, t_printf *tab)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_intlen_base(n, base);
	if (tab->digit == 0 || tab->digit_one > 0)
		num_len += 2;
	base_len = ft_strlen(base);
	if (!(str = (char*)malloc(sizeof(str) * num_len + 1)))
		return (NULL);
	str[num_len] = '\0';
	while (num_len)
	{
		str[--num_len] = base[n % base_len];
		n = n / base_len;
	}
	if (tab->digit == 0 || tab->digit_one > 0)
	{
		str[num_len++] = '0';
		str[num_len] = 'x';
	}
	return (str);
}
