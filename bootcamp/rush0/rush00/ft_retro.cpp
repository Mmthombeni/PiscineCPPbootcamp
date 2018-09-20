/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 14:14:56 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 14:15:01 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include "GameEntity.hpp"
#include "Enemy.hpp"
#include "PlayerShip.hpp"

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;

//     move(5, 5);

//     std::string text = "Rush00, Press any key to start and press X to quit";
//     for(int i = 0; i < text.size(); i++) {
//     addch(text[i]);
//     addch(' ');
// }

refresh();

    initscr();
    noecho();
    cbreak();

    //get size of screen
    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    //create a window for our nput
    WINDOW * playwin = newwin(20, 50, (yMax/2)-10, 10);
    nodelay(playwin, TRUE);
    box(playwin, 0, 0);
    refresh();
    wrefresh(playwin);


    GameEntity * p = new GameEntity(playwin, 1, 1, '@');
    Enemy * e = new Enemy(playwin, 18, 30, 'X');
    do
    {
        p->display();
        e->getEnemy();
        wrefresh(playwin);
    } while(p->getmv() != 'x');


 /*   while(1)
    {

        if(p->getmv() != 'x')
        {
            p->display();
            wrefresh(playwin);
        }
        else
            return 0;
    }
*/
    //make sure program waits before exiting...
    getch();
    endwin();

    return 0;
}

