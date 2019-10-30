
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <tuple>
#include <cmath>


std::string Millera_Rabina_test(int n, int  a) {
	int k, m;
	int chet_n = n - 1;
	//ищем к, m исходя, что n-1= m*2^k
	k = 0;
	while (chet_n % a == 0) {
		chet_n /= a;
		k++;
	}
	m = (n - 1) / pow(a, k);
	std::cout << k << "  " << m;
	return "ok";

}

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "");


	int n, a;
	std::string result;
	std::cout << std::endl << "Тест Миллера-Рабина";
	//Бесконечный ввод
	while (true) {
		std::cout << std::endl << "Введите нечётное целое число n>4  = ";
		std::cin >> n;
		std::cout << std::endl << "Введите основание(к примеру 2)  = ";
		std::cin >> a;
		result = Millera_Rabina_test(n, a);
		std::cout << result;
	}
	system("pause");

}

