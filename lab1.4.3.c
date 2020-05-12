#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	int i, l, r, answer;

	for (i = 10; i < 100; i++)
	{
		l = (i / 10) % 10;
		r = i % 10;

		answer = l + r + (pow((l + r), 2));

		if (answer == i)
		{
			printf("%d, ", i);
		}
	}
	_getch();
	return 0;
}