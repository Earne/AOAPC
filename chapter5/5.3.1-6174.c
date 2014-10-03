/*
 * =====================================================================================
 *
 *       Filename:  5.3.1-6174.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/03/2014 09:10:33 PM
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
 *         Name:  get_next
 *  Description:  
 * =====================================================================================
 */
int get_next(int num)
{
	int a, b;
	char str[10];
	sprintf(str, "%d", num);
	//冒泡排序
	for (int i = strlen(str); i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (str[j] > str[j + 1]) {
				int tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}
	sscanf(str, "%d", &a);
	for (int i = 0; i < strlen(str) / 2; i++) {
		int tmp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = tmp;
	}
	sscanf(str, "%d", &b);
	return b - a;
}								/* -----  end of function get_next  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{

#ifndef  ONLINE_JUDGE
	freopen("5.3.1-6174.input", "r", stdin);
#else							/* -----  not ONLINE_JUDGE  ----- */

#endif							/* -----  not ONLINE_JUDGE  ----- */
	int num[200], count = 0;
	scanf("%d", &num[0]);
	printf("%d", num[0]);
	for (;;) {
		count++;
		num[count] = get_next(num[count - 1]);
		printf(" -> %d", num[count]);
		int fount = 0;
		for (int i = 0; i < count; i++) {
			if (num[i] == num[count]) {
				fount = 1;
				break;
			}
		}
		if (fount)
			break;
	}

	return EXIT_SUCCESS;
}								/* ----------  end of function main  ---------- */
