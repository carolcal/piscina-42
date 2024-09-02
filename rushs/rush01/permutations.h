/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:10:00 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/25 20:13:01 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMUTATIONS_H
# define PERMUTATIONS_H

typedef struct possibility
{
	int	permutation[4];
	int	v1;
	int	v2;
}	t_possibility;

static const t_possibility	g_permut[24] = {
{{4, 1, 2, 3}, 1, 2},
{{4, 2, 1, 3}, 1, 2},
{{4, 1, 3, 2}, 1, 3},
{{4, 2, 3, 1}, 1, 3},
{{4, 3, 1, 2}, 1, 3},
{{4, 3, 2, 1}, 1, 4},
{{3, 2, 1, 4}, 2, 1},
{{3, 1, 2, 4}, 2, 1},
{{1, 4, 2, 3}, 2, 2},
{{2, 1, 4, 3}, 2, 2},
{{2, 4, 1, 3}, 2, 2},
{{3, 2, 4, 1}, 2, 2},
{{3, 4, 1, 2}, 2, 2},
{{3, 1, 4, 2}, 2, 2},
{{1, 4, 3, 2}, 2, 3},
{{2, 4, 3, 1}, 2, 3},
{{3, 4, 2, 1}, 2, 3},
{{2, 3, 1, 4}, 3, 1},
{{1, 3, 2, 4}, 3, 1},
{{2, 1, 3, 4}, 3, 1},
{{2, 3, 4, 1}, 3, 2},
{{1, 3, 4, 2}, 3, 2},
{{1, 2, 4, 3}, 3, 2},
{{1, 2, 3, 4}, 4, 1}
};

#endif
