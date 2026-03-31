#include <iostream>
using namespace std;
class car
{
protected:
 string car_name;
 string brand;
 int rent_per_day;
public:
 void getcardata()
 {
 cout << "Enter Car Name: ";
 cin >> car_name;
 cout << "Enter Brand: ";
 cin >> brand;
 cout << "Enter Rent Per Day: ";
 cin >> rent_per_day;
 }
 void putcardata()
 {
 cout << "\nCar Name : " << car_name << endl;
 cout << "Brand : " << brand << endl;
 cout << "Rent Per Day : " << rent_per_day << endl;
 }
};
class booking : public car
{
protected:
 int days;
public:
 void getrentaldays()
 {
 cout << "Enter Rental Days: ";
 cin >> days;
 }
};
class bill : public booking
{
public:
 void calculatebill()
 {
 putcardata();
 cout << "Rental Days : " << days << endl;
 cout << "-----------------------------" << endl;
 cout << "Total Amount : " << days * rent_per_day << endl;
 }
};
int main()
{
 bill b;
 b.getcardata();
 b.getrentaldays();
 cout << "\n========= BILL RECEIPT =========\n";
 b.calculatebill();
 return 0;
}
