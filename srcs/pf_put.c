/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:53 by kbui              #+#    #+#             */
/*   Updated: 2018/09/23 17:53:51 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "helper.h"

int		pf_putchar(char c)
{
	int	ret;

	ret = 1;
	write(1, &c, ret);
	return (ret);
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
	int	ret;

	ret = pf_strlen(s);
	write(1, s, ret);
	return (ret);
}

void	pf_putnbr(int n)
{
	if (n == -2147483648)
		pf_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			pf_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			pf_putnbr(n / 10);
		pf_putchar((n % 10) + '0');
	}
}