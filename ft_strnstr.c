/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 00:43:28 by vveselov          #+#    #+#             */
/*   Updated: 2017/10/29 01:34:37 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i1;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i])
	{
		i1 = i;
		j = 0;
		while (big[i1++] == little[j++] && i1 <= len)
			if (little[j] == '\0')
				return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
