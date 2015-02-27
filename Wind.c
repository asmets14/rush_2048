#include <ncurses.h>
int main()
{
  initscr();
  noecho();
  cbreak();
  curs_set(0);
 
  WINDOW* test = newwin(10, 80, 0, 0);
  if (!test) { //newwin went wrong.
    printw("ERROR with newwin\n." );
    refresh();
    getch();
  }
  wmove(test, 0, 0);
  wprintw(test, "Hello World !! (on test window.)" );
  wrefresh(test);
  getch();
 
  //delwin(test);
  endwin();
 
  return 0;
}