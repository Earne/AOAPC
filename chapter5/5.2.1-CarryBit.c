/*
 * =====================================================================================
 *
 *       Filename:  5.2.1-CarryBit.c
 *
 *    Description:  输出两个整数相加时产生进位的个数
 *
 *        Version:  1.0
 *        Created:  09/28/2014 09:40:57 PM
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
	freopen("5.2.1-CarryBit.input", "r", stdin);
#else							/* -----  not ONLINE_JUDGE  ----- */

#endif							/* -----  not ONLINE_JUDGE  ----- */
	int a, b;
	while (scanf("%d%d", &a, &b) == 2) {
		int count = 0, tmp = 0;
		while (a + b) {
			count += ((a % 10 + b % 10 + tmp) > 9) ? 1 : 0;
			tmp = (a % 10 + b % 10) % 10;
			a /= 10;
			b /= 10;
		}
		printf("result:%d\n", count);
	}

	return EXIT_SUCCESS;
}								/* ----------  end of function main  ---------- */
