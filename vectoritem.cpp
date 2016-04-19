#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << "You have " << inventory.size() << " items.\n";
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";
	cout << "\nYour shield was destroyed";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou were robbed.\n";
	inventory.clear();
	if (inventory.empty())
	{
		cout << "You are loser.\n";
	}
	else
	{
		cout << "Don't lose your the last item.\n";
	}
	return 0;
}
