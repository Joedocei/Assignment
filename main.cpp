#include "Assignment.h"
#include "Course.h"

using namespace std;

int main()
{
	Course newCourse;

	cout << "Add Categories" << endl;
	newCourse.addCategories();
	cout << "Add Assignment" << endl;
	newCourse.addAssignment();
	system("pause");
	return 0;
}
