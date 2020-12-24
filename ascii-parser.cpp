#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string setup = "{id:command_block_minecart,Command:'setblock ";
string rel_pos = "~";
string item; 
string end_cap = "'},";

int pos1 = -1;
int pos2 = -2;
int pos3 = 1;

string combiner(int x, int y, int z, string item)
{
	return setup+rel_pos+(to_string(x))+" "+rel_pos+(to_string(y))+" "+rel_pos+(to_string(z))+" "+item+end_cap;
}

int main()
{
	cout << "summon falling_block ~ ~1 ~ {Time:1,BlockState:{Name:redstone_block},Passengers:[{id:falling_block,Passengers:[{id:falling_block,Time:1,BlockState:{Name:activator_rail},Passengers:[{id:command_block_minecart,Command:'gamerule commandBlockOutput false'},{id:command_block_minecart,Command:'data merge block ~ ~-2 ~ {auto:0}'},\n";
	
	int iterator=0;
	string line;
	
	ifstream command("ascii-char.txt");
	if(command.is_open())
	{

		while(getline(command,line))
		{
			
			for(int i=1; i<9; i++)
			{
				//cout << line[i];
				if(line[i-1] == '1')
				{
					
					int temp_posx = i*2;
					int temp_posz = iterator*4; 
					//cout << temp_posz ;
					cout << combiner(-temp_posz,-1,temp_posx,"minecraft:repeater[facing=east]") << "\n";
				}
			}
			//cout << iterator; cout << "\n";
			iterator +=1;
		}
		command.close();
	}
	else
	{
		cout << "fuck you jerremy renner";
	}
	cout << "{id:command_block_minecart,Command:'setblock ~ ~1 ~ command_block{auto:1,Command:\"fill ~ ~ ~ ~ ~-2 ~ air\"}'},{id:command_block_minecart,Command:'kill @e[type=command_block_minecart,distance=..1]'}]}]}]}\n";
	return 0;
 }
		
		
		
