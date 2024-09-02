#ifndef MAIN_H
#	define MAIN_H

typedef struct s_data
{
	char number[1024];
	char word[1024];
} t_data;

int is_dict_valid(char *content);
void	create_num(int index, char *cons2);
int		organize_num(char *arg, t_data *dict);
int		consult_num(int len, char *cons1, t_data *dict);
char	*read_dict(char *filename);
t_data	*fill_dict(t_data *dict, char *content);
int		filter_dict(char *number, t_data *dict);
int		ft_strlen(char *str);
void 	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_numeric(char *str);

#endif