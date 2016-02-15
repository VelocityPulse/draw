/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_add_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 23:24:30 by                   #+#    #+#             */
/*   Updated: 2016/02/15 12:15:08 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

t_vector	ft_add_vector(t_vector v, float x, float y, float z)
{
	v.x += x;
	v.y += y;
	v.z += z;
	return (v);
}
