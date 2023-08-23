/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_quote.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 04:16:24 by aschaefe          #+#    #+#             */
/*   Updated: 2023/08/09 14:43:43 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_getenv(t_ms *ms, char *looking_name)
{
	int	size;
	int	size_env_i;
	int	i;

	size = ft_strlen(looking_name);
	size_env_i = 0;
	i = 0;
	while (ms->env[i])
	{
		if (ft_strncmp(ms->env[i], looking_name, size)
			== 0 && ms->env[i][size] == '=')
		{
			size_env_i = ft_strlen(ms->env[i]);
			return (ft_substr(ms->env[i], size + 1, size_env_i));
		}
		i++;
	}
	return (NULL);
}
