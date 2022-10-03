#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
	string name;
	int age = 0;
	int marks[100];
	int marks_count = 0;
};

double getAverageMark(Student st)
{
	double averageMark = 0;
	for (size_t i = 0; i < st.marks_count; i++)
	{
		averageMark += st.marks[i];
	}
	averageMark /= st.marks_count;
	return averageMark;
}

void fillStudentByHand(Student &st)
{
	cout << "Enter name:" << endl;
	cin >> st.name;
	cout << "Enter age:" << endl;
	cin >> st.age;
	cout << "Enter count of marks:" << endl;
	cin >> st.marks_count;
	for (size_t i = 0; i < st.marks_count; i++)
	{
		cout << "Enter mark:" << endl;
		cin >> st.marks[i];
	}
}

void Print(Student &st)
{
	cout << st.name << endl;
	cout << st.age << endl;
	cout << st.marks_count << endl;
	for (size_t i = 0; i < st.marks_count; i++)
	{
		cout << st.marks[i] << " ";
	}
	cout << endl;
}

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