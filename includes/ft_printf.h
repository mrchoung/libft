/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 20:38:16 by mfranc            #+#    #+#             */
/*   Updated: 2017/03/02 12:44:08 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include "color.h"

# define CONVS 	"sSpdDioOuUxXcCbn%"
# define MODIFS "hlhhlljz"
# define FLAGS 	"#0123456789 -+*$L.hlhhlljz"

typedef struct		s_datas
{
	char			*result;
	va_list			ap;
	t_list			*args;
	t_list			*tmp_args;
	t_list			*stars;
	t_list			*tmp_stars;
	char			*flags;
	int				*tmp_len;
	int				len;
	int				cplen;
}					t_datas;

int					ft_printf(const char *buff, ...);
int					ft_datas_init(t_datas *datas, char *buff);
int					ft_launch_process(t_datas *datas, char *buff);
t_list				*ft_get_argslist(t_datas *datas, char *buff);
t_list				*ft_get_arg(t_datas *datas, char *buff, size_t *ci);
char				*ft_get_unconvdatas(t_datas *datas, char *buff, size_t i);
char				*ft_fill_buff(t_datas *datas, char *buff);
char				*ft_get_convdatas(t_datas *datas, char *buff);
char				*ft_get_lastdatas(t_datas *datas, char *buff);
int					ft_flags_init(t_datas *datas);
t_list				*ft_get_star_arg(t_datas *datas, size_t conv_index, char *buff);

// get from args list
t_list				*ft_get_s_arg(t_datas *datas);
t_list				*ft_get_ls_arg(t_datas *datas);
t_list				*ft_get_p_arg(t_datas *datas);
t_list				*ft_get_d_arg(t_datas *datas);
t_list				*ft_get_ld_arg(t_datas *datas);
t_list				*ft_get_i_arg(t_datas *datas);
t_list				*ft_get_o_arg(t_datas *datas);
t_list				*ft_get_lo_arg(t_datas *datas);
t_list				*ft_get_u_arg(t_datas *datas);
t_list				*ft_get_lu_arg(t_datas *datas);
t_list				*ft_get_x_arg(t_datas *datas);
t_list				*ft_get_lx_arg(t_datas *datas);
t_list				*ft_get_x_arg(t_datas *datas);
t_list				*ft_get_lx_arg(t_datas *datas);
t_list				*ft_get_c_arg(t_datas *datas);
t_list				*ft_get_lc_arg(t_datas *datas);
t_list				*ft_get_b_arg(t_datas *datas);
t_list				*ft_get_n_arg(t_datas *datas);
t_list				*ft_get_percent_arg(t_datas *datas);
t_list				*ft_get_star(t_list *datas);

typedef t_list		*(*t_get_args)(t_datas *datas);

//get conv from tlist
char				*ft_get_s_conv(t_datas *datas);
char				*ft_get_ls_conv(t_datas *datas);
char				*ft_get_p_conv(t_datas *datas);
char				*ft_get_d_conv(t_datas *datas);
char				*ft_get_ld_conv(t_datas *datas);
char				*ft_get_i_conv(t_datas *datas);
char				*ft_get_o_conv(t_datas *datas);
char				*ft_get_lo_conv(t_datas *datas);
char				*ft_get_u_conv(t_datas *datas);
char				*ft_get_lu_conv(t_datas *datas);
char				*ft_get_x_conv(t_datas *datas);
char				*ft_get_lx_conv(t_datas *datas);
char				*ft_get_x_conv(t_datas *datas);
char				*ft_get_lx_conv(t_datas *datas);
char				*ft_get_c_conv(t_datas *datas);
char				*ft_get_lc_conv(t_datas *datas);
char				*ft_get_b_conv(t_datas *datas);
char				*ft_get_n_conv(t_datas *datas);
char				*ft_get_percent_conv(t_datas *datas);

typedef	char		*(*t_get_convs)(t_datas *datas);

// get flags from const char
//int					ft_get_num(char *flags, t_datas *datas, size_t *i);

	
//typedef	int			(*t_get_flags)(char *flags, t_datas *datas, size_t *i);

typedef char		*(*t_get_s_flags)(t_datas *datas);

#endif
