/*
 * =====================================================================================
 *
 *       Filename:  5.1.1-WERTYU.c
 *
 *    Description:  P70
 *
 *        Version:  1.0
 *        Created:  09/24/2014 09:25:28 PM
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
int main(int argc, char *argv[])
{

#ifndef  ONLINE_JUDGE
	freopen("5.1.1-WERTYU.input", "r", stdin);
	freopen("5.1.1-WERTYU.output", "w", stdout);
#else							/* -----  not ONLINE_JUDGE  ----- */

#endif							/* -----  not ONLINE_JUDGE  ----- */
	char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

	int i, c;
	while ((c = getchar()) != EOF) {

		for (i = 1; s[i] && s[i] != c; i += 1) ;

		if (s[i])
			putchar(s[i - 1]);
		else
			putchar(c);

	}
	return EXIT_SUCCESS;
}								/* ----------  end of function main  ---------- */
