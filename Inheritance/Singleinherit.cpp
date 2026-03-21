#include <iostream>
#include <string>
using namespace std;

class Car{
private:
 string carName;
 string brandName;
 int rentPerDay;
 
 public:
 void setCarDetails(string,string,int);
 void getCarDetails();
};

 void Car::setCarDetails(string carName, string brandName, int rentPerDay) {
 this->carName =carName;
 this-> brandName =brandName;
 this->rentPerDay = rentPerDay;
 }

 void Car::getCarDetails() {
 cout << "Car Name: " << carName << endl;
 cout << "Brand: " << brandName<< endl;
 cout << "Rent per Day: " << rentPerDay << endl;
 }
 

class Customer: public Car{
 public:
 string customerName;
 string customerId;
 
 void setCustomerDetails(string,string);
 void getCustomerDetails();
};

void Customer::setCustomerDetails(string customerName,
string customerId){
 this->customerName=customerName;
 this->customerId=customerId;
}

void Customer::getCustomerDetails(){
 cout << "Customer Name: " << customerName<< endl;
 cout << "Customer Id: " << customerId << endl;
}

int main() {
    int n;
    Customer customer;
 customer.setCarDetails("Pagani Huayra","Pagani Automobili",50000);
 customer.getCarDetails();
 customer.setCustomerDetails("Kuldeep","EC2151");
 customer.getCustomerDetails();
    return 0;
}
