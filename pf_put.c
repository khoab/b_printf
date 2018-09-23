/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:53 by kbui              #+#    #+#             */
/*   Updated: 2018/09/22 16:42:22 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "helper.h"

void		pf_putchar(char c)
{
	write(1, &c, 1);
}

size_t		pf_strlen(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	pf_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
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

char		*pf_itoa_base(unsigned int num, int base)
{
	static char *def_base;
	static char buffer[50];
	char *ptr;

	def_base = "0123456789abcdef";
	ptr = &buffer[49];
	*ptr = '\0';
	if (num == 0)
		*--ptr = def_base[0];
	while(num != 0)
	{
		*--ptr = def_base[num % base];
		num /= base;
	}
	return(ptr);
}