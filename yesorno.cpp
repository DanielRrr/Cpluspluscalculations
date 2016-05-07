#include <iostream>
#include <string>
using namespace std;
char askYesNo1();
char askYesNo2(string question);
int main()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";
	char answer2 = askYesNo2("Save your game?");
	cout << "Thanks for answering: " << answer2 << "\n";
	return 0;
}
char askYesNo1()
{
	char responsel;
	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> responsel;
	} while (responsel != 'y' && responsel != 'n');
	return responsel;
}
char askYesNo2(string question)
{
	char response2;
	do
	{
		cout << "question" << " (y/n): ";
		cin >> response2;
	} while (response2 != 'y' && response2 != 'n');
	return response2;
}
