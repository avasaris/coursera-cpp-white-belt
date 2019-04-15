#include "pch.h"

using namespace std;

int main()
{
	map<set<string>, int> bus_paths;

	int q;
	cin >> q;

	while (q--) {

		int n;
		cin >> n;

		set<string> path;

		while (n--) {
			string stop;
			cin >> stop;
			path.insert(stop);
		}

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
