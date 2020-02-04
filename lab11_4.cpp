#include<iostream>
#include<string>

using namespace std;

//Declare prototype of function template mySwap() here
template<typename A>
A mySwap(A &,A &);



int main(){
	
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	
	string a = "ABC", b = "DEF";
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	
	char p = 'P', q = 'Q';
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}


//Write definition of function template mySwap() here
template<typename B>
B mySwap(B &x,B &y){
	B i=x;
    x=y;
	y=i;
	return x,y;
}






