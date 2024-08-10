#include <iostream>
#include <string>
#include <vector>
#include <map>

// Forward declaration of Dog class
class Dog;

// Class definition for House
class House {
private:
    std::string streetName;
    int houseNumber;
    std::string cityName;
    std::vector<Dog*> dogs; // Vector to store pointers to dogs as pets
public:
    House(const std::string& streetName, int houseNumber, const std::string& cityName)
        : streetName(streetName), houseNumber(houseNumber), cityName(cityName) {}

    // Method to add a dog to the house
    void addDog(Dog* dog) {
        dogs.push_back(dog);
    }

    // Method to remove a dog from the house
    void removeDog(Dog* dog) {
        for (auto it = dogs.begin(); it != dogs.end(); ++it) {
            if (*it == dog) {
                dogs.erase(it);
                break;
            }
        }
    }

    // Method to count the number of dogs in the house
    int countDogs() const {
        return dogs.size();
    }

    // Getter method for street name
    std::string getStreetName() const {
        return streetName;
    }
};

// Class definition for Dog
class Dog {
private:
    std::string name;
    int code;
    House* home; // Pointer to the house where the dog lives
public:
    Dog(const std::string& name, int code, House* home) : name(name), code(code), home(home) {}

    // Method to make noise
    void makeNoise() const {
        std::cout << name << " is barking." << std::endl;
    }

    // Getter method for home
    House* getHome() const {
        return home;
    }
};

// Function to count the number of dogs located in the same street names
std::map<std::string, int> countDogsInStreet(const std::vector<House>& houses) {
    std::map<std::string, int> dogCountMap;
    for (const auto& house : houses) {
        std::string streetName = house.getStreetName();
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

    std::cout << "Number of dogs in house1: " << house1.countDogs() << std::endl;
    std::cout << "Number of dogs in house2: " << house2.countDogs() << std::endl;

    std::map<std::string, int> dogCountByStreet = countDogsInStreet({house1, house2});
    std::cout << "Number of dogs in each street:" << std::endl;
    for (const auto& pair : dogCountByStreet) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
