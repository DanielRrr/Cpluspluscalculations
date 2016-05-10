#include <iostream>
using namespace std;
int radiation(int health);
int main()
{
	int health;
	cout << "Enter your health as the number from 0 to 100.\n\n";
	cin >> health;
	health = radiation(health);
	cout << "After radiation your health became more weaker. Your health is " << health << "\n\n";
	health = radiation(health);
	cout << "After radiation your health became more weaker. Your health is " << health << "\n\n";
	health = radiation(health);
	cout << "After radiation your health became more weaker. Your health is " << health << "\n\n";
	return 0;
}
inline int radiation(int health)
{
	return (health / 2);
}
