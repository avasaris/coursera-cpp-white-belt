// bus_stops_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;




int main()
{
	vector<string> buses_order;
	map<string, vector<string>> buses;

	int q;
	cin >> q;

	for (; q-- > 0;) {
		string operation_code;
		cin >> operation_code;



		if (operation_code == "NEW_BUS") {
			
			string new_bus;
			int stops;
			cin >> new_bus >> stops;

			buses_order.push_back(new_bus);
			buses[new_bus].resize(stops);

			for (auto &stop : buses[new_bus]) cin >> stop;
		}

		else if (operation_code == "ALL_BUSES") {

			if (buses.size() == 0) {
				cout << "No buses\n";
			}
			else {
				for (const auto & bus : buses) {
					cout << "Bus " << bus.first << ":";
					for (const auto & stop : bus.second) {
						cout << " " << stop;
					}
					cout << endl;
				}
			}
		}

		
	}

    
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
