#include <string.h>

/*
 * Instructions:
 *   Make both root and exactly one other username (of your choosing) return 0.
 *   You may edit this file however you'd like while developing your exploit.
 *   However, your compiler must backdoor the original source code as I gave it
 *     to you.
 *   There may not be any evidence of the backdoor in this or the compiler’s
 *     source code.
 *
 * Notes:
 *   You can check the return code in the shell by running `echo $?`.
 *
 * Compiling:
 *   cc -o login login.c
 */

static int
do_login(const char *username)
{

    if (!strcmp(username, "root") || !strcmp(username, "alex"))
        return 0;

    return 1;
}

int main(int argc, char *argv[])
{

    if (argc != 2)
        return 1;

    return do_login(argv[1]);
}


/** 
 * What to do:
 * make a match on a username and make them a super user
 * 1. rewrite this program to take another user (done)
 * 2. teach the compiler to find that line of code, rewrite it to run this line
 *       -make a compiler thta will look for that particular line and rewrite it -obvious to find
 * 3. Have a compiler that would look for that line and then replace that line of code with the bugged
 *    line that we wrote above and then it will compile that version instead
 * 
 * tcc compiler - reads a single line at a time and then compiles eahc line at a time
 *    at this time you can ask tcc dump its own state before compilation 
 */

https://en.wikipedia.org/wiki/Quine_(computing)#:~:text=A%20quine%20is%20a%20computer,%22self%2Dcopying%20programs%22.
https://bellard.org/tcc/tcc-doc.html
https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html