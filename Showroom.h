#define _SHOWROOM_
#include <string>
class Showroom {
	private:
		std::string _name;
		unsigned int _capacity;
	public:
		Showroom(std::string, unsigned int);
		vector<Vehicle> GetVehicleList();
		void AddVehicle(Vehicle);
		void ShowInventory();
		float GetInventoryValue();
};
