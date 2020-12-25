#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <windows.h>

std::string username;
std::string line;
int iterator =0;
int lines;
int main()
{
	std::ifstream myfile("4-Letter.txt");
	if(myfile.is_open())
	{
	while(std::getline(myfile,line))
	{
		if(iterator ==0){ lines = std::stoi(line);}	
		if(iterator <= 19713){iterator++;std::cout << ((iterator*100.0)/(lines))<<" " << iterator << " " << line << "                           \r";}
		else{
		std::cout << ((iterator*100.0)/(lines))<<" " << iterator << " " << line << "                           \r";
		username = line;
		std::string servername ="\"https://api.mojang.com/users/profiles/minecraft/"+username+"\"";
		std::string http_response = "curl -s --write-out \"%{http_code}\" --silent --output /dev/null " + servername + " >> file.txt";
		system((http_response).c_str());
		std::string name = "echo "+username+" >> file.txt";
		std::string iterator_to_file = "echo \"Last pos : " + std::to_string(iterator) + "\" >> iterator.txt";
		system((name).c_str());
		iterator++;	
		Sleep(1010);
		}		
}
	}

	return 0;
}
