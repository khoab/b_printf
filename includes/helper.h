/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:57:16 by kbui              #+#    #+#             */
/*   Updated: 2018/09/24 21:11:17 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

# include <stdarg.h>

int			pf_putchar(char c);
int			pf_strlen(char *str);
int			pf_putstr(char *str);
void		pf_putnbr(int nbr);
int			pf_nbrlen(int nbr);
char		*pf_itoa_base(unsigned long num, int base);
char		*pf_itoa_p(unsigned long num, int base);
int			pf_case_cdi(int i, char c, int space);
int			pf_case_oux(unsigned int i, char c);
int			pf_case_p(unsigned long *ptr);
int			pf_do_case(va_list arg, char *param);
int			b_printf(const char *format, ...);

#endif
