/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:51:24 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/20 18:51:27 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_dic
{
	char	*key;
	char	*value;
} t_dic;

t_dic *dictionary;
int	dictionary_size;

dictionary_size = 0;

int	ft_strlen(char *str)
{
	int	i;

	while(*str)
	{
		i++;
		str++;
	}
	return(i);
}

void	ft_splitn(char *str, int *parts, int *size)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		parts[i++] = str[i];
	}
	*size = len;
}


