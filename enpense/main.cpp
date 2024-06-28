#include <iostream>
#include <string>
using namespace std;

/*
* > CMD Args...
* - CMD:
* - add     Label (+/- default: -) 0.00
* - del		Label
* - list
* - eval
* - exit
*/

int main()
{
	string cmd;
	while (true)
	{
		cout << "enpense tracker> ";
		getline(cin, cmd);
		
		if (cmd == "add")
		{

		}
		else if (cmd == "del")
		{

		}
		else if (cmd == "list")
		{

		}
		else if (cmd == "eval")
		{

		}
		else if (cmd == "exit")
		{
			break;
		}
		else
		{
			cout << "Invalid command!" << endl;
		}
	}
}