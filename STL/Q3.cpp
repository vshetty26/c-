// 3. Maps

#include <iostream>
#include <map>

int main() {
    // Declare a map of string and integers
    std::map<std::string, int> ageMap;

    // Insert key-value pairs
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap["Charlie"] = 35;

    // Iterate through the map using an iterator
    std::cout << "Age map: " << std::endl;
    for (std::map<std::string, int>::iterator it = ageMap.begin(); it != ageMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Access a specific key
    std::cout << "Bob's age: " << ageMap["Bob"] << std::endl;

    return 0;
}
