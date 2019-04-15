#include "pch.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> bus_paths;

	int q;
	cin >> q;

	while (q--) {

		int n;
		cin >> n;

		string path;
		getline(cin, path);

		//cout << "path='" << path << "'\n";
		//cout << "bus_paths.size=" << bus_paths.size() << endl;

		if (bus_paths.find(path) == bus_paths.end()) {
			int new_num = bus_paths.size() + 1;
			bus_paths[path] = new_num;
			cout << "New bus " << new_num << endl;
		}
		else {
			cout << "Already exists for " << bus_paths[path] << endl;
		}

	}
	return 0;
}
