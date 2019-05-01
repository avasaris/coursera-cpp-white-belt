#include <iostream>

using namespace std;

struct Specialization {
	string value;
	explicit Specialization(const string& new_val) { value = new_val; }
};

struct Course {
	string value;
	explicit Course(const string& new_val) { value = new_val; }
};

struct Week {
	string value;
	explicit Week(const string& new_val) { value = new_val; }
};

struct LectureTitle {
	string specialization;
	string course;
	string week;
	explicit LectureTitle(Specialization spec, Course cour, Week wee) {
		specialization = spec.value;
		course = cour.value;
		week = wee.value;
	}
};


int main() {

	LectureTitle title(
		Specialization("C++"),
		Course("White belt"),
		Week("4th")
	);

	return 0;
}
