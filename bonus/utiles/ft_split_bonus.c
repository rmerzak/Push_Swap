/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:05:54 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 17:38:05 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

static int	ft_nbword(const char *s, char c)
{
	int	i;
	int	j;
	int	first;

	i = 0;
	j = 0;
	first = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			first = 1;
		}
		else if (first == 1)
		{
			first = 0;
			j++;
		}
		i++;
	}
	return (j);
}

static char	**ft_free(char **p, int k)
{
	while (--k)
		free(p[k]);
	free(p);
	return (NULL);
}

static char	*ft_tab(const char *s, char c)
{
	char	*str;
	int		len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		j;
	char	**p;
	char	*str;

	j = 0;
	str = (char *)s;
	if (!str)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (ft_nbword(str, c) + 1));
	if (!p)
		return (NULL);
	while (j < ft_nbword(s, c))
	{
		while (*str == c)
			str++;
		p[j] = ft_tab(str, c);
		if (p[j] == NULL)
			return (ft_free(p, j));
		while (*str && *str != c)
			str++;
		j++;
	}
	p[j] = NULL;
	return (p);
}
