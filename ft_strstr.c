/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 23:51:49 by vveselov          #+#    #+#             */
/*   Updated: 2017/10/29 00:40:00 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	i1;
	char	*ret;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		i1 = i;
		j = 0;
		while (big[i1++] == little[j++])
			if (little[j] == '\0')
			{
				ret = (char *)&big[i];
				return (ret);
			}
		i++;
	}
	return (NULL);
}
