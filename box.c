#include <ncurses.h>

int main(int argc, char *argv[])
{
    initscr();
    curs_set(FALSE);
    WINDOW *win = newwin(10,10,1,1);
    WINDOW *win2 = newwin(10,10,1,10);

    box(win, '|', '-');
    box(win2, '|', '-');
    touchwin(win);
    touchwin(win2);
    wrefresh(win);
    wrefresh(win2);

    getchar();

    endwin();
    return 0;
}