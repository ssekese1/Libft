/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:41:44 by ssekese           #+#    #+#             */
/*   Updated: 2017/08/15 10:56:38 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
void			ft_putchar(char c);
void			ft_putednl(char const *s);
void			ft_putstr(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_strclr(char *s);
void			ft_striter(char *s, void(*f)(char *));
void			ft_striteri(char *s, void(*f)(unsigned int, char *s));
char			*ft_strnew(size_t size);
char			*ft_strcat(char *s1, char *s2);
char			*ft_strchr(char *s, int c);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, const char *src, size_t len);
char			*ft_strrchr(char *s, int c);
char			*ft_strstr(char *big, char *little);
char			*ft_strncat(char *s1, char *s2, int nb);
void			ft_bzero(void *s, size_t n);
char			*ft_strnstr(char *big, char *little, size_t len);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_atoi(char *str);
int				ft_strequ(char *s1, char *s2);
int				ft_strnequ(char *s1, char *s2, size_t n);
void			ft_strdel(char **as);
char			*ft_itoa(int n);
char			*ft_strmapi(char *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char *s);
char			*ft_strmap(char *s, char (*f)(char));

#endif
