/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   missiles.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:08:54 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:08:58 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ncurses.h>
#include "Missiles.hpp"

Missiles::Missiles(void){
    return;
}

Missiles::Missiles(Missiles const & src){
    *this = src;
    return;
}

Missiles::~Missiles(void){
    return;
}


void Missiles::shoot(){

    mvwaddch(curwin, yLoc, xLoc + 1, ' ');
    int curPos = xLoc + 1;
    
    while(curPos != (xMax - 2)){
        
        mvwaddch(curwin, yLoc, curPos, '>');
        curPos++;

    }
}
