#include <curses.h>


int main (void)
{
	initscr();
  	noecho();
  	curs_set(FALSE);

int y = 0;
	int max_y = 0; 
	int max_x = 0;
	while(1) 
  	{
  		clear();
  		getmaxyx(stdscr, max_y, max_x);
  	while (y < max_x)
  	{
		mvaddstr(1, y, "*");
  		y++;
  	}
	

  	 	//printw("y : %d x: %d", max_y, max_x);
  	 	refresh();
  	 	sleep(5);
  	 }
  	endwin();

}