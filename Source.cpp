#include <iostream>
#include <string>
#include <Windows.h>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;
    double weight;

public:
    // Конструктор
    Animal(const std::string& n, const std::string& s, int a, double w)
        : name(n), species(s), age(a), weight(w) {}

    // Методы
    void eat() const {
        std::cout << name << " кушает." << std::endl;
    }

    void sleep() const {
        std::cout << name << " спит." << std::endl;
    }

    void makeSound() const {
        std::cout << name << " издает звук." << std::endl;
    }

    void printInfo() const {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Вид: " << species << std::endl;
        std::cout << "Возраст: " << age << std::endl;
        std::cout << "Вес: " << weight << " кг" << std::endl;
    }
};

// ===== Dog =====
class Dog : public Animal {
private:
    std::string breed;
    bool isTrained;
    int energyLevel;

public:
    Dog(const std::string& n, int a, double w,
        const std::string& b, bool t, int e)
        : Animal(n, "Собака", a, w),
          breed(b), isTrained(t), energyLevel(e) {}

    void bark() const {
        std::cout << name << " лает." << std::endl;
    }

    void play() const {
        std::cout << name << " играет." << std::endl;
    }

    void guard() const {
        std::cout << name << " охраняет дом." << std::endl;
    }
};

// ===== Cat =====
class Cat : public Animal {
private:
    std::string color;
    int lives;
    bool isLazy;

public:
    Cat(const std::string& n, int a, double w,
        const std::string& c, int l, bool lazy)
        : Animal(n, "Кошка", a, w),
          color(c), lives(l), isLazy(lazy) {}

    void meow() const {
        std::cout << name << " мяукает." << std::endl;
    }

    void purr() const {
        std::cout << name << " мурлычет." << std::endl;
    }

    void jump() const {
        std::cout << name << " прыгает." << std::endl;
    }
};

// ===== Bird =====
class Bird : public Animal {
private:
    double wingSpan;
    bool canFly;
    std::string habitat;

public:
    Bird(const std::string& n, int a, double w,
         double ws, bool fly, const std::string& h)
        : Animal(n, "Птица", a, w),
          wingSpan(ws), canFly(fly), habitat(h) {}

    void fly() const {
        if (canFly)
            std::cout << name << " летает." << std::endl;
        else
            std::cout << name << " не умеет летать." << std::endl;
    }

    void sing() const {
        std::cout << name << " поет." << std::endl;
    }

    void buildNest() const {
        std::cout << name << " строит гнездо." << std::endl;
    }
};

// ===== main =====
int main() {
    Dog dog("Бобик", 5, 10.0, "Овчарка", true, 8);
    Cat cat("Мурка", 3, 4.5, "Белый", 9, true);
    Bird bird("Кеша", 2, 1.2, 0.4, true, "Лес");

    dog.printInfo();
    dog.bark();

    std::cout << std::endl;

    cat.printInfo();
    cat.meow();

    std::cout << std::endl;

    bird.printInfo();
    bird.fly();

    return 0;
}
