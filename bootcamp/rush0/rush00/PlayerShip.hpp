/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:08:36 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:08:40 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H
#include <iostream>
#include <string>
#include "GameEntity.hpp"

class	PlayerShip: public GameEntity {

public:
	PlayerShip( void );
	PlayerShip( PlayerShip const & src );
	~PlayerShip( void );

    // void    mvup();
    // void    mvdown();
    // void    mvleft();
    // void    mvright();
    // int     getmv();
    // void    shoot();

};


#endif
