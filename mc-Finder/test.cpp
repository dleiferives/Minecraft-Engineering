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
	std::ifstream myfile("names.txt");
	if(myfile.is_open())
	{
	while(std::getline(myfile,line))
	{
		if(iterator ==0){ lines = std::stoi(line);}	
		std::cout << ((iterator*100.0)/(lines))<<" " << iterator << "\r";
		username = line;
		std::string servername ="\"https://api.mojang.com/users/profiles/minecraft/"+username+"\"";
		std::string hey = "curl -s --location --request GET \"https://api.mojang.com/users/profiles/minecraft/"+username+"\" > temp.txt";
		system((hey).c_str());
		std::string http_response = "curl -s --write-out \"%{http_code}\" --silent --output /dev/null " + servername + " >> file.txt";
		system((http_response).c_str());
		std::string name = "echo "+username+" >> file.txt";
		system((name).c_str());
		Sleep(2050);
		iterator++;	
	}
	}

	return 0;
}
