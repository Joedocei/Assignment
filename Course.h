#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "Assignment.h"

using namespace std;

class Course
{
public:
	Course();
	void addCategories();
	void addAssignment();

private:
	vector<string> categoryNames;
	map<string, double> breakdown;
	/*
	0 - hw
	1 - quiz
	2 - tests
	3 - projects
	4 - misc
	*/
	vector<Assignment> grades;
};

#endif
