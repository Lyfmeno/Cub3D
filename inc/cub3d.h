/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:22:03 by hlevi             #+#    #+#             */
/*   Updated: 2023/01/10 16:58:30 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "libasic.h"
# include "get_next_line.h"
# include "../MLX42/mlx.h"

// Parsing
# define NO 0
# define SO 1
# define WE 2
# define EA 3
# define SKY 4
# define FLR 5
# define MAPP "NSEW"
# define MAPSYM "NSEW10 "

// MLX
# define WINW 1080
# define WINH 720
# define FOV 0.67

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		length;
	int		endian;
}				t_img;

typedef struct s_pr
{
	int		player;
	int		px;
	int		py;
	double	rayc;
	double	fov;
	double	posx;
	double	posy;
	double	dir;
}			t_pr;

typedef struct s_map
{
	int		height;
	int		width;
	int		sky;
	int		flr;
	int		show;
	char	**arr;
	char	*txr[4];
	double	size;
}			t_map;

typedef struct s_keys
{
	int	kup;
	int	kdown;
	int	kright;
	int	kleft;
	int	kdirr;
	int	kdirl;
	int	km;
}		t_keys;

typedef struct s_ray
{
	int		hit;
	int		side;
	int		stepx;
	int		stepy;
	int		mapx;
	int		mapy;
	double	camera;
	double	dirx;
	double	diry;
	double	sidistx;
	double	sidisty;
	double	deltax;
	double	deltay;
	double	wdist;
}			t_ray;

typedef struct s_cub
{
	int		lheight;
	int		sdraw;
	int		edraw;
}			t_cub;

typedef struct s_data
{
	t_keys	*keys;
	t_map	*map;
	t_img	*img;
	t_pr	*player;
	t_ray	*ray;
	t_cub	*cub;
	void	*mlx;
	void	*mlx_win;
	int		fd;
	int		mousex;
}			t_data;

void	free_data(t_data *data);
//	PASRING
//		Colors
int		get_red(int rgb);
int		get_green(int rgb);
int		get_blue(int rgb);
int		create_rgb(int red, int green, int blue);
//		Init
int		init_data(t_data *data);
//		Mapfile
int		mapfile_check(t_data *data, char *path);
//		Parse_colors 
int		fill_colors(char **color_arr);
int		parse_colors(t_data *data, char *str, int x);
//		Parsing_info_errors
int		fill_info(t_data *data, int x, char *info);
int		parse_info_miss(t_data *data);
//		Pasre_split_info
int		parse_split_info(char	**tmp_line);
//		Parse_map
int		parse_map(t_data *data);
//		Parsing
int		parsing_base(t_data *data);
//		Parsing_utils
int		is_charset(char c, char *str);
char	*first_word(char *tmp);
int		print_err(char *str, int exit_code);

//	MLX
//		Draw_form
void	draw_circle(t_data *data, int x, int y, int color);
void	draw_rectangle(t_data *data, int x, int y, int color);
void	draw_line(t_data *data, int x, int y, int color);
//		Move
void	move(t_data *data);
//		Handle key
int		release_key(int keycode, t_data *data);
int		handle_mouse(int x, int y, t_data *data);
int		handle_key(int keycode, t_data *data);
//		Minimap
void	draw_player(t_data *data, double dist);
void	draw_map(t_data *data);
//		MLX base
int		escape(t_data *data);
void	my_mlx_pixel_put(t_img *img, int x, int y, int color);
int		image_loop(t_data *data);
//		Raycasting
void	raycasting(t_data *data);
#endif
