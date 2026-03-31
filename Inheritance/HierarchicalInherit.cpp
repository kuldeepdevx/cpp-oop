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
 cout << "Car Name: " << car_name << endl;
 cout << "Brand: " << brand << endl;
 cout << "Rent per day: " << rent_per_day << endl;
 }
};
class booking : public car
{
protected:
 int days;
public:
 void getbookingdata()
 {
 cout << "Enter number of days: ";
 cin >> days;
 }
 void showbookingdata()
 {
 putcardata();
 cout << "Number of days: " << days << endl;
 cout << "Total Rent: " << days * rent_per_day << endl;
 }
};
class driver : public car
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
 void showdriverdata()
 {
 putcardata();
 cout << "Driver Name: " << driver_name << endl;
 cout << "License Number: " << license_no << endl;
 }
};
int main()
{
 booking b;
 driver d;
 b.getcardata();
 b.getbookingdata();
 d.getcardata();
 d.getdriverdata();
 cout << "\nBooking Details\n";
 b.showbookingdata();
 cout << "\nDriver Details\n";
 d.showdriverdata();
 return 0;
}
