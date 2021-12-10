/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:08:08 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:08:41 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_add_negstring(char *bribe)
{
	char	*negstring;

	negstring = ft_c_to_str('-');
	bribe = ft_strjoin(negstring, bribe);
	return (bribe);
}

char	*ft_width_generator(int diff_len, t_printf *tab)
{
	char	*width;
	int		i;

	i = 0;
	if (tab->digit == 2 && tab->minus == 1
	&& tab->digit_two < -1 && tab->neg == 1)
		diff_len -= 1;
	width = NULL;
	if (diff_len > 0)
	{
		if (!(width = (char*)malloc(sizeof(width) * diff_len + 1)))
			return (NULL);
		while (i < diff_len)
			width[i++] = (char)tab->c;
		width[i] = '\0';
		return (width);
	}
	else
		return (NULL);
}

char	*ft_stroncat(t_printf *tab, char *bribe, int len)
{
	char	*stronc;

	if (len <= tab->digit_two)
		return (bribe);
	else
		stronc = ft_substr((char*)bribe, 0, tab->digit_two);
	return (stronc);
}

void	ft_impr_bribe(char *bribe, t_printf *tab)
{
	int	i;

	i = 0;
	if (tab->backslash_zero != 1)
		ft_putstr(bribe);
	else if (tab->backslash_zero == 1)
	{
		while (i < ft_strlen(bribe))
		{
			if (bribe[i] == '\021')
				ft_putchar('\0');
			else
				ft_putchar(bribe[i]);
			i++;
		}
	}
}
