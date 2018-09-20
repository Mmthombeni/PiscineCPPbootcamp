/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:08:12 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:08:14 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <string>
#include <ncurses.h>

class	GameEntity {

public:
	GameEntity( void );
	GameEntity( GameEntity const & src );
	~GameEntity( void );
    GameEntity(WINDOW * win, int y, int x, char c);

    void    mvup();
    void    mvdown();
    void    mvleft();
    void    mvright();
    int     getmv();
    void    shoot();
    void    display();
   /* int     init();
    void    run();
    void    close();*/



protected:
    char    character;
    WINDOW * curwin;
    int     xLoc;
    int     yLoc;
    int     xMax;
    int     yMax;

private:

};

#endif
