/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:45:22 by ababdelo          #+#    #+#             */
/*   Updated: 2022/12/09 09:45:29 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdlib.h>
# include<unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char		*get_next_line(int fd);

char		*get_res(int fd, char *line);
char		*get_first_line(char *next_line);
char		*get_new_line(char *str);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strchr(char *s, char c);

size_t		ft_strlen(char *s);

#endif
