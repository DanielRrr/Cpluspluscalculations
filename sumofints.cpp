\\Простая задача на закрепления материала по работе с  вводом/выводом. 
\\Напишите программу, которая суммирует целые числа. На вход программе подаются целые числа в следующем формате: 
\\на первой строке идет целое число TT — количество тестов, далее следует TT строк, в каждой из которых через пробел идут два целых числа aiai и bibi. 
\\На выводе для каждой из TT строк нужно вывести сумму ai+biai+bi  в том порядке, в котором пары поступают на вход. 
\\Ничего, кроме этого, выводить не нужно.

using namespace std;
#include <iostream> 
int main()
{
    int n,a,b;
    cin >> n;
    while(n-- && std::cin >> a >> b)
    cout << a + b << endl;
    return 0;    
}
