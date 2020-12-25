#include <vector>
#include <stdio.h>
#include <fstream>
#include <string>

int main()
{
	std::fstream myfile;
	myfile.open("4-letter.txt");



	std::vector<char> chars = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        printf("%i",chars.size());
	
	// first set
	for( auto i : chars)
	{
		myfile << " " << " " << " " << i << "\n";
	}
	// second set
	for( auto i : chars)
	{
		for(auto j : chars)
		{
			myfile << " " << " " << i << j << "\n";	
		}
	}
	
	// third set
	for( auto i : chars)
	{
		for(auto j : chars)
		{
			
			for(auto k : chars)
			{
				myfile << " " << i << j << k << "\n";	
			}
		}
	}
	
	// fourth set
	
	for( auto i : chars)
	{
		for(auto j : chars)
		{
			
			for(auto k : chars)
			{
				
				for(auto h : chars)
				{
					myfile  << i << j << k << h << "\n";	
				}
			}
		}
	}
	
	return 0;

	










}	
