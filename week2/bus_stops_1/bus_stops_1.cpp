#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	vector<string> buses_order;
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

			buses_order.push_back(new_bus);

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

		else {
			cout << "\nError: Unrecognized input\n";
			return 1;
		}
		
	}

	return 0;
}
