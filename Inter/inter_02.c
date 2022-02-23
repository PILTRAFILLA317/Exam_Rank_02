/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:26:13 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/23 17:45:23 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

int	checker(char *str, char a, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		if (str[n] == a)
			return (0);
		n++;
	}
	return (1);
}

void	inter_u(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if ((s1[i] == s2[j]) && (checker(s1, s1[i], i)))
			{
				write(1, &s1[i], 1);
				break ;
			}
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter_u(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
