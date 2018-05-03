/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 21:08:53 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 14:13:37 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src && !len)
		return (NULL);
	while (i < len && ((char *)src)[i])
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
