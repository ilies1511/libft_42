/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:35:56 by iziane            #+#    #+#             */
/*   Updated: 2024/07/24 13:31:37 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Synopsis
# include <unistd.h> //read files
# include <fcntl.h> //system function flaggs for ex. O_RDONLY, O_WRONLY
# include <limits.h> //Define MAX BUFF_SIZE
# include <stdlib.h> //malloc and free

//Prototypes
void	ft_free_gnl(void *ptr);
void	*case_error(char **line, char *buffer);
void	shift_buffer(char *buffer);
char	*line_extracter(char *line);
char	*read_buffer(char *buffer, int fd);
char	*get_next_line(int fd);
char	*ft_strchr_gnl(const char *s, int c);
char	*ft_strjoin_gnl(const char *s1, const char *s2);
int		ft_strlen_gnl(const char *str);
void	ft_bzero_gnl(void *s, size_t n);

#endif

//open() flags used to specify how to open file.
