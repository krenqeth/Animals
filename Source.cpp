#include <iostream>
#include <string>
#include <Windows.h>

class Animal {
private:
    std::string name;
    std::string species;
    int age;
    double weight;

public:
    
    Animal(const std::string& n, const std::string& s, int a, double w)
        : name(n), species(s), age(a), weight(w) {
    }

   
    std::string getName() const { return name; }
    std::string getSpecies() const { return species; }
    int getAge() const { return age; }
    double getWeight() const { return weight; }


    void eat() const {
        std::cout << name << " Кушает." << std::endl;
    }

    void sleep() const {
        std::cout << name << " Спит." << std::endl;
    }

    void makeSound() const {
        std::cout << name << " Издает звук." << std::endl;
    }

  
    void printInfo() const {
        std::cout << "Имя: " << getName() << std::endl;
        std::cout << "Вид: " << getSpecies() << std::endl;
        std::cout << "Возраст: " << getAge() << std::endl;
        std::cout << "Вес: " << getWeight() << " кг" << std::endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Animal a("Шарик", "Собака", 2, 2.5);

    a.printInfo();
    a.eat();
    a.sleep();
    a.makeSound();

    return 0;
}
