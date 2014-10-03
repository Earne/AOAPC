// =====================================================================================
//
//       Filename:  6.1.1-CardGame.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/03/2014 09:56:17 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Ernest Geng (earne), earneyzxl@gmail.com
//   Organization:  HUST, BUPT
//
// =====================================================================================

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{

#ifndef  ONLINE_JUDGE
	freopen("6.1.1-CardGame.input", "r", stdin);
#else							// -----  not ONLINE_JUDGE  -----

#endif							// -----  not ONLINE_JUDGE  -----
	int n;
	scanf("%d", &n);
	queue < int >q;

	for (int i = 0; i < n; i += 1) {
		q.push(i + 1);
	}
	while (!q.empty()) {
		printf("%d ", q.front());
		q.pop();
		q.push(q.front());
		q.pop();
	}

	return EXIT_SUCCESS;
}								// ----------  end of function main  ---------- 
