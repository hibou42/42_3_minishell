/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 04:16:24 by aschaefe          #+#    #+#             */
/*   Updated: 2023/08/09 14:43:43 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	free_and_exit(t_ms *ms, char *msg, int force_exit)
{
	int	i;

	i = 0;
	if (ms->env)
	{
		while (ms->env[i])
		{
			free(ms->env[i]);
			ms->env[i] = NULL;
			i++;
		}
		free(ms->env);
	}
	if (ms->current_folder)
		free(ms->current_folder);
	if (ms->info_user)
		free(ms->info_user);
	if (msg)
		ft_printf("Error : %s\n", msg);
	if (force_exit != 0)
		exit(1);
}
