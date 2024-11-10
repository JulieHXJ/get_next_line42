/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xhuang <xhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:32:53 by xhuang            #+#    #+#             */
/*   Updated: 2024/11/10 17:33:05 by xhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h> //read, malloc

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 *
 * @brief output the line from buf_large
 *
 * @param
 * @return string till the newline
 * @note
 */
// static char	*put_line(char *buf);

/**
 *
 * @brief read the characters into the buffer_large base on buffer size
 *
 * @param
 * @return
 * @note
 */
// static char	*read_and_join(char *buf_large, int fd);

/**
 *
 * @brief put the contents of buf_temp at the end of buf_large
 *
 * @param string1 string2
 * @return a new string as buf_large
 * @note
 */
char	*ft_strjoin(char *s1, char *s2);

/**
 *

	* @brief copy the string after the newline into the buf/delete the chars printed
 *
 * @param
 * @return a new string as buf_large
 * @note
 */
// char		*what_left(char *buf);

#endif