/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_va.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:05:46 by kbui              #+#    #+#             */
/*   Updated: 2018/09/22 20:14:07 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "helper.h"

void		pf_case_cdioux(int i, char c)
{	
	unsigned int	u;

	if (c == 'c' || c == 'd' || c == 'i')
	{
		if 	(c == 'c')
			pf_putchar(i);
		else
			pf_putnbr(i);
	}
	else
	{
		u = (unsigned int)i;
		if (c == 'u')
			pf_putstr(pf_itoa_base(u, 10));
		else if (c == 'o')
			pf_putstr(pf_itoa_base(u, 8));
		else
			pf_putstr(pf_itoa_base(u, 16));
	}
}

void	pf_do_case(va_list arg, char *agru)
{
	char	*str;
	int		i;

	while (*agru != '\0')
	{
		while (*agru && *agru != '%')
			pf_putchar(*(agru++));
		if (!*agru)
			break ;
		agru++;
		if (*agru == 's')
		{
			str = va_arg(arg,char *);
			pf_putstr(str);
		}
		else if ((*agru == 'c' || *agru == 'd' || *agru == 'i' ||
				*agru == 'u' || *agru == 'x' || *agru == 'o'))
		{
			i = va_arg(arg,int);
			pf_case_cdioux(i, *agru);
		}
		agru++;
	}
}

int		b_printf(const char *format, ...)
{
	char			*agru; 
	va_list 		arg;
	
	va_start(arg, format);
	agru = (char *)format;
	pf_do_case(arg, agru);
	va_end(arg);
	return (0);
}
