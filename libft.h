/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:46:48 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/14 00:48:56 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *memory_block, int searched_char, size_t size);
int ft_memcmp(const void *s1, const void *s2, size_t size);
void *ft_memcpy( void * dest, const void * src, size_t size);
void *ft_memmove( void * dest, const void * src, size_t size);
void *ft_memset(void *p, int value, size_t n);
size_t ft_strlen( const char *str);
char *ft_strchr( const char *str, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char	*big, const char *little, size_t len);
char *ft_strrchr( const char * str, int c);
int ft_tolower( int c);
int ft_toupper( int c);
void *ft_calloc(size_t element_count, size_t element_size);
char    *ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif