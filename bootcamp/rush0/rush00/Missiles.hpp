/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missiles.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:09:03 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:09:07 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILES_H
#define MISSILES_H
#include <iostream>
#include <string>
#include "GameEntity.hpp"

class	Missiles: public GameEntity {

public:
	Missiles( void );
	Missiles( Missiles const & src );
	~Missiles( void );

    void    shoot();

private:

};

#endif
