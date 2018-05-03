/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 18:41:15 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 15:15:17 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	i;
	size_t	e;
	size_t	st;

	if (!s)
		return (NULL);
	st = 0;
	e = 0;
	i = 0;
	while (s[e + 1])
		e++;
	while (s[st] == ' ' || s[st] == '\n' || s[st] == '\t' || s[st] == ',')
		st++;
	if (s[st])
		while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t' || s[e] == ',')
			e--;
	ret = (char *)malloc(sizeof(char) * (e - st + 2));
	if (!ret)
		return (NULL);
	while (st <= e)
		ret[i++] = s[st++];
	ret[i] = '\0';
	return (ret);
}
