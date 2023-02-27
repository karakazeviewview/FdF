/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:40:09 by mmatsuo           #+#    #+#             */
/*   Updated: 2023/02/28 02:40:10 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_pt
{
	int				fd;
	int				width;
	int				spec;
	int				spec_cs;
	int				sign;
	int				digit_width;
	int				digit_prec;
	int				has_prec;
	int				flag_zero;
	int				flag_align;
	int				flag_plus;
	int				flag_space;
	int				flag_sharp;
	int				check_overflow;
	int				overflow;
	size_t			prec;
	size_t			base;
	size_t			idx;
	size_t			len;
	size_t			total_output;
	unsigned char	ch;
}		t_pt;

//ft_print.c
int				ft_printf(const char *format, ...);
int				ft_dprintf(int fd, const char *format, ...);
//init.c
void			initialize_info(t_pt *pt);
//output.c
void			output(unsigned char *args, t_pt *pt);
void			specifier_percent_c(va_list ap, t_pt *pt);
void			specifier_s(va_list ap, t_pt *pt);
void			specifier_idupx(va_list ap, t_pt *pt);
//scrape.c
void			scrape_hub(va_list ap, const char *s1, t_pt *pt);
//utils.c
int				ft_putchar_pt(const unsigned char c, t_pt *pt);
int				ft_atoi_pt(const char *s1, t_pt *pt);
int				ft_get_digit(unsigned long num, t_pt *pt);
unsigned long	is_neg(int n, t_pt *pt);
unsigned char	*ft_itoa_base(unsigned long num, t_pt *pt);

#endif
