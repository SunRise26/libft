/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:40:42 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/09 10:02:24 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	min;
	int	ret;

	min = 1;
	ret = 0;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (--str && (*(str + 1) == '-' || (*(str + 1) == '+')) && ++str)
		(*str == '-') ? (min = -1) : 0;
	while (*(++str) >= '0' && *str <= '9' && *str)
		ret = ret * 10 + (*str - 48) * min;
	return (ret);
}
