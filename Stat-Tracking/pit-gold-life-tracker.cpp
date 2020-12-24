#include <iostream>
#include <fstream> 
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	float cur_life_gold;
	float total_gold_earned_fighting;

	string line;
	ifstream log("latest.log");
	
	if(log.is_open())
	{
		cur_life_gold =0;
		total_gold_earned_fighting =0;
		while ( getline(log,line))
		{
			if( line.find("ASSIST!")  != std::string::npos)
			{
				
				// cur_life_gold += stoi(line.substr(line.find("§6+§6"),(line.end()-line.find("§6+§6")-1)));
				
				cur_life_gold += stof(line.substr(line.find("6+")+4, (line.find(".")-line.find("6+")-1)));

			}

			if( line.find("KILL!")  != std::string::npos)
			{
				cur_life_gold += stof(line.substr(line.find("6+")+4, (line.find(".")-line.find("6+")-1)));
			}
			
			if( line.find("DEATH!")  != std::string::npos)
			{
				cout << cur_life_gold << "\n";
				total_gold_earned_fighting += cur_life_gold;
				cur_life_gold =0;
			}
			
			
				
		}
	}
	else
	{
		cout << "error reading file\n";
	}
	cout << "money made: "<< total_gold_earned_fighting;
	return 0;
}