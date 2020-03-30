#include "Vehicle.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Vehicle::Vehicle() {
	_make = "COP3503";
	_model = "Rust Bucket";
	_year = 1900;
	_price = 0;
	_mileage = 0;
	/*this->make = _make;
	this->model = _model;
	this->year = _year;
	this->price = _price;
	this->mileage = _mileage;*/
}
Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
	_make = make;
	_model = model;
	_year = year;
	_price = price;
	_mileage = mileage;
}
float Vehicle::GetPrice() {
	return _price;
}
string Vehicle::GetYearMakeModel() {
	string yearMakeModel = to_string(_year) + " " + _make + " " + _model;
	return yearMakeModel;
}
void Vehicle::Display() {
	cout << to_string(_year) << " " << _make << " " << _model << " " << to_string(_price) << " " << to_string(_mileage) << endl;
}
