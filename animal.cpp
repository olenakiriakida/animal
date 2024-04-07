#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    double weight;
    string continent;

public:
    Animal(const string& name, double weight, const string& continent)
        : name(name), weight(weight), continent(continent) {}

    virtual void Eat() = 0;
    virtual void Sleep() = 0;
    virtual void Move() = 0;
    virtual void MakeSound() = 0;
};

class ISwimable {
public:
    virtual void Swim() = 0;
};

class IFlyable {
public:
    virtual void Fly() = 0;
};

class Cat : public Animal, public ISwimable {
public:
    Cat(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override { cout << "Cat is eating\n"; }
    void Sleep() override { cout << "Cat is sleeping\n"; }
    void Move() override { cout << "Cat is moving\n"; }
    void MakeSound() override { cout << "Meow!\n"; }
    void Swim() override { cout << "Cat is swimming\n"; }
};

class Dog : public Animal, public ISwimable {
public:
    Dog(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override { cout << "Dog is eating\n"; }
    void Sleep() override { cout << "Dog is sleeping\n"; }
    void Move() override { cout << "Dog is moving\n"; }
    void MakeSound() override { cout << "Woof!\n"; }
    void Swim() override { cout << "Dog is swimming\n"; }
};

class Parrot : public Animal, public IFlyable {
public:
    Parrot(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override { cout << "Parrot is eating\n"; }
    void Sleep() override { cout << "Parrot is sleeping\n"; }
    void Move() override { cout << "Parrot is moving\n"; }
    void MakeSound() override { cout << "Squawk!\n"; }
    void Fly() override { cout << "Parrot is flying\n"; }
};

class Duck : public Animal, public ISwimable, public IFlyable {
public:
    Duck(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override { cout << "Duck is eating\n"; }
    void Sleep() override { cout << "Duck is sleeping\n"; }
    void Move() override { cout << "Duck is moving\n"; }
    void MakeSound() override { cout << "Quack!\n"; }
    void Swim() override { cout << "Duck is swimming\n"; }
    void Fly() override { cout << "Duck is flying\n"; }
};

int main() {
    Cat cat("Whiskers", 5.5, "Europe");
    Dog dog("Buddy", 10.2, "Europe");
    Parrot parrot("Polly", 1.2, "Africa");
    Duck duck("Donald", 2.8, "Australia");

    cout << "Cat:\n";
    cat.Eat();
    cat.Sleep();
    cat.Move();
    cat.MakeSound();
    cat.Swim();

    std::cout << "\nDog:\n";
    dog.Eat();
    dog.Sleep();
    dog.Move();
    dog.MakeSound();
    dog.Swim();

    cout << "\nParrot:\n";
    parrot.Eat();
    parrot.Sleep();
    parrot.Move();
    parrot.MakeSound();
    parrot.Fly();

    cout << "\nDuck:\n";
    duck.Eat();
    duck.Sleep();
    duck.Move();
    duck.MakeSound();
    duck.Swim();
    duck.Fly();

    return 0;
}