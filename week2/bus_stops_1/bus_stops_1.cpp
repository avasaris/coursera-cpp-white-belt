#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<string>> buses;
	map<string, vector<string>> stops;

	int q;
	cin >> q;

	for (; q-- > 0;) {
		string operation_code;
		cin >> operation_code;

		if (operation_code == "NEW_BUS") {

			string new_bus;
			int stop_cnt;
			cin >> new_bus >> stop_cnt;

			for (; stop_cnt-- > 0;) {
				string new_stop;
				cin >> new_stop;
				buses[new_bus].push_back(new_stop);
				stops[new_stop].push_back(new_bus);
			}
		}

		else if (operation_code == "BUSES_FOR_STOP") {

			string stop;
			cin >> stop;

			if (stops.find(stop) != stops.end()) {
				for (const auto & bus : stops[stop]) cout << bus << " ";
				cout << endl;
			}
			else {
				cout << "No stop\n";
			}

		}

		else if (operation_code == "STOPS_FOR_BUS") {

			string bus;
			cin >> bus;

			if (buses.find(bus) != buses.end()) {
				for (const auto & stop : buses[bus]) {
					cout << "Stop " << stop << ":";
					if (stops[stop].size() > 1) {
						for (const auto & another_bus : stops[stop]) if (bus != another_bus) cout << " " << another_bus;
						cout << endl;
					}
					else {
						cout << " no interchange\n";
					}
				}
			}
			else {
				cout << "No bus\n";
			}
		}

		else if (operation_code == "ALL_BUSES") {

			if (buses.size() == 0) {
				cout << "No buses\n";
			}
			else {
				for (const auto &[bus, bus_stops] : buses) {
					cout << "Bus " << bus << ":";
					for (const auto & stop : bus_stops) {
						cout << " " << stop;
					}
					cout << endl;
				}
			}
		}

		else {
			cout << "\nError: Unrecognized input\n";
			return 1;
		}

	}

	return 0;
}
