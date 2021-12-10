/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:38:02 by efinicke          #+#    #+#             */
/*   Updated: 2021/04/07 11:42:25 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>

typedef struct	s_printf
{
	char			type;
	int				c;
	int				i;
	int				len;
	int				backslash_zero;
	int				neg;
	int				zero;
	int				point;
	int				stella;
	int				minus;
	int				digit;
	int				digit_two;
	int				digit_one;
	int				dgt1_case_0;
	int				dgt2_case_minus1;
}				t_printf;

char			*ft_itoa_base(unsigned int n, char *base);
char			*ft_itoa_base_0x
(unsigned long long int n, char *base, t_printf *tab);
char			*ft_itoa(long long int nb, t_printf *tab);
char			*ft_uitoa(unsigned long long int n, t_printf *tab);
int				ft_printf(const char *str, ...);
void			ft_init_struct(t_printf *tab);
void			ft_init_struct_switch(t_printf *tab);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s1);
char			*ft_c_to_str(char c);
void			ft_putchar(char c);
int				ft_strlen(const char *s);
void			ft_putstr(char *str);
int				ft_isdigit(int c);
int				ft_atoi_printf(const char *str, t_printf *tab);
int				ft_itoa_conditions_00(t_printf *tab, int i);
int				ft_itoa_conditions_01(t_printf *tab, int i);
void			ft_impr_bribe(char *bribe, t_printf *tab);
char			*ft_bring_together
(const char *str, char *bribe, t_printf *tab, va_list params);
int				ft_parse_flags(const char *str, t_printf *tab, va_list params);
size_t			ft_vortex(char c);
size_t			ft_ocean_vortex(char c);
size_t			ft_is_type(char c);
void			ft_minus(const char *str, t_printf *tab);
void			ft_point(const char *str, t_printf *tab);
void			ft_zero(const char *str, t_printf *tab);
void			ft_stella(const char *str, t_printf *tab, va_list params);
void			ft_digit(const char *str, t_printf *tab);
void			ft_exept(const char *str, t_printf *tab);
int				ft_ask_vortex(const char *str, t_printf *tab, va_list params);
char			*ft_ask_type(const char *str, t_printf *tab, va_list params);
char			*ft_add_width_digit_two(t_printf *tab, char *bribe, int len);
char			*ft_add_width_digit_one(t_printf *tab, char *bribe, int len);
char			*ft_width_generator(int diff_len, t_printf *tab);
char			*ft_stroncat(t_printf *tab, char *bribe, int len);
char			*ft_add_negstring(char *bribe);
char			*ft_str_conv(va_list params, t_printf *tab);
char			*ft_d_conv(va_list params, t_printf *tab);
char			*ft_u_conv(va_list params, t_printf *tab);
char			*ft_x_conv(va_list params, t_printf *tab);
char			*ft_x_maj_conv(va_list params, t_printf *tab);
char			*ft_p_conv(va_list params, t_printf *tab);
char			*ft_c_conv(va_list params, t_printf *tab);

#endif
