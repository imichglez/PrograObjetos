#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
    string color;
    int model;
    double velocity;

    public:
    Car() {
        this->color = "undefined";
        this->model = 0;
        this->velocity = 0;
    }
     Car(string color, int model, double velocity) {
        this->color = color;
        this->model = model;
        this->velocity = velocity;
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
    string getColor() {
        return this->color;
    }
    int getModel() {
        return this->model;
    }
    double getVelocity() {
        return this->velocity;
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
        return msg;
    }
    void print() {
        cout << this->toString();
    }
};

int main() {
    Car car1, car2("red", 2015);
    car1.setColor("green");
    car1.setModel(2011);
    car1.acelerate();
    car2.setVelocity(10);
    car1.print();
    car2.print();
    return 0;
}