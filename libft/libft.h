/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:21:27 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:25:19 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t n, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *str, char c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(char const *str);
int				ft_strncmp(const char *s1, const char *s2, int n);
char			*ft_strncpy(char *dest, char *src, int n);
char			*ft_strnstr(char *needle, char *haystack, int n);
char			*ft_substr(char const *s, size_t start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_strlcat(char *dest, char *src, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);	
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstadd_front(t_list **lst, t_list *new);
char			*ft_strrchr(const char *str, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
char			*ft_strtrim(char const *s1, char const *set);

//next_line functions
char			*join_string(char *first, char *copy);
unsigned int	ft_strchrn(const char *str);
char			*get_next_line(int fd);

//printf functions
int				ft_print_unsigned_decimal(unsigned int n);
int				ft_print_percent(void);
int				ft_print_str(char *s);
int				ft_print_integer(int c);
int				ft_print_char(int c);
int				ft_print_pointer(unsigned long c);
int				ft_print_decimal(int c);
int				ft_print_hex(unsigned int c, char casing);
int				ft_printf(const char *str, ...);

#endif
