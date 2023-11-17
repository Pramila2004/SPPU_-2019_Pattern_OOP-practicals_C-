// Implement a class Complex which represents the Complex Number data type. Implement the 
// following
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Numbers.

#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;
class Complex{

int x,y;
public:
	Complex(){
	
		x=0;
		y=0;
	
	}
	
	Complex operator +(Complex);
	Complex operator *(Complex);
	friend istream &operator >>(istream &in,Complex &);
	friend ostream &operator <<(ostream &out,Complex &);
};

Complex Complex :: operator +(Complex c1){
	Complex temp;
	temp.x=x+c1.x;
	temp.y=y+c1.y;
	
	return temp;

}

Complex Complex :: operator *(Complex c1){
	Complex temp;
	temp.x=(x*c1.x)-(y*c1.y);
	temp.y=(y*c1.x)+(x*c1.y);
	
	return temp;

}


istream &operator >>(istream &in,Complex &obj){
		in>>obj.x>>obj.y;
		return in;
	
	}
ostream &operator <<(ostream &out,Complex &obj){
		out<<obj.x<<" + "<<obj.y<<" i "<<endl;
		return out;
	}



int main(){

	Complex c1,c2,c3,c4;
	system("CLS");
	
	cout<<"Printing Default Constructor of c1 and c2 : "<<endl<<endl;
	cout<<c1;
	cout<<c2;
	
	cout<<"\nEnter Real and Imaginary value for First Complex Number: ";
	cin>>c1;
	cout<<"Enter Real and Imaginary value for First Complex Number: ";
	cin>>c2;
	
	
	c3=c1+c2;
	c4=c1*c2;
	
	cout<<"\n\nFirst Complex Number : ";
	cout<<c1;
	cout<<"\nSecond Complex Number : ";
	cout<<c2;
	cout<<"\nAddition : ";
	cout<<c3;
	cout<<"\nMultiplication : ";
	cout<<c4;




	return 0;

}
