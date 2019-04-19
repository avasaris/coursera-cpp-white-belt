#include "pch.h"

using namespace std;


class Person {
public:
	void ChangeFirstName(int year, const string& first_name) {
		// добавить факт изменения имени на first_name в год year
		name[year] = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		// добавить факт изменения фамилии на last_name в год year
		surname[year] = last_name;
	}
	string GetFullName(int year) {
		// получить имя и фамилию по состоянию на конец года year
		bool haveName = false;
		string ret_name = "";
		for (auto n : name)
			if (n.first <= year) ret_name = n.second, haveName = true;

		bool haveSurname = false;
		string ret_surname = "";
		for (auto s : surname)
			if (s.first <= year) ret_surname = s.second, haveSurname = true;


		if (haveName && haveSurname) {
			return ret_name + " " + ret_surname;
		}
		else if (haveName && !haveSurname) {
			return ret_name + " with unknown last name";
		}
		else if (!haveName && haveSurname) {
			return ret_surname + " with unknown first name";
		}
		else if (!haveName && !haveSurname) {
			return "Incognito";
		}
		else {
			return "Unknown getter return";
		}

	}
private:
	// приватные поля
	map<int, string> name, surname;
};


int main()
{
	Person person;

	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year : {1900, 1965, 1990}) {
		cout << person.GetFullName(year) << endl;
	}

	person.ChangeFirstName(1970, "Appolinaria");
	for (int year : {1969, 1970}) {
		cout << person.GetFullName(year) << endl;
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year : {1969, 1970}) {
		cout << person.GetFullName(year) << endl;
	}

	return 0;

}
