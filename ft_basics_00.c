/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basics_00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:18:57 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/01 13:03:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sbstr;

	i = 0;
	if (!*s || !s[start])
		return (NULL);
	if (!(sbstr = (char*)malloc(sizeof(sbstr) * len + 1)))
		return (NULL);
	while (i < len)
	{
		sbstr[i] = s[start + i];
		i++;
	}
	sbstr[i] = '\0';
	free((char *)s);
	return (sbstr);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		str[i] = (char)s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
