#include <iostream>
#include <string>
using namespace std;
string askText(string prop);
int askNumber(int n);
void tellStory(string name, string noun, int number, string bodyPart, string verb);
int main()
{
	cout << "I'm a odious narrator.\n\n";
	cout << "Answer the following questions to help create a new story.\n";
	string name = askText("I need some arbitrary name: ");
	string noun = askText("Aslo I need some word in a plural noun: ");
	int number = askText("Please enter a number: ");
	string bodyPart = askText("Enter a body part: ");
	string verb = askText("Enter a verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	return 0;
}
string askText(string prop)
{
	string text;
	cout << prop;
	cin >> text;
	return text;
}
int askNumber(string prop)
{
	int n;
	cout << prop;
	cin >> n;
	return n;
}
void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nNow listen:\n";
	cout << "Once upon a time ";
	cout << name << " ";
	cout << "got into the Gummy Bears' cave.\n";
	cout << "That was cool, man.\n";
	cout << "There was a lot of funny guys. ";
	cout << "But some ";
	cout << noun << " ";
	cout << "asked me what's going on, man? ";
	cout << "I was interrogated ";
	cout << "by ";
	cout << number << " " << noun;
	cout << "They " << verb;
	cout << " my " << bodyPart;
	cout << "I don't know what the fuck is this. Some bullshit man.\n";
	cout << "\n\nTotal sucks.\n\n";
}
