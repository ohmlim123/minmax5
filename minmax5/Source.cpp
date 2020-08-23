#include <stdio.h>
int main()
{
	int N = 0, i = 0, A = 0;
	int max = 0;
	int min = 0;

	
	
	scanf_s("%d", &A);

	scanf_s("%d",&N);

	max = N;
	min = N;

	
	for (i = 1;i <= A - 1;i++)
	{
		scanf_s("%d",&N);
		if (N > max)
		{
			max = N;
		}

			if (N < min)
			{
			min = N;
			}
	}

		printf("%d\n", max);
		printf("%d", min);





	return 0;
}