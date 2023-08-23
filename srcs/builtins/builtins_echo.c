/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins_echo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 04:16:24 by aschaefe          #+#    #+#             */
/*   Updated: 2023/08/09 14:43:43 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	builtin_echo(t_command *command, int bck_slh_n, int i)
{
	if (command->tab_options)
	{
		while (command->tab_options[i])
		{
			if (ft_strcmp(command->tab_options[i], "-n") == 0)
			{
				bck_slh_n = 1;
				i++;
			}
			else
				break ;
		}
		while (command->tab_options[i])
		{
			ft_printf("%s", command->tab_options[i]);
			i++;
			if (command->tab_options[i])
				ft_printf(" ", command->tab_options[i]);
		}
	}
	if (bck_slh_n == 0)
		ft_printf("\n");
	error_handle(0, NULL, 0);
}
