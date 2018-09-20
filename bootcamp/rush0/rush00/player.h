#ifndef PLAYER_H
    #define PLAYER_H

#include <iostream>
#include <ncurses.h>

class Player {
    public:
        Player(WINDOW * win, int y, int x, char c);

        void    mvup();
        void    mvdown();
        void    mvleft();
        void    mvright();
        int     getmv();
        void    shoot();
        void    display();
        void     getEnemy();
        void    update();
        

    private:
        int     xLoc, yLoc, xMax, yMax;
        char    character;
        WINDOW * curwin;
        int    randomX;
        int     randomY;
};

Player::Player(WINDOW * win, int y, int x, char c)
{
    curwin = win;
    yLoc = y;
    xLoc = x;
    getmaxyx(curwin, yMax, xMax);
    keypad(curwin, true);
    character = c;
}

void Player::mvup()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    yLoc--;
    if(yLoc < 1)
        yLoc = 1;
}

void Player::mvdown()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    yLoc++;
    if(yLoc > yMax-2)
        yLoc = yMax-2;
}

void Player::mvleft()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    xLoc--;
    if(xLoc < 1)
        xLoc = 1;
}

void Player::mvright()
{
    mvwaddch(curwin, yLoc, xLoc, ' ');
    xLoc++;
    if(xLoc > xMax-2)
        xLoc = xMax-2;
}

void Player::shoot(){

    
    //mvwaddch(curwin, yLoc, xLoc + 1, ' ');
    int curPos = xLoc + 1;
    
    while(curPos != (xMax - 2)){
        
        mvwaddch(curwin, yLoc, curPos, '>');
        curPos++;
        for(int i = curPos-1; i < xMax; i++){
            //mvwaddch(curwin, yLoc, i, ' ');
        }
    }
}

void    Player::update(){
     
     
         mvwaddch(curwin, yLoc, xLoc + 1, ' ');
     
}

int Player::getmv()
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

void Player::display()
{
    mvwaddch(curwin, yLoc, xLoc, character);
}

void     Player::getEnemy(){


    randomX = xMax-2;//(rand() % (xMax/2) + 24);
    randomY = ((rand() % (yMax - 2)) + 1);
    mvwaddch(curwin, randomY, randomX, character);
    //wprintw(curwin, "Y: %d\nX: %d\n", (randomY + 1), randomX);
}

#endif