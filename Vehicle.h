#define _VEHICLE_
#include <string>
class Vehicle {
	private:
		std::string _make;
		std::string _model;
		int _year;
		float _price;
		int _mileage;
	public:
		void Display();
		std::string GetYearMakeModel();
		float GetPrice();
		Vehicle();
		Vehicle(std::string, std::string, int, float, int);
};
