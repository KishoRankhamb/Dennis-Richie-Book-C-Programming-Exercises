/***
 *
 * Experiment to find out what happens when prints's argument string
 * contains \c, where c is some character not listed above.
 *
 ***/

#include<stdio.h>

int main(void)
{
    printf("a:\a"); /* valid */
    printf("b:\b"); /* valid */
    printf("c:\c");
    printf("d:\d");
    printf("e:\e"); /* valid */
    printf("f:\f"); /* valid */
}