
#include <ncurses.h>
#include <unistd.h>
#define DELAY 30000

int main(int argc, char *argv[]) 
{
  int x = 0, y = 0;
  int max_y = 0, max_x = 0;

  initscr();
  noecho();
  curs_set(FALSE);
  // Global var `stdscr` is created by the call to `initscr()`
  //getmaxyx(stdscr, max_y, max_x);
  while(1) 
  {
  	getmaxyx(stdscr, max_y, max_x);
    //clear();
    //mvprintw(y, x, "-");
    while (x < max_x)
    {
      mvprintw(y + 1, x, "-");
      x++;
    }
    while (y < max_y)
    {
      mvprintw(y, 2, "|");
      y++;
    }
    x = 0;
    y = 0;
    refresh();
    
  }
  clear();
  endwin();
}