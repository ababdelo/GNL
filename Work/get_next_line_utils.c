/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:36:12 by ababdelo          #+#    #+#             */
/*   Updated: 2022/11/25 10:15:27 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_line;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	new_line = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_line)
		return (NULL);
	while (s1[i])
	{
		new_line[i2++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		new_line[i2++] = s2[i++];
	new_line[i2] = '\0';
	free(s1);
	return (new_line);
}

char	*ft_strchr(char *s, char c)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
			return ((&s[i]));
		i++;
	}
	return (0);
}

char	*get_first_line(char *next_line)
{
	int		i;
	char	*new_line;

	i = 0;
	if (!next_line[i])
		return (NULL);
	while (next_line[i] && next_line[i] != '\n')
		i++;
	if (next_line[i] == '\n')
		i++;
	new_line = (char *)malloc(i + 1);
	if (!new_line)
		return (NULL);
	i = 0;
	while (next_line[i] && next_line[i] != '\n')
	{
		new_line[i] = next_line[i];
		i++;
	}
	if (next_line[i] == '\n')
	{
		new_line[i] = next_line[i];
		i++;
	}
	return (new_line[i] = '\0', new_line);
}

char	*get_new_line(char *str)
{
	int		i;
	int		i2;
	char	*new_line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_line = (char *)malloc(ft_strlen(str) - i);
	if (!new_line)
		return (NULL);
	i++;
	i2 = 0;
	while (str[i])
		new_line[i2++] = str[i++];
	new_line[i2] = '\0';
	free(str);
	return (new_line);
}
