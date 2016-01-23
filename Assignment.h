#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>
#include <vector>

using namespace std;

class Assignment{

	public:
		Assignment();
		Assignment(string n, double sR, double sP, string t);
		Assignment(string n, double sR, double sP, vector<string> d, string t);
		Assignment(string n, double sR, double sP, vector<string> d, string c, string t);

		double getScoreReceived();
		void setScoreReceived(double s);
		double getScorePossible();
		void setScorePossible(double s);
		vector<string> getDates();
		void setDates(vector<string> d);
		string getName();
		void setName(string n);
		string getComments();
		void setComments(string c);
		string getType();
		void setType(string t);

		double getScore();


	private:
		string name;
		double scoreReceived;
		double scorePossible;
		/*
		date variables used for possible important dates to user
		such as when the assignment was given, when it was due,
		and the date the score was received;
		*/
		vector<string> dates;
		string comments; //teacher comments
		string type;
};

#endif
