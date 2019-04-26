#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>

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

	//LectureTitle title("C++", "White belt", "4th");
	//LectureTitle title(string("C++"), string("White belt"), string("4th"));

	//LectureTitle title = { "C++", "White belt", "4th" };

	//LectureTitle title = { {"C++"}, {"White belt"}, {"4th"} };

	/*LectureTitle title(
		Course("White belt"),
		Specialization("C++"),
		Week("4th")
	);*/

	/*LectureTitle title(
		Specialization("C++"),
		Week("4th"),
		Course("White belt")
	);*/


}

/*class SortedStrings {
public:
	void AddString(const string& s) {
		// add string s into the set
		sorted_set.push_back(s);
	}
	vector<string> GetSortedStrings() {
		// get sorted set
		resort_set();
		return sorted_set;
	}
private:
	vector<string> sorted_set;
	void resort_set() {
		sort(begin(sorted_set), end(sorted_set));
	}

};*/


/*void PrintSortedStrings(SortedStrings& strings) {
	for (const string& s : strings.GetSortedStrings()) {
		cout << s << " ";
	}
	cout << endl;
}

int main() {
	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);

	strings.AddString("second");
	PrintSortedStrings(strings);

	return 0;
}*/
