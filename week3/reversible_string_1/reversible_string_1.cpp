#include <iostream>
#include <string>


using namespace std;

class ReversibleString {
public:
	ReversibleString() {
		buffer = "";
	}

	ReversibleString(const string & new_val) {
		buffer = new_val;
	}

	string ToString() const {
		return buffer;
	}

	void Reverse() {
		reverse(begin(buffer), end(buffer));
	}

private:
	string buffer;
};

int main() {
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << endl;

	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;

	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;

	return 0;
}
