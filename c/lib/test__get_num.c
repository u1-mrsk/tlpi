/* Demonstration of how to use functions in get_num.c

   Compile
        $ gcc test__get_num.c -o test__get_num.out -L./ -lnum

   Examples:
        $ ./test__get_num ff 14
        > i = 255, j = 12
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_num.h"

int
main(int argc, char *argv[])
{
    int i, j;

    i = getInt(argv[1], GN_BASE_16, "test-base-16");
    j = getInt(argv[2], GN_BASE_8, "test-base-8");

    printf("i = %d, j = %d\n", i, j);

    exit(EXIT_SUCCESS);
}
