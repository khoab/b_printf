/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:57:16 by kbui              #+#    #+#             */
/*   Updated: 2018/09/22 15:41:13 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

# include <string.h>

/*
** Where the helper function go
*/

size_t		pf_strlen(char *str);
void	pf_putchar(char c);
void	pf_putstr(char *str);
void		pf_case_cdioux(int i, char c);
char		*pf_itoa_base(unsigned int num, int base);

/*
** Where the basic put function go
*/

void		pf_putchar(char c);
void		pf_putstr(char *s);
void		pf_putnbr(int nb);

/*
** Where the getting function go
*/

size_t		pf_get(char c);
size_t		pf_getbase(char c);

#endif
