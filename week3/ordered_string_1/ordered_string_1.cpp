#include "pch.h"

using namespace std;

class SortedStrings {
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

};


void PrintSortedStrings(SortedStrings& strings) {
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
}
