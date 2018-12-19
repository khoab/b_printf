/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:53 by kbui              #+#    #+#             */
/*   Updated: 2018/10/23 22:58:05 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "helper.h"

int		pf_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		pf_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int		pf_putstr(char *s)
{
	int		ret;
	char	*null;

	if (!s)
	{
		null = "(null)";
		ret = 6;
		write(1, null, ret);
		return (ret);
	}
	ret = pf_strlen(s);
	write(1, s, ret);
	return (ret);
}

void	pf_putnbr(int nb)
{
	if (nb < -9 || nb > 9)
		pf_putnbr(nb / 10);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_putchar('-');
		ft_putchar('0' - (nb % 10));
	}
	else
		ft_putchar('0' + (nb % 10));
}