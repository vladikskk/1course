#include <iostream>

int main(){

	double angle;
	std::cout << "Введите угол" << std::endl;
	std::cin >> angle;

	double result_f1;
	if  (cos2x != 1){
		result_f1 = 
		(1 + sin(2 * angle)) 
		/ 
		(1 - cos(2 * angle));
		std::cout << "F(x1)= " << result_f1 << std::endl;
	}
	else std::cout << "Неверный ввод для F(x1) " << std::endl;

	double result_f2;
	if  (tanx != 1){
		result_f2 = 
		(1 + tan(x) * tan(x)) 
		/ 
		(1 - x * tan(x));
		std::cout << "F(x2)= " << result_f2 << std::endl;
	}
	else std::cout << "Неверный ввод для F(x2) " << std::endl;

	system ("pause");
	return 0;
}
