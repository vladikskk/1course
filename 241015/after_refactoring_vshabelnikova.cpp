#include <cmath>
#include <iostream>

int main(){
	double x, s, s2;

	std::cout << "Введите угол" << std::endl;
	std::cin >> x;

	double cos2x = cos(2 * x);
	if  (cos2x != 1){
		s = (1 + sin(2 * x)) / (1 - cos2x);
		std::cout << "F(x1)= " << s << std::endl;
	}
	else std::cout << "Неверный ввод для F(x1) " << std::endl;

	double tanx = tan(x)
	if  (tanx != 1){
		s2 = (1 + tanx * tanx) / (1 - x * tanx);
		std::cout << "F(X2)= " << s2 << std::endl;
	}
	else std::cout << "Неверный ввод для F(x2) " << std::endl;

	system ("pause");
	return 0;
}
