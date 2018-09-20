/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:08:02 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:08:06 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ncurses.h>
#include "GameEntity.hpp"
#include "unistd.h"

GameEntity::GameEntity(void){
    return;
}

GameEntity::GameEntity(GameEntity const & src){
    *this = src;
    return;
}

GameEntity::~GameEntity(void){
    return;
}

GameEntity::GameEntity(WINDOW * win, int y, int x, char c){
    curwin = win;
    yLoc = y;
    xLoc = x;
    getmaxyx(curwin, yMax, xMax);
    keypad(curwin, true);
    character = c;
}

void GameEntity::mvup()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    yLoc--;
    if(yLoc < 1)
        yLoc = 1;
}

void GameEntity::mvdown()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    yLoc++;
    if(yLoc > yMax-2)
        yLoc = yMax-2;
}

void GameEntity::mvleft()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    xLoc--;
    if(xLoc < 1)
        xLoc = 1;
}

void GameEntity::mvright()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    xLoc++;
    if(xLoc > xMax-2)
        xLoc = xMax-2;
}

void GameEntity::shoot(){

    mvwaddch(curwin, yLoc, xLoc + 1, ' ');
    int curPos = xLoc + 1;
    
    while(curPos != (xMax - 2)){
        mvwaddch(curwin, yLoc, curPos - 1, ' ');
        mvwaddch(curwin, yLoc, curPos, '>');
        display();
        wrefresh(curwin);
        usleep(10000);
        curPos++;
        

    }
}

int GameEntity::getmv()
{
    int choice = wgetch(curwin);
    switch(choice)
    {
        case KEY_UP:
            mvup();
            break;
        case KEY_DOWN:
            mvdown();
            break;
        case KEY_LEFT:
            mvleft();
            break;
        case KEY_RIGHT:
            mvright();
            break;
        case ' ':
            shoot();
            break;
            default:
            break;
    }
    return choice;
}

void GameEntity::display()
{
    mvwaddch(curwin, yLoc, xLoc, character);
}

/*WINDOW * curwin;

int    init() {

    curwin = initscr();
    cbreak();
    noecho();
    clear();
    refresh();

    return 0;
}

void    run(){
    move(5, 5);
    std::string text = "Rush00";
}

void close() {
    endwin();
}
*/

