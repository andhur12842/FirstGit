#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
	int countOfMarks = 2;
	const int SIZE = 2;
	Student group[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		fillStudentByHand(group[i]);
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		Print(group[i]);
	}
	


	return 0;
}