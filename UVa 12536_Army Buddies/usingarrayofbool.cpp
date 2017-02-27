// ************************************** ///
// THIS ONE RESULTING TIME LIMIT EXCEEDED ///
// ************************************** ///

#include "stdafx.h"/*
#include <cstdio>

int main()
{
	int n_soldier, n_loss_report, left, right, iterator;
	bool soldier[100000];

	while (true) {
		scanf("%d %d", &n_soldier, &n_loss_report);
		if (n_soldier == 0 && n_loss_report == 0)
			break;

		for (int i = 0; i < n_soldier; i++)
			soldier[i] = true;

		for (int i = 0; i < n_loss_report; i++) {
			scanf("%d %d", &left, &right);

			left--; right--;

			iterator = left;
			for (int j = 0; j <= right - left; j++) {
				soldier[iterator] = false;
				iterator++;
			}


			while (left >= 0 && soldier[left] == false)
				left--;
			while (right != n_soldier && soldier[right] == false)
				right++;

			if (left >= 0)
				printf("%d ", ++left);
			else
				printf("* ");
			if (right != n_soldier)
				printf("%d\n", ++right);
			else
				printf("*\n");

		}
		printf("-\n");

	}

	return 0;
}
*/
