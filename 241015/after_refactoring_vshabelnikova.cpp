#include <cmath>
#include <iostream>

int main(int argc, char* argv[]){
	double x, s, s2;
	std::cout<<"Введите угол"<<endl;
	std::cin>>x;
	if  ( cos((double)2*x)!=1){
		s=(1+sin((double)2*x))/(1-cos((double)2*x));
		std::cout<<"F(x1)="<<s<<endl;
	}
	else if ( cos((double)2*x)==1)
		std::cout<<"Неверный ввод для F(x1) "<<endl;
	if  (tan((double)x)!=1){
		s2=(1+tan((double)x)*tan((double)x))/(1-tan((double)x)*tan((double)x));
		std::cout<<"F(X2)="<<s2<<endl;
	}
	else if (tan((double)x)==1)
		std::cout<<"Неверный ввод для F(x2) "<<endl;
system ("pause");
return 0;
}
