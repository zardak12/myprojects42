/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:05:25 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/12 20:17:57 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	*ft_memset(void *str, int b, size_t len);
int	ft_isascii(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memset(void *str, int b, size_t len);
int	ft_isprint(int c);
void	*ft_memccpy(void *destination, const void *source, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t len);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t len);
void	ft_putchar(const char c);
void	ft_putstr(const char *str);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *s, int c);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *s);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dst, const char *src, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalpha(int c);
int ft_isalnum(int c);
void    ft_bzero(void *s, size_t n);
#endif
