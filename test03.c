#include <ncurses.h>
#include <unistd.h>
int main(int argc, char *argv[]) 
{
	initscr();
	noecho();
	curs_set(FALSE);

	mvprintw(25, 0, "Hello, world!");
	refresh();
	sleep(452);
	endwin(); // Restore normal terminal behavior
}
