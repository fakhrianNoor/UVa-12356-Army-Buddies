// UVa 12536_Army Buddies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>

int main()
{
	int n_soldier, n_loss_report, left, right, iterator;
	int left_buddies[100001], right_buddies[100001];

	while (true) {
		scanf("%d %d", &n_soldier, &n_loss_report);
		if (n_soldier == 0 && n_loss_report == 0)
			break;

		for (int i = 0; i <= n_soldier; i++) {
			left_buddies[i] = i-1;
			right_buddies[i] = i+1;
		}
		
		for (int i = 0; i < n_loss_report; i++) {
			scanf("%d %d", &left, &right);
			
			if (left_buddies[left] < 1)
				printf("* ");
			else
				printf("%d ", left_buddies[left]);
			if (right_buddies[right] > n_soldier)
				printf("*\n");
			else
				printf("%d\n", right_buddies[right]);

			left_buddies[right_buddies[right]] = left_buddies[left];
			right_buddies[left_buddies[left]] = right_buddies[right];

		}
		printf("-\n");

	}

	return 0;
}

