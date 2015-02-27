
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>                  /*  for sleep()  */
#include <curses.h>


int main(void) {

	WINDOW * mainwin;

	initscr();       // Initialize the window
	noecho();        // Don't echo any keypresses
	//curs_set(FALSE); // Don't display a curs


	/*  Initialize ncurses  */

/*	if ( (mainwin = initscr()) == NULL ) {
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(EXIT_FAILURE);
	}*/


	/*  Display "Hello, world!" in the centre of the
	 *  	screen, call refresh() to show our changes, and
	 *  		sleep() for a few seconds to get the full screen effect  */

	mvaddstr(56, 1, "Hello, world!");
	refresh();
	sleep(30);


	/*  Clean up after ourselves  */

	delwin(mainwin);
	endwin();
	refresh();

	return EXIT_SUCCESS;
}

