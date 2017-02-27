// ************************ ///
// THIS ONE IS NOT FINISHED ///
// ************************ ///

#include "stdafx.h"
/*#include <cstdio>
#include <list>

using namespace std;

int main()
{
	int n_soldier, n_loss_report, left, right;
	list<int> soldier;
	list<int>::iterator left_iterator, right_iterator;

	while (true) {
		scanf("%d %d", &n_soldier, &n_loss_report);
		if (n_soldier == 0 && n_loss_report == 0)
			break;

		for (int i = 1; i <= n_soldier; i++)
			soldier.push_back(i);


		for (int i = 0; i < n_loss_report; i++) {
			scanf("%d %d", &left, &right);

			left_iterator = soldier.begin();
			while (*left_iterator != left)
				++left_iterator;
			right_iterator = left_iterator;
			while (*right_iterator != right)
				++right_iterator;

			//if (next(right_iterator) != soldier.end())
			//	++right_iterator;
			soldier.erase(left_iterator, right_iterator);
			//if (prev(left_iterator) != soldier.end())
			//	--left_iterator;

			if (left_iterator != soldier.end())
				printf("%d ", *left_iterator);
			else
				printf("* ");
			if (right_iterator != soldier.end())
				printf("%d\n", *right_iterator);
			else
				printf("*\n");

		}
		printf("-\n");

	}

	return 0;
}
*/