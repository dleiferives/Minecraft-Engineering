#include <stdio.h>
#include <string>
char hex_chars[] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

struct RGB{
	int r;
	int g;
	int b;
};

struct colorHex{
	RGB rbg;
	std::string color_tag; 
};


std::string int_to_hex(int i)
{
	std::string temp_string;
	int temp = i;
	int iterator;
	for(temp >16; temp /= 16;)
	{
		temp_string += hex_chars[temp%16];
	}
	temp_string += hex_chars[temp];
	return temp_string;
}



colorHex rbg_to_hex( int r, int g, ing b)
{

int main()
{
	big_laddie(shababay);
	colorHex grannie;
	grannie.color_tag =  int_to_hex(39873);
	printf((grannie.color_tag).c_str());
	return 0;
}

	
