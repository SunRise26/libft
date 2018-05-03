/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 04:00:43 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 14:52:36 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ret;

	ret = (unsigned char *)malloc(size);
	if (!ret)
		return (NULL);
	while (size--)
		ret[size] = 0;
	return (ret);
}
