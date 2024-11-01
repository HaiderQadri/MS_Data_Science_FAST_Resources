# include<iostream>
using namespace std;

class CarInventory {
    // private data members
    private:
    string make;
    string model;
    int serial_no;
    static int tot_no_cars;
    static int next_serial_no;

    // public functions
    public:
    // constructor
    CarInventory(const string &mk, const string &mod) {
        make = mk;
        model = mod;
        serial_no = next_serial_no++;
        tot_no_cars++;
        cout << "Car added: " << make << " " << model << " " << "with serial #" << serial_no << endl;
    }

    //copy constructor
    CarInventory(CarInventory &other) {
        make = other.make;
        model = other.model;
        serial_no = other.serial_no;
        tot_no_cars++;
        cout << "Copy of car created: " << make << " " << model << " with serial #" << serial_no << endl; 
    }

    // destructor
    ~CarInventory() {
        tot_no_cars--;
        cout << "Car removed: " << make << " " << model << "with serial #" << serial_no << endl;
    }

    // static function to display total number of cars
    static void displayCars() {
        cout << "Total number of cars in inventory: " << tot_no_cars << endl;
    }
};

int CarInventory :: tot_no_cars = 0;
int CarInventory :: next_serial_no = 1;

// main function
int main() {

    // creating objets and initializing with make and model
    CarInventory car1("Toyota", "Carmy");
    CarInventory car2("Ford", "Mustang");
    CarInventory car3("Toyota", "Corolla");

    CarInventory :: displayCars();

    CarInventory car4 = car2;

    CarInventory :: displayCars();

    return 0;
}