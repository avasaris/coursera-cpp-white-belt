#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

//class Office {
//public:
//	int CountBrokenTables() const { /* ... */ return 0; }
//	void BurnBrokenTables() { /* ... */ }
//private:
//	bool IsTableBroken(int table_index) const { /* ... */ }
//	void BurnTable(int table_index) { /* ... */ }
//	// какие-то приватные поля
//};
//
//std::string InspectOffice(const Office& office) {
//	// INSERT CODE HERE
//	// office.BurnBrokenTables();
//	// bool first_broken = office.IsTableBroken(0);
//	// office.BurnTable(0);
//	int broken_table_count = office.CountBrokenTables();
//
//	return "Office is OK";
//}



class Circus {
public:
	int CountAnimalTypes()  {
		int animal_type_count = 0;
		for (const auto& item : animals_by_type) {
			if (HasAnimalType(item.first)) {
				++animal_type_count;
			}
		}
		return animal_type_count;
	}
	int ComputeAnimalCount() const {
		int animal_count = 0;
		for (const auto& item : animals_by_type) {
			animal_count += item.second.size();
		}
		return animal_count;
	}
	void AddAnimal(const string& type, const string& name) {
		animals_by_type[type].insert(name);
	}
	void RetireAnimal(const string& type, const string& name) {
		animals_by_type[type].erase(name);
	}

private:
	bool HasAnimalType(const string& type) {
		return !animals_by_type[type].empty();
	}

	map<string, set<string>> animals_by_type;
};



int main()
{
	
	
    std::cout << "Hello World!\n";

}

