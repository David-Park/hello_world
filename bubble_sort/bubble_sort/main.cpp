#include <iostream>
#include <time.h>
#include <random>
using namespace std;
#define MAXSIZE 10
int main()
{
	int s[MAXSIZE];
	srand(time(NULL));
	for (int i = 0; i < MAXSIZE; i++)
		s[i] = rand() % 100;

	cout << "unsorted sequence : ";
	for (int i = 0; i < MAXSIZE; i++)
		cout << s[i] << " ";
	cout << endl;

	for (int i = 0; i < MAXSIZE-1; i++)
	{
		for (int j = 0; j < MAXSIZE - 1 - i; j++)
		{
			if (s[j] > s[j + 1])
				swap(s[j], s[j + 1]);
		}
	}

	cout << "sorted sequence : ";
	for (int i = 0; i < MAXSIZE; i++)
		cout << s[i] << " ";
	cout << endl;
	return 0;
}