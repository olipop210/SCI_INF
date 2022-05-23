#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string tekst = "Ala ma kota ";
	cout << tekst << endl;
	vector<char>znaki;
	cout << "jakie znaki chcesz usunac/zamienic?\n";
	cout << "& zamyka wpisywanie\n";
	while (true)
	{
		char temp;
		cin >> temp;
		if (temp == '&') 
		{ 
			break; 
		}
		else
		{
			znaki.push_back(temp);
		}
	}
	cout << "na jaki znak chcesz to zamienic?\n";
	char znak; cin >> znak;


	auto lambda = [&znaki](char znak)
	{
		for (int i = 0; i < znaki.size(); i++)
		{
			if (znak == znaki[i])
			{
				return 1;
			}
		}
		return 0;
	};



	auto  a = remove_if(tekst.begin(), tekst.end(), lambda);
	tekst.erase(a, tekst.end());
	//replace_if(tekst.begin(), tekst.end(), lambda, znak);
	std::cout << tekst;

}


