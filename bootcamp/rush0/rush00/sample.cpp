#include <ncurses.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include "player.h"
 //not allowed

/*    char    Map[20][20] = {
        "###################",
        "# @@@@@@@@@@@@@@  #",
        "#   @@@@@@@@@@    #",
        "#     @@@@@@@@    #",
        "#      @@@@@@     #",
        "#       @@@@      #",
        "#         @       #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#                 #",
        "#   W             #",
        "###################",


    };
        bool endgame = false;
        int gamespeed = 100;

    int main() 
    {
        system("color Oa");
        while (endgame == false) {

            system("cls");
            for (int y = 0; y<20; y++) {

                cout << Map[y] << endl;
            }

            for (int y = 0; y<20; y++) {
                for (int x = 0; x<20; x++){

                    switch (Map[y][x]) {

                        case 'W':
                            if (GetAsyncKeyState(VK_LEFT) != 0) {

                                int newX = x-1;

                                switch(Map[y][newX]){
                                    case ' ':
                                    Map[y][x] = ' ';
                                    x--;
                                    Map[y][newX] = 'W';

                                    break;

                                }
                            }

                            if (GetAsyncKeyState(VK_RIGHT) != 0){

                                int newX = x+1;

                                switch(Map[y][newX]){

                                    case ' ':
                                    Map[y][x] = ' ';
                                    x++;
                                    Map[y][newX] = 'W';

                                    break;
                                }

                            }

                            if (GetAsyncKeyState(VK_SPACE) != 0){

                                y--;
                                Map[y][x] = '^';
                            }
                        break;

                        case '^':
                            
                            Map[y][x] = ' ';
                            y--;
                            if (Map[y][x] != '#' && Map[y][x] != '@'){
                                Map[y][x] = '^';

                            }
                            else if (Map[y][x] == '@') {
                                Map[y][x] = ' ';
                            }

                        break;
                    }
                }

            }
            Sleep(gamespeed);
        }

        return 0;
    }
*/

int main(int argc, char ** argv)
{
    initscr();
    noecho();
    cbreak();

    //get size of screen
    int yMax, xMax, randomX;
    getmaxyx(stdscr, yMax, xMax);

    //create a window for our nput
    WINDOW * playwin = newwin(20, 50, (yMax/2)-10, 10);
    //nodelay(playwin, TRUE);
    box(playwin, 0, 0);
    refresh();
    wrefresh(playwin);


    Player * p = new Player(playwin, 1, 1, '@');
    Player * e = new Player(playwin, 18, 30, 'X');
    do
    {
        p->display();
        e->getEnemy();
        wrefresh(playwin);
        usleep(10000);
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