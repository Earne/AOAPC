/*
 * =====================================================================================
 *
 *       Filename:  5.1.3-String-Cycle.c
 *
 *    Description:  输出字符串的最小周期 
 *
 *        Version:  1.0
 *        Created:  09/25/2014 09:43:57 PM
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
	freopen("5.1.3-String-Cycle.input", "r", stdin);
#else							/* -----  not ONLINE_JUDGE  ----- */

#endif							/* -----  not ONLINE_JUDGE  ----- */
	char str[100];
	scanf("%s", str);

	for (int i = 1; i < strlen(str); i += 1) {

		int ok = 0;
		for (int j = i; j < strlen(str); j += 1) {
			if (str[j] != str[j % i]) {
				ok = 1;
				break;
			}
		}
		if (ok == 0) {
			printf("%d\n", i);
			break;
		}
	}
	return EXIT_SUCCESS;
}								/* ----------  end of function main  ---------- */
