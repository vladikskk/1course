#include <iostream>

int main(){
	double angle;

	std::cout << "Введите угол" << std::endl;
	std::cin >> angle;

	double result_f1, cos2x = cos(2 * angle);
	if  (cos2x != 1){
		result_f1 = 
		(1 + sin(2 * angle)) 
		/ 
		(1 - cos2x);
		std::cout << "F(x1)= " << result_f1 << std::endl;
	}
	else std::cout << "Неверный ввод для F(x1) " << std::endl;

	double result_f2, tanx = tan(x)
	if  (tanx != 1){
		result_f2 = 
		(1 + tanx * tanx) 
		/ 
		(1 - x * tanx);
		std::cout << "F(X2)= " << result_f2 << std::endl;
	}
	else std::cout << "Неверный ввод для F(x2) " << std::endl;

	system ("pause");
	return 0;
}
