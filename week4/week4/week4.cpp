// week4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


#include <iostream>
#include <string>
//#include <vector>
//#include <algorithm>

using namespace std;

struct specialization {
	string value;
	void specialization(string new_val) { value = new_val; }
};

struct course {
	string value;
	void Course(string new_val) { value = new_val; }
};

struct week {
	string value;
	void Week(string new_val) { value = new_val; }
};

struct LectureTitle {
	string specialization;
	string course;
	string week;
};


int main() {

	LectureTitle title(
		Specialization("C++"),
		Course("White belt"),
		Week("4th")
	);

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
