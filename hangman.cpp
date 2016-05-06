#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;
int main()
{
	const int MAX_WRONG = 60;
	vector<string> words;
	words.push_back("HOMOLOGY");
	words.push_back("HOMOTOPY");
	words.push_back("FIBRATIONS");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";
	cout << "Welcolme to Ian Curtis Game";
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nYou have " << (MAX_WRONG - wrong) << "incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;
		char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);
		while (used.find(guess) != string::npos)
		{
			cout << "\nYou've already guessed" << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}
		used += guess;
		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "Right! " << guess << " is the word";
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
	}
	if (wrong == MAX_WRONG)
	{
		cout << "\nMeet Monsieur Fernand Meyssonnier!";
	}
	else
	{
		cout << "\Monsieur Meyssonnier is off today";
	}
	return 0;
}
