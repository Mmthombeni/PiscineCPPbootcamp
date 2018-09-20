/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:07:29 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:07:33 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ncurses.h>
#include "Enemy.hpp"
#include "unistd.h"

Enemy::Enemy(void){
    return;
}

Enemy::Enemy(Enemy const & src){
    *this = src;
    return;
}

Enemy::~Enemy(void){
    return;
}

Enemy::Enemy(WINDOW * win, int y, int x, char c){
    curwin = win;
    yLoc = y;
    xLoc = x;
    getmaxyx(curwin, yMax, xMax);
    keypad(curwin, true);
    character = c;
}

// void    Enemy::update() { 
//     xLoc += 1; 
    
// }

void     Enemy::getEnemy(){


    randomX = xMax-3;//(rand() % (xMax/2) + 24);
    randomY = ((rand() % (yMax - 2)) + 1);
    
    //mvwaddch(curwin, randomY, randomX, character);

     if(randomX != 0){
        mvwaddch(curwin, randomY, randomX + 1, ' ');
        mvwaddch(curwin, randomY, randomX, 'X');
        display();
        wrefresh(curwin);
        usleep(100000);
        randomX--;

    }
    
    //wprintw(curwin, "Y: %d\nX: %d\n", (randomY + 1), randomX);
}

