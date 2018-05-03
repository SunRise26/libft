/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:48:57 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 15:13:44 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	wct(char const *s, char c)
{
	int	ct;

	ct = 0;
	while (*s)
	{
		if (*s != c && ++ct)
			while (*s != c && *s)
				s++;
		while (*s == c)
			s++;
	}
	return (ct);
}

static unsigned int	wlen(char const *s, char c)
{
	unsigned int	ret;

	ret = 0;
	while (*s == c)
		s++;
	while (*s != c && *s++ != '\0')
		ret++;
	return (ret);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**ret;
	size_t			i1;
	unsigned int	j;
	unsigned int	wl;

	if (!s || !c)
		return (NULL);
	j = 0;
	wl = wct(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (wl + 1))))
		return (NULL);
	while (j < wl)
	{
		i1 = 0;
		ret[j] = (char *)malloc(sizeof(char) * (wlen(s, c) + 1));
		if (!ret[j])
			return (NULL);
		while (*s == c)
			s++;
		while (*s != c && *s)
			ret[j][i1++] = *s++;
		ret[j++][i1] = '\0';
	}
	ret[j] = NULL;
	return (ret);
}
