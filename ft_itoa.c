/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:00:17 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/04 17:48:53 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		ct;
	int		l;
	char	*ret;
	int		min;

	ct = 0;
	l = n;
	min = 1;
	while (++ct && l / 10 != 0)
		l /= 10;
	if (n < 0 && ++ct)
		min = -1;
	ret = (char *)malloc(sizeof(char) * (ct + 1));
	if (!ret)
		return (NULL);
	ret[ct--] = '\0';
	while (ct != -1)
	{
		ret[ct] = '0' + min * (n % 10);
		n /= 10;
		ct--;
	}
	if (min == -1)
		ret[0] = '-';
	return (ret);
}
