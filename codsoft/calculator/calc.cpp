#include "funcfile.hpp"
void add() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout <<"your Output is : "<< a + b << endl;
}

void sub() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout <<"your Output is : "<< a - b << endl;
}

void mult() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout <<"your Output is : "<<"your Output is : "<< a * b << endl;
}

void divide() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	if(b != 0) {
		cout << "your Output is : "<<a / b << endl;
	}
}
void choice() {
	cout << "CALCULATE IT:\n";
	cout << "a for Addition of two number\n";
	cout << "s for Subtraction of two number\n";
	cout << "m for Multiplication of two number\n";
	cout << "d for Division of two number\n";
	cout << "e for Exit\n";
}

void error() {
	cout << "Invalid Option";
}

int main(int argc, char** argv) {
	unsigned char x;
	bool flag=true;
	while(flag) {
		cout << "type (o) For choice \ntype (e) To exit \n Enter Your choice: ";
		cin >> x;
		switch(x) {
			case 'a':
				add();
			break;
			case 's':
				sub();
			break;
			case 'm':
				mult();
			break;
			case 'd':
				divide();
			break;
			case 'o':
				choice();
			break;
			case 'e':
				flag=false;
			break;
			default:
				error();
			break;
		}
	}
	return 0;
}
