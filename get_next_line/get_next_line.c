/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:35:50 by iziane            #+#    #+#             */
/*   Updated: 2024/07/20 20:56:08 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*case_error(char **line, char *buffer)
{
	if (*line)
	{
		ft_free_gnl(*line);
	}
	ft_bzero_gnl(buffer, BUFFER_SIZE + 1);
	return (NULL);
}

void	shift_buffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\n')
		i++;
	while (buffer[i] != '\0')
		buffer[j++] = buffer[i++];
	while (j < BUFFER_SIZE + 1)
		buffer[j++] = '\0';
}

char	*line_extracter(char *line)
{
	char	*extracted_line;
	int		i;

	if (ft_strchr_gnl(line, '\n'))
	{
		i = 0;
		while (line && line[i] != '\n')
			i++;
		extracted_line = malloc(sizeof(char) * i + 2);
		i = 0;
		while (line && line[i])
		{
			extracted_line[i] = line[i];
			if (extracted_line[i] == '\n')
			{
				extracted_line[i + 1] = '\0';
				break ;
			}
			i++;
		}
		ft_free_gnl(line);
	}
	else
		extracted_line = line;
	return (extracted_line);
}

char	*read_buffer(char *buffer, int fd)
{
	char	*line;
	int		bytes_read;
	char	*position;

	line = NULL;
	line = ft_strjoin_gnl(line, buffer);
	while (!ft_strchr_gnl(line, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (case_error(&line, buffer));
		if (bytes_read == 0)
		{
			ft_bzero_gnl(buffer, BUFFER_SIZE + 1);
			break ;
		}
		buffer[bytes_read] = '\0';
		line = ft_strjoin_gnl(line, buffer);
		position = ft_strchr_gnl(line, '\n');
		if (position)
			break ;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (ft_bzero_gnl(buffer, BUFFER_SIZE + 1), NULL);
	line = read_buffer(buffer, fd);
	line = line_extracter(line);
	shift_buffer(buffer);
	if (ft_strlen_gnl(line) == 0)
	{
		free(line);
		line = NULL;
	}
	return (line);
}
