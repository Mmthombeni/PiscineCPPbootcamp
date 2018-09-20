#include <ncurses.h>
using namespace std;

WINDOW *create_newwin(int height, int width, int start_y, int start_x);
void destroy_win(WINDOW *local_win);

int main(int argc, char ** argv)
{
    WINDOW *my_win;
    int height, width, start_y, start_x;
    int ch;
    //Ncures start
    initscr();
    cbreak();

    keypad(stdscr, TRUE);

    height = 20;
    width = 18;
    start_y = (LINES - height) / 2;
    start_x = (LINES - width) / 2;
    printw("Press F1 to exit");
    refresh();
    my_win = create_newwin(height, width, start_y, start_x);

    while((ch = getch()) != KEY_F(1)){
        switch(ch)
        {
            case KEY_LEFT:
                destroy_win(my_win);
                my_win = create_newwin(height, width, start_y, --start_x);
                break;
            case KEY_RIGHT:
                destroy_win(my_win);
                my_win = create_newwin(height, width, start_y, ++start_x);
                break;
            case KEY_UP:
				destroy_win(my_win);
				my_win = create_newwin(height, width, --start_y,start_x);
				break;
			case KEY_DOWN:
				destroy_win(my_win);
				my_win = create_newwin(height, width, ++start_y,start_x);
				break;	 
        }
    }
    endwin();			/* End curses mode		  */
	return 0;

    WINDOW  *create_newwin(int height, int width, int start_y, int start_x)
    {	
        WINDOW *local_win;

        local_win = newwin(height, width, start_y, start_x);
        box(local_win, 0 , 0);		/* 0, 0 gives default characters 
                        * for the vertical and horizontal
                        * lines			*/
        wrefresh(local_win);		/* Show that box 		*/

        return local_win;
    }

void destroy_win(WINDOW *local_win)
{
    wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
    wrefresh(local_win);
	delwin(local_win);
}
   /*int y, x;
    x = y = 10;
    move(y, x); //moves cursor to specfic place*/
    // noecho();
    
    

    // WINDOW * win = newwin(height, width, start_y, start_x);
    // //printw("HEllo World "); //string(const char **)

    // refresh(); //refreshes 
    
    // clear(); //clears screen

    // getch(); //input of a screen returns int value of that screen

    // endwin();

    return 0;
}