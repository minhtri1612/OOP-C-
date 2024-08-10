#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Club {
private:
    string name;
    string building;
    string phoneNumber;
public:
    Club(string name, string building, string phoneNumber) {
        this->name = name;
        this->building = building;
        this->phoneNumber = phoneNumber;
    }
    void describe() {
        cout << "Club name: " << name << " Building: " << building << " Phone number: " << phoneNumber << endl;
    }
};

class Campus {
private:
    string name;
    string address;
    double distance;
    Club* club;
public:
    Campus(string name, string address, double distance, Club* club) {
        this->name = name;
        this->address = address;
        this->distance = distance;
        this->club = club;
    }
    void describe() {
        cout << "Campus name: " << name << " Address: " << address << " Distance: " << distance << " miles" << endl;
        club->describe();
    }
};

int main() {
    Club club1("Chess Club", "Student Center", "+1234567890");
    Club club2("Drama Club", "Performing Arts Building", "+1987654321");

    // Create campus objects
    Campus campus1("Main Campus", "123 University Ave", 5.2, &club1);
    Campus campus2("Downtown Campus", "456 Downtown Blvd", 1.5, &club2);

    campus1.describe();
    campus2.describe();
    return 0;
}
