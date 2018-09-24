/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_va.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:05:46 by kbui              #+#    #+#             */
/*   Updated: 2018/09/24 00:22:48 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"
#include <stdlib.h>
int		pf_case_cdi(int i, char c)
{
	int		ret;

	ret = 0;
	if 	(c == 'c')
		ret += pf_putchar(i);
	else
	{
		if (i < 0)
			ret += (pf_nbrlen(i) + 1);
		else
			ret += pf_nbrlen(i);
		pf_putnbr(i);
	}
	return (ret);
}

int		pf_case_oux(unsigned int i, char c)
{
	int		ret;

	ret = 0;
	if (c == 'u')
		ret += pf_putstr(pf_itoa_base(i, 10));
	else if (c == 'o')
		ret += pf_putstr(pf_itoa_base(i, 8));
	else
		ret += pf_putstr(pf_itoa_base(i, 16));
	return (ret);
}

int		pf_case_p(unsigned long *ptr)
{	
	unsigned long	i;
	int				ret;

	ret = 0;
	i = (unsigned long)ptr;
	ret += pf_putstr(pf_itoa_base(i, 16));
	return (ret);
}

int		pf_do_case(va_list arg, char *param)
{
	int				ret;

	ret = 0;
	while (*param != '\0')
	{
		while (*param && *param != '%')
			ret += pf_putchar(*(param++));
		if (!*param)
			break ;
		param++;
		if (*param == 's')
			ret += pf_putstr(va_arg(arg,char *));
		else if (*param == 'c' || *param == 'd' || *param == 'i')
			ret += pf_case_cdi(va_arg(arg,int), *param);
		else if (*param == 'u' || *param == 'o' || *param == 'x')
			ret += pf_case_oux(va_arg(arg,unsigned int), *param);
		else
			ret += pf_case_p(va_arg(arg,unsigned long *));
		param++;
	}
	return (ret);
}

int		b_printf(const char *format, ...)
{
	char			*param; 
	va_list 		arg;
	int				ret;
	
	va_start(arg, format);
	param = (char *)format;
	ret = pf_do_case(arg, param);
	va_end(arg);
	return (ret);
}

int		main(void)
{
	int i;
	int *ptr;
	int ret;
	int ret2;

	b_printf("NULL str: %s", NULL);
	printf("NULL str: %s", NULL);
	return (0);
}