#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;

class FlightBooking {
public:
    void set(int id, int capacity, int reserved);
    void get();
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    double percentage(int capacity, int reserved);
    void add(int tiket);
    void cancel(int tiket);

private:
    int id = 1;
    int capacity;
    int reserved;
    string res;
};
void FlightBooking::printStatus()
{
    cout << res;
}
FlightBooking::FlightBooking(int inputId, int inputCapacity, int inputReserved)
{
    set(inputId, inputCapacity, inputReserved);
    res += "Flight " + to_string(this->id) + " : " + to_string(this->reserved) + "/" + to_string(this->capacity)+
        " " + "(" + to_string((int)percentage(this->capacity, this->reserved)) + "%) seats reserved\n";
}

void FlightBooking::set(int inputId, int inputCapacity, int inputReserved) {
    id = inputId;
    capacity = inputCapacity;
    reserved = inputReserved;
}

void FlightBooking::get() {
    cout << this->id << "/" << this->capacity << "/" << this->reserved << '\n';
}

double FlightBooking::percentage(int capacity, int reserved) {
    return reserved * 100 / capacity;
}


void FlightBooking::add(int ticket) {
    if (reserved + ticket <= capacity) {
       reserved += ticket;
       res += "Flight " + to_string(this->id) + " : " + to_string(this->reserved) + "/" + to_string(this->capacity) +
           " " + "(" + to_string((int)percentage(this->capacity, this->reserved)) + "%) seats reserved\n";
}
    else res+= "Cannot perform this operation\n";
}
void FlightBooking::cancel(int ticket) {
    if (reserved > ticket)   
    {
        reserved -= ticket;
        res += "Flight " + to_string(this->id) + " : " + to_string(this->reserved) + "/" + to_string(this->capacity) +
            " " + "(" + to_string((int)percentage(this->capacity, this->reserved)) + "%) seats reserved\n";
    }
    else res += "Cannot perform this operation\n";
}
int main() {
    int reserved = 0,
        capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;

    FlightBooking booking(1, capacity, reserved);
    string command = "";
    getline(cin, command);
    while (command != "quit") {
        command.clear();
        getline(cin, command);
        if (command.find("add") != string::npos) {
            command.erase(0, 3);
            int i = std::stoi(command);
            booking.add(i);
        }
        else if (command.find("cancel") != string::npos) {
            command.erase(0, 7);
            int i = std::stoi(command);
            booking.cancel(i);
        }
    }
    booking.printStatus();
    return 0;
}
