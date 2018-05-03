/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:59:59 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 17:59:12 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0;
	while (src[i])
		i++;
	while (dst[i1++] && size)
	{
		size--;
		i++;
	}
	if (!size)
		return (i);
	while (--size && *src)
		dst[(i1++) - 1] = *src++;
	dst[i1 - 1] = '\0';
	return (i);
}
