#include "Student.h"

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

void fillStudentByHand(Student& st)
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

void Print(Student& st)
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