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
 cout << "Enter car name: ";
 cin >> car_name;
 cout << "Enter brand: ";
 cin >> brand;
 cout << "Enter rent per day: ";
 cin >> rent_per_day;
 }
 void putcardata()
 {
 cout << "Car: " << car_name << " (" << brand << ")" << endl;
 cout << "Rent per day: " << rent_per_day << endl;
 }
};
class driver
{
protected:
 string driver_name;
 int license_no;
public:
 void getdriverdata()
 {
 cout << "Enter driver name: ";
 cin >> driver_name;
 cout << "Enter license number: ";
 cin >> license_no;
 }
};
class rental : public car, public driver
{
protected:
 int days;
public:
 void getrentaldata()
 {
 cout << "Enter rental days: ";
 cin >> days;
 }
 void showrentaldata()
 {
 cout << "\n===== Rental Summary =====\n";
 putcardata();
 cout << "Driver: " << driver_name << endl;
 cout << "License No: " << license_no << endl;
 cout << "Days: " << days << endl;
 cout << "Total Bill: " << days * rent_per_day << endl;
 }
};
int main()
{
 rental r;
 r.getcardata();
 r.getdriverdata();
 r.getrentaldata();
 r.showrentaldata();
 return 0;
}
