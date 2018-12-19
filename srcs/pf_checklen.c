/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_checklen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:33:40 by kbui              #+#    #+#             */
/*   Updated: 2018/09/24 21:18:14 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int		pf_nbrlen(int nbr)
{
	if (nbr >= 1000000000 || nbr <= -1000000000)
		return (10);
	else if (nbr >= 100000000 || nbr <= -100000000)
		return (9);
	else if (nbr >= 10000000 || nbr <= -10000000)
		return (8);
	else if (nbr >= 1000000 || nbr <= -1000000)
		return (7);
	else if (nbr >= 100000 || nbr <= -100000)
		return (6);
	else if (nbr >= 10000 || nbr <= -10000)
		return (5);
	else if (nbr >= 1000 || nbr <= -1000)
		return (4);
	else if (nbr >= 100 || nbr <= -100)
		return (3);
	else if (nbr >= 10 || nbr <= -10)
		return (2);
	else
		return (1);
}

char	*pf_itoa_base(unsigned long num, int base)
{
	static char	*def_base;
	static char	buffer[50];
	char		*ptr;

	def_base = "0123456789abcdef";
	ptr = &buffer[49];
	*ptr = '\0';
	if (num == 0)
		*--ptr = def_base[0];
	while (num != 0)
	{
		*--ptr = def_base[num % base];
		num /= base;
	}
	return (ptr);
}
