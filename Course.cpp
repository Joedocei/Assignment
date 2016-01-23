#include "Course.h"

using namespace std;

Course::Course()
{
}

void Course::addCategories()
{
	int numOfCategories = 0;
	double percentage = 0;
	string name;
	cout << "How many grading categories would you like to enter? (i.e. Grading Categories - Homework, Test, Participation,...)" << endl;
	cin >> numOfCategories;
	for (int i = 0; i < numOfCategories; i++)
	{
		cout << "Please enter category name: ";
		cin >> name;
		categoryNames.push_back(name);
		cout << endl;
		cout << "Please enter percentage weight for category (ie. 40): ";
		cin >> percentage;
		cout << endl;

		breakdown[name] = percentage;
	}
}

void Course::addAssignment()
{
	string type;
	double scoreObtained;
	double highestScore;
	string comments;
	string datesResponse;
	vector<string> dates;
	string name;

	cout << "What type of assignment are you adding? (i.e. Homework, Test, Quiz,...)";
	cin >> type;
	cout << endl << "What is the assignment name? (i.e.Homework1, Homework2, ...)";
	cin >> name;
	cout << endl << "What score did you receive on the assignment?";
	cin >> scoreObtained;
	cout << endl << "What was the highest score possible on the assignment?";
	cin >> highestScore;
	cout << endl << "Did you receive any comments from the grades on the assignment that you wish to store?";
	cin >> comments;
	if (comments == "yes")
	{
		cout << "Please enter comments: ";
		cin >> comments;
	}
	cout << endl << "Do you want to save any dates for the assignment?";
	cin >> datesResponse;
	if (datesResponse == "yes")
	{
		string dateAssigned;
		string dateReceived;
		string otherDate = "no";
		cout << "Enter date assigned: ";
		cin >> dateAssigned;
		cout << "Enter date the grade was received: ";
		cin >> dateReceived;
		dates.push_back(dateAssigned);
		dates.push_back(dateReceived);
		while (otherDate != "no")
		{
			cout << "Enter any other dates you wish to save: ";
			cin >> otherDate;
			dates.push_back(otherDate);
		}
	}

	for (int i = 0; i < categoryNames.size(); i++)
	{
		if (type == categoryNames[i])
		{
			Assignment x(name, scoreObtained, highestScore, dates, comments, type);
			//Assignment* a = new Assignment(name, scoreObtained, highestScore, dates, comments, type);
			//grades.push_back(a);
			grades.push_back(x);
		}
	}
}
