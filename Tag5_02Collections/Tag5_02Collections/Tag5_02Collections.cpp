// Tag5_02Collections.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <deque>
#include <unordered_set>

struct schwein
{
	std::string name;
	int gewicht;


	friend std::ostream& operator<<(std::ostream& os, const schwein& obj)
	{
		return os
			<< "name: " << obj.name
			<< " gewicht: " << obj.gewicht;
	}

	
};

class WonderFkt
{
private:
	int counter{ 0 };
public:
	void operator()()  {
		counter++;
	}

	int get_counter() const
	{
		return counter;
	}
};

class PigEqual {
public:
	bool operator()(const schwein& s1, const schwein& s2) const {
		return s1.name == s2.name && s1.gewicht == s2.gewicht;
	}
};

struct PigHash {
public:
	size_t operator()(const schwein& s) const {

		return std::hash<int>()(s.gewicht) + std::hash<std::string>()(s.name);
	}
};

int main()
{

	
	
	std::unordered_set<std::string> stringSet;

	stringSet.insert("eins");
	stringSet.insert("zwei");
	stringSet.insert("drei");
	stringSet.insert("eins");
	stringSet.insert("vier");

	for (auto& s : stringSet)
	{
		std::cout << s << std::endl;

	}
	std::unordered_set <schwein, PigHash, PigEqual> schweinSet;

	schweinSet.insert(schwein{ "piggy", 10 });
	schweinSet.insert(schwein{ "babe", 10 });
	schweinSet.insert(schwein{ "piggy", 10 });
	schweinSet.insert(schwein{ "rudi", 15 });
	schweinSet.insert(schwein{ "noch ein schwein", 10 });

	for (auto& s : schweinSet)
	{
		std::cout << s << std::endl;

	}
	
}

