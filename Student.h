#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age = 0;
	int marks[100];
	int marks_count = 0;
};

double getAverageMark(Student st);
void fillStudentByHand(Student& st);
void Print(Student& st);