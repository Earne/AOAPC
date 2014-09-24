/*
 * =====================================================================================
 *
 *       Filename:  5.1.2-TeX.c
 *
 *    Description:  P70
 *
 *        Version:  1.0
 *        Created:  09/24/2014 09:53:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ernest Geng (earne), earneyzxl@gmail.com
 *   Organization:  HUST, BUPT
 *
 * =====================================================================================
 */


#include <errno.h>
#include <math.h>  
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

#ifndef  ONLINE_JUDGE
    freopen("5.1.2-TeX.input", "r", stdin);
#else      /* -----  not ONLINE_JUDGE  ----- */
        
#endif     /* -----  not ONLINE_JUDGE  ----- */
    int flag = 1, c;
    while ((c = getchar()) != EOF){

        if ( c == '"' ) {
            printf ( "%s", flag ? "``" : "''" );
            flag = !flag;
        }
        else {
            printf ( "%c", c );
        }
    }

	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

