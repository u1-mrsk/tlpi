/* necho.c

    A simple version of echo(1): echo our command-line arguments.

    Usage:
    $ gcc necho.c -o necho.out -I../lib/
    $ ./necho.out
    > argv[0] = ./necho.out
    $ ./necho.out foo bar
    > argv[0] = ./necho.out
    > argv[1] = foo
    > argv[2] = bar

*/

#include "tlpi_hdr.h"

int
main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}
