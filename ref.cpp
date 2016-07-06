#include <iostream>
using namespace std;
int main()
{
	int myScore = 1000;
	int& mikeScore = myScore;
	cout << "My Score is : " << myScore << "\n";
	cout << "Mike Score is : " << mikeScore << "\n\n";
	cout << "Add to our scores 500 points\n";
	myScore += 500;
	cout << "My Score is : " << myScore << "\n";
	cout << "Mike Score is : " << mikeScore << "\n\n";
	cout << "Add to our scores 500 points\n";
	myScore += 500;
	cout << "My Score is : " << myScore << "\n";
	cout << "Mike Score is : " << mikeScore << "\n\n";
	return 0;
}
