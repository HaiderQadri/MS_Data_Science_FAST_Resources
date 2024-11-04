# include<iostream>
using namespace std;

class Device {

    private:
        string name;
        bool status;
        int power;

    public:

    Device(string name, bool status) {
        this -> name = name;
        this -> status = status;
    }

    void turnON() {
        status = true;
    }

    void turnOFF() {
        status = false;
    }
    
    string getName() const {
        return name;
    }

    int getPower() const {
        return power;
    }

    Device operator+ (const Device &other) const {
        Device combinedPower = this->power + other.power;
        return combinedPower;
    }

    bool operator> (const Device &other) const {
        return this -> getPower() > other.getPower();
    }

    void display() {
        cout << "Name: " << name << ", Power: " << power << endl;
    }
};

class SmartHome {
    private:
        Device* devices[10];
        int deviceCount;

    public:
    void addDevice(Device &device) {
        if (deviceCount < 10) {
            devices[deviceCount++] = &device;
        } else {
            cout << "Cannot add more devices" << endl;
        }
    }

    int totolPowerUsage() const {
        int totalPower = 0;
        for (int i = 0; i < 10; i++) {
            totalPower += devices[i] -> getPower();
        }
        return totalPower;
    }

    void displayAll() {
        cout << "Smart House Devices: " << endl;
        for (int i = 0; i < 10; i++) {
            devices[i]->getName();
        }
        cout << "\nTotal power usage: " << totolPowerUsage();
    }
};

// main function 

    int main() {
    // Create devices
    Device light("Living Room Light", 60);
    Device heater("Heater", 1500);
    Device fan("Fan", 75);

    // Turn devices on or off
    light.turnON();
    heater.turnON();
    fan.turnOFF();

    // Create smart home and add devices
    SmartHome home;
    home.addDevice(light);
    home.addDevice(heater);
    home.addDevice(fan);

    // Display device status and total power usage
    home.displayAll();

    // Comparing devices
    if (heater > light) {
        std::cout << heater.getName() << " consumes more power than " << light.getName() << ".\n";
    }

    // Combining power of two devices
    Device combinedDevice = light + fan;
    std::cout << "Combined Device (Light + Fan) - Power: " << combinedDevice.getPower() << "W\n";

    return 0;
}
