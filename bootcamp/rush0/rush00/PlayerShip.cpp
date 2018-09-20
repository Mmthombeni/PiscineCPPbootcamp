/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:08:23 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:08:26 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ncurses.h>
#include "PlayerShip.hpp"

PlayerShip::PlayerShip(void){
    return;
}

PlayerShip::PlayerShip(PlayerShip const & src){
    *this = src;
    return;
}

PlayerShip::~PlayerShip(void){
    return;
}

// void PlayerShip::mvup()
// {
//     mvwaddch(curwin, yLoc, xLoc, ' ');
//     yLoc--;
//     if(yLoc < 1)
//         yLoc = 1;
// }

// void PlayerShip::mvdown()
// {
//     mvwaddch(curwin, yLoc, xLoc, ' ');
//     yLoc++;
//     if(yLoc > yMax-2)
//         yLoc = yMax-2;
// }

// void PlayerShip::mvleft()
// {
//     mvwaddch(curwin, yLoc, xLoc, ' ');
//     xLoc--;
//     if(xLoc < 1)
//         xLoc = 1;
// }

// void PlayerShip::mvright()
// {
//     mvwaddch(curwin, yLoc, xLoc, ' ');
//     xLoc++;
//     if(xLoc > xMax-2)
//         xLoc = xMax-2;
// }

// void Missiles::shoot(){

//     mvwaddch(curwin, yLoc, xLoc + 1, ' ');
//     int curPos = xLoc + 1;
    
//     while(curPos != (xMax - 2)){
        
//         mvwaddch(curwin, yLoc, curPos, '>');
//         curPos++;

//     }
// }

// int PlayerShip::getmv()
// {
//     int choice = wgetch(curwin);
//     switch(choice)
//     {
//         case KEY_UP:
//             mvup();
//             break;
//         case KEY_DOWN:
//             mvdown();
//             break;
//         case KEY_LEFT:
//             mvleft();
//             break;
//         case KEY_RIGHT:
//             mvright();
//             break;
//         case ' ':
//             shoot();
//             break;
//             default:
//             break;
//     }
//     return choice;
// }



