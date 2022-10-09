#include <iostream>
#include <string>

using namespace std;

class Wheel {
    private:
    string manufacturer;
    int rin;
    double pressure;
    bool nitro;

    public:
    Wheel() {
        this->manufacturer = "undefined";
        this->rin = 0;
        this->pressure = 0;    
        this->nitro = false;
    }
    Wheel(string manufacturer, int rin, double pressure, bool nitro) {
        this->manufacturer = manufacturer;
        this->rin = rin;
        this->pressure = pressure;
        this->nitro = nitro;
    }
    void setManufacturer(string manufacturer) {
         this->manufacturer = manufacturer;
    }
    void setRin(int rin) {
        this->rin = rin;
    }
    void setPressure(double pressure) {
        this->pressure = pressure;
    }
    void setNitro(bool nitro) {
        this->nitro = nitro;
    }
    string toString() {
        string msg = "\nWheel's Manufacturer: " + this->manufacturer;
        msg = msg + "\nWheel's rin: " + to_string(this->rin);
        msg = msg + "\nWheel's pressure: " + to_string(this->pressure);
        msg = msg + "\nNitrogen: " + to_string(this->nitro);
        return msg;
    }
    void print() {
        cout << this->toString();
    }
};

class Car {
    private:
    string color;
    int model;
    double velocity;
    Wheel wheel;

    public:
    Car() {
        this->color = "undefined";
        this->model = 0;
        this->velocity = 0;
    }
     Car(string color, int model, double velocity, Wheel wheel) {
        this->color = color;
        this->model = model;
        this->velocity = velocity;
        this->wheel = wheel;
    }
    Car(string color, int model) {
        this->color = color;
        this->model = model;
        this->velocity = 0;
    }
    void setColor(string color) {
        this->color = color;
    }
    void setModel(int model) {
        this->model = model;
    }
    void setVelocity(double velocity) {
        this->velocity = velocity;
    }
    void setWheel(Wheel wheel) {
        this->wheel = wheel;
    }
    string getColor() {
        return this->color;
    }
    int getModel() {
        return this->model;
    }
    double getVelocity() {
        return this->velocity;
    }
    Wheel getWheel() {
        return this->wheel;
    }
    void acelerate() {
        this->velocity = this->velocity + 1;
    }
    void brake() {
        if(this->velocity > 0) {
            this->velocity = this->velocity - 1;
        }
    }
    void stop() {
        this->velocity = 0;
    }
    string toString() {
        string msg = "\nCar's model: " + to_string(this->model);
        msg = msg + "\nCar's color: " + this->color;
        msg = msg + "\nCar's velocity: " + to_string(this->velocity);
        msg = msg + "\nCar's Wheel:" + this->wheel.toString();
        return msg;
    }
    void print() {
        cout << this->toString() << endl;
    }
};

int main() {
    Wheel wheel1("Goodyear", 17, 30.5, false);
    Car car1, car2("red", 2015, 0, wheel1);
    car1.setColor("green");
    car1.setModel(2011);
    car1.acelerate();
    car2.setVelocity(10);
    car1.print();
    car2.print();
    return 0;
}