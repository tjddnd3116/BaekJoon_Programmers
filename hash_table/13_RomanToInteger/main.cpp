#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s)
{
	map<string, int> symbol;
	int romanInt = 0;

	symbol["I"] = 1;
	symbol["V"] = 5;
	symbol["X"] = 10;
	symbol["L"] = 50;
	symbol["C"] = 100;
	symbol["D"] = 500;
	symbol["M"] = 1000;
	symbol["IV"] = 4;
	symbol["IX"] = 9;
	symbol["XL"] = 40;
	symbol["XC"] = 90;
	symbol["CD"] = 400;
	symbol["CM"] = 900;

	for (size_t i = 0; i < s.size(); i++)
	{
		string roman = s.substr(i, 2);
		auto mapIt = symbol.find(roman);

		if (mapIt != symbol.end())
		{
			romanInt += mapIt->second;
			i++;
			continue;
		}
		if (roman.size() == 2)
			roman.pop_back();
		romanInt += symbol[roman];
	}

	return romanInt;
}

int main(void)
{
	cout << romanToInt("III") << endl;
	cout << romanToInt("LVIII") << endl;
	cout << romanToInt("MCMXCIV") << endl;
}
