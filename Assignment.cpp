#include "Assignment.h"

using namespace std;

Assignment::Assignment()
{
	name = "";
	scoreReceived = 0;
	scorePossible = 0;
	comments = "";
	type = "";
}

Assignment::Assignment(string n, double sR, double sP, string t)
{
	name = n;
	scoreReceived = sR;
	scorePossible = sP;
	type = t;
	comments = "";
}

Assignment::Assignment(string n, double sR, double sP, vector<string> d, string t)
{
	name = n;
	scoreReceived = sR;
	scorePossible = sP;
	dates = d;
	type = t;
	comments = "";
}

Assignment::Assignment(string n, double sR, double sP, vector<string> d, string c, string t)
{
	name = n;
	scoreReceived = sR;
	scorePossible = sP;
	dates = d;
	comments = c;
	type = t;
}

double Assignment::getScoreReceived() {	return scoreReceived;}
void Assignment::setScoreReceived(double s) { scoreReceived = s; }

double Assignment::getScorePossible() { return scorePossible; }
void Assignment::setScorePossible(double s) { scorePossible = s; }

vector<string> Assignment::getDates() { return dates; }
void Assignment::setDates(vector<string> d) { dates = d; }

string Assignment::getName() { return name; }
void Assignment::setName(string n) { name = n; }

string Assignment::getComments() { return comments; }
void Assignment::setComments(string c) { comments = c; }

string Assignment::getType() { return type; }
void Assignment::setType(string t) { type = t; }

double Assignment::getScore() { return (scoreReceived / scorePossible) * 100; }
