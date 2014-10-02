/*
 * =====================================================================================
 *
 *       Filename:  5.2.2-Factorial.c
 *
 *    Description:  输出1000内数字n的阶乘
 *
 *        Version:  1.0
 *        Created:  10/02/2014 07:27:24 PM
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
	freopen("5.2.2-Factorial.input", "r", stdin);
#else							/* -----  not ONLINE_JUDGE  ----- */

#endif							/* -----  not ONLINE_JUDGE  ----- */
	int n;
	scanf("%d", &n);
	int result[1000] = { 0 };
	result[0] = 1;

	for (int i = 2; i <= n; i += 1) {
		int jinwei = 0;
		for (int j = 0; j < 1000; j += 1) {
			int tmp = result[j] * i + jinwei;
			result[j] = tmp % 10;
			jinwei = tmp / 10;
		}
	}

	for (int i = 999; i >= 0; i -= 1)
		if (result[i]) {
			for (int j = i; j >= 0; j -= 1)
				printf("%d", result[j]);
			break;
		}

	return EXIT_SUCCESS;
}								/* ----------  end of function main  ---------- */
