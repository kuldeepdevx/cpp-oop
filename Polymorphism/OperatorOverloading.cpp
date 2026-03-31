#include <iostream>
using namespace std;
class Complex{
float real;
float imag;
public:
Complex(int r=0,int i=0){
real=r;
imag=i;
}
Complex operator+(Complex&);
Complex operator-(Complex&);
Complex operator*(Complex&);
Complex operator/(Complex&);
friend istream& operator>>(istream&,Complex&);
friend ostream& operator<<(ostream&,Complex&);
};
Complex Complex::operator+(Complex&c){
return Complex(real+c.real,imag+c.imag);
}
Complex Complex::operator-(Complex&c){
return Complex(real-c.real,imag-c.imag);
}
Complex Complex::operator*(Complex&c){
return Complex((real*c.real-imag*c.imag),(real*c.imag+c.real*imag));
}
Complex Complex::operator/(Complex& c) {
float denominator = c.real * c.real + c.imag * c.imag;
return Complex(
(real * c.real + imag * c.imag) / denominator,
(imag * c.real - real * c.imag) / denominator
);
}
istream& operator>>(istream& in,Complex& c){
cout<<"Enter real number:";
in>>c.real;
cout<<"Enter imag number:";
in>>c.imag;
return cin;
}
ostream& operator<<(ostream& out,Complex& c){
if(c.imag>=0)
cout<<c.real<<"+"<<c.imag<<"i"<<endl;
else
cout<<c.real<<"-"<<c.imag<<"i"<<endl; 
return cout;
}
int main(){
Complex c1,c2,c3;
cin>>c1;
cin>>c2;
c3=c1+c2;
cout<<"Addition of c1 and c2: "<<c3;
c3=c1-c2;
cout<<"Subtraction of c1 and c2: "<<c3;
c3=c1*c2;
cout<<"Multiplication of c1 and c2: "<<c3;
c3=c1/c2;
cout<<"Division of c1 and c2: "<<c3;
return 0;
}
