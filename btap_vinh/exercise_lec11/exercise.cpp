#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Dog;

class House {
private:
    string streetName;
    int houseNumber;
    string cityName;
    vector<Dog*> dogs; 
public:
    House(const string& streetName, int houseNumber, const string& cityName)
        : streetName(streetName), houseNumber(houseNumber), cityName(cityName) {}

    void addDog(Dog* dog) {
        dogs.push_back(dog);
    }
    void removeDog(Dog* dog) {
        for (auto it = dogs.begin(); it != dogs.end(); ++it) {
            if (*it == dog) {
                dogs.erase(it);
                break;
            }
        }
    }

    int countDogs() const {
        return dogs.size();
    }

    string getStreetName() const {
        return streetName;
    }
};

// Class definition for Dog
class Dog {
private:
    string name;
    int code;
    House* home; 
public:
    Dog(const string& name, int code, House* home) : name(name), code(code), home(home) {}

    void makeNoise() const {
        cout << name << " is barking." << endl;
    }

    House* getHome() const {
        return home;
    }
};

map<string, int> countDogsInStreet(const vector<House>& houses) {
    map<string, int> dogCountMap;
    for (const auto& house : houses) {
        string streetName = house.getStreetName();
        dogCountMap[streetName] += house.countDogs();
    }
    return dogCountMap;
}

int main() {
    // Example usage
    House house1("Main St", 123, "City A");
    House house2("Elm St", 456, "City B");

    Dog dog1("Buddy", 101, &house1);
    Dog dog2("Max", 102, &house1);
    Dog dog3("Bella", 103, &house2);

    house1.addDog(&dog1);
    house1.addDog(&dog2);
    house2.addDog(&dog3);

    cout << "Number of dogs in house1: " << house1.countDogs() << endl;
    cout << "Number of dogs in house2: " << house2.countDogs() << endl;

    map<string, int> dogCountByStreet = countDogsInStreet({house1, house2});
    cout << "Number of dogs in each street:" << endl;
    for (const auto& pair : dogCountByStreet) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
