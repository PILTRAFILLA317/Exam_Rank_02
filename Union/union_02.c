/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:16:59 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/23 17:47:17 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

int	not_seen(char *str, char a, int i)
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

void	union_u(char *str1, char *str2)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (str1[++i])
		if (not_seen(str1, str1[i], i))
			write(1, &str1[i], 1);
	while (str2[++j])
		if ((not_seen(str2, str2[j], j)) && (not_seen(str1, str2[j], i)))
			write(1, &str2[j], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		union_u(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
