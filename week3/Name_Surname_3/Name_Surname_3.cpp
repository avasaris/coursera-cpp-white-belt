#include "pch.h"

using namespace std;


class Person {
public:

	Person(const string& first_name, const string& last_name, int year) {
		this->ChangeFirstName(year, first_name);
		this->ChangeLastName(year, last_name);
		birth_year = year;
	}

	void ChangeFirstName(int year, const string& first_name) {
		// добавить факт изменения имени на first_name в год year
		if (year >= birth_year) {
			name[year] = first_name;
		}
	}

	void ChangeLastName(int year, const string& last_name) {
		// добавить факт изменения фамилии на last_name в год year
		if (year >= birth_year) {
			surname[year] = last_name;
		}
	}

	string GetFullName(int year) const {
		// получить имя и фамилию по состоянию на конец года year
		if (year >= birth_year) {

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
				return "No person";
			}
			else {
				return "Unknown getter return";
			}
		}
		else {
			return "No person";
		}
	}

	string GetFullNameWithHistory(int year) const {
		// получить все имена и фамилии по состоянию на конец года year
		if (year >= birth_year) {
			bool haveName = false;
			string ret_name = "";
			int cnt = 0;
			for (auto n : name) {
				if (n.first <= year) {
					ret_name = n.second + ", " + ret_name;
					haveName = true;
					cnt++;
				}
			}
			if (haveName) {
				ret_name.erase(ret_name.size() - 1, 1);
				ret_name.erase(ret_name.size() - 1, 1);
				if (cnt > 1) {
					ret_name += ')';
					ret_name.replace(ret_name.find(", "), 2, " (");
				}
			}

			bool haveSurname = false;
			string ret_surname = "";
			cnt = 0;
			for (auto s : surname) {
				if (s.first <= year) {
					ret_surname = s.second + ", " + ret_surname;
					haveSurname = true;
					cnt++;
				}
			}
			if (haveSurname) {
				ret_surname.erase(ret_surname.size() - 1, 1);
				ret_surname.erase(ret_surname.size() - 1, 1);
				if (cnt > 1) {
					ret_surname += ')';
					ret_surname.replace(ret_surname.find(", "), 2, " (");
				}
			}

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
				return "No person";
			}
			else {
				return "Unknown getter return";
			}
		}
		else {
			return "No person";
		}
	}

private:
	// приватные поля
	map<int, string> name, surname;
	int birth_year;
};


int main()
{
	/*Person person;

	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year : {1900, 1965, 1990}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	person.ChangeFirstName(1970, "Appolinaria");
	for (int year : {1969, 1970}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year : {1969, 1970}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	person.ChangeFirstName(1990, "Polina");
	person.ChangeLastName(1990, "Volkova-Sergeeva");
	cout << person.GetFullNameWithHistory(1990) << endl;

	person.ChangeFirstName(1966, "Pauline");
	cout << person.GetFullNameWithHistory(1966) << endl;

	person.ChangeLastName(1960, "Sergeeva");
	for (int year : {1960, 1967}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	person.ChangeLastName(1961, "Ivanova");
	cout << person.GetFullNameWithHistory(1967) << endl;
	*/

	Person person("Polina", "Sergeeva", 1960);
	for (int year : {1959, 1960}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	person.ChangeFirstName(1965, "Appolinaria");
	person.ChangeLastName(1967, "Ivanova");
	for (int year : {1965, 1967}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}

	return 0;

}
