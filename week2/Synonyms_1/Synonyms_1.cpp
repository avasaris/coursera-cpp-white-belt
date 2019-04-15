#include "pch.h"

using namespace std;

int main()
{
	map<string, set<string>> synonyms;

	int q;
	cin >> q;

	while (q--) {

		string operation_code, word1, word2;
		cin >> operation_code;

		if (operation_code == "ADD") {
			cin >> word1 >> word2;
			synonyms[word1].insert(word2);
			synonyms[word2].insert(word1);
		}
		else if (operation_code == "COUNT") {
			cin >> word1;
			cout << synonyms[word1].size() << endl;
		}
		else if (operation_code == "CHECK") {
			cin >> word1 >> word2;
			size_t syn_count = synonyms[word1].count(word2);
			if (syn_count == 0) {
				cout << "NO" << endl;
			}
			else {
				cout << "YES" << endl;
			}
		}

	}
	return 0;
}
