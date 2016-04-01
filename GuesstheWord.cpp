#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"guitar", "Some Rock 'n' Roll, man."},
		{"transcendental", "Remember the Germal Philosophy"},
		{"love", "This suck more than anything has even been sucked before"},
		{"tobacco", "Reason of your Cancer"},
		{"beer", "Yellow alcohol stuff"},
		{"poetry", "ficton for jerks"},
		{"Michael Jackson", "Loves your son"},
		{"existentialism", "Nobody needs you"},
		{"Primitive-Recursion Function", "Remember Kleene's books"},
		{"Butthead", "Your alter-ego"}
	};
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	cout << "\t\tWelcolme to the Jungle!\n\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game\n\n";
	cout << "The jumble is: " << jumble;
	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;
    
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "Pardonne-moi.";
		}
		cout << "\n\nYour guess: ";
			cin >> guess;
			if (guess == theWord)
			{
				cout << "Congratulations!\n";
		    }
	}
	cout << "Thanks for play!\n";
	return 0;
}
