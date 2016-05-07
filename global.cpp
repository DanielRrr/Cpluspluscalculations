#include <iostream>
using namespace std;
int global = 10;
void access_global();
void hide_global();
void change_global();
int main()
{
	cout << "In main() global is: " << global << "\n\n";
	access_global();
	hide_global();
	cout << "In main() global is: " << global << "\n\n";
	change_global();
	cout << "In main() glob is: " << global << "\n\n";
	return 0;
}
void access_global()
{
	cout << "In access_global() global is: " << global << "\n\n";
}
void hide_global()
{
	cout << "In hide_global() global is: " << global << "\n\n";
}
void change_global()
{
	cout << "In change_global() global is: " << global << "\n\n";
}
