/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basics_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:18:18 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/07 11:42:13 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_c_to_str(char c)
{
	char	*s;

	s = malloc(2);
	s[0] = c;
	s[1] = '\0';
	return (s);
}

int		ft_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	char	*str;
	int		str_sz;
	char	*s_1;
	char	*s_2;

	s_1 = ((char *)s1);
	s_2 = ((char *)s2);
	if (!s1 || !s2)
		return (NULL);
	str_sz = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(buffer = malloc(sizeof(buffer) * str_sz)))
		return (NULL);
	str = buffer;
	while (*s1)
		*buffer++ = *s1++;
	while (*s2)
		*buffer++ = *s2++;
	*buffer = '\0';
	free(s_1);
	free(s_2);
	return (str);
}
