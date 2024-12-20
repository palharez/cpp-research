int main(int argc, char** argv) {
  return 0;
}

sizeof('c') == sizeof(char);

void func();
void func(void);

int* ip = nullptr;

// C++ standard version:
#include <cstdio>

// The C standar version:
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}

// Function overloading

void print(char const* myString) {
  printf("String %s\n", myString);
}

void print(int myInt) {
  printf("My int is %d\n", myInt);
}

int main() {
  print("Hello");
  print(15);
}

// Default function arguments
int doSomethingWithInts(int a = 1, int b = 4) {
  int sum = a + b;
  cout << sum << "\n";
}

int main() {
  doSomethingWithInts(); // 5
  doSomethingWithInts(20); // 24
  doSomethingWithInts(20, 5); // 25
}

// Inputs/Outputs

#include <iostream>

int main() {
  int myInt;
  std::cout << "Enter you favorite number:\n";
  std:cin >> myInt;
  std::cout << "Your favorite number is" << myInt << '\n';
  std::cerr << "Used for error messages";
}

// Strings

#include <string>

std::string myString = "Hello";
std::string myOtherString; = " World";

std::cout << myString + myOtherString; // Hello World
std::cout << myString + " You"; // Hello You

cout << myString.length() + myOtherString.size(); // 11

myString.append(" Dog") // Hello Dog

// References
std::string foo = "I am foo";
std::string& fooRef = foo; // Creates a reference to foo
fooRef += ". Hi!"; // Modifies foo through the reference
std::cout << fooRef; // "I am foo. Hi!"
std::cout << &fooRef << '\n'; // Prints foo address
const std::string& fooSecondRef = foo;
fooSecondRef += ". Hello!" // Error, const references cannot be modified

// Temporary reference
void someFunc(std::string& s) { ... } // Regular reference
void someFunc(std::string&& s) { ... } // Reference to temporary object

// Enums

enum ECarTypes {
  Sedan,
  SUV
};

ECarTypes getPreferredCarType() {
  return ECarTypes::SUV;
}

// Classes

#include <iostream>

class Dog {
  std::string name;
  int weight;

public:
  Dog();

  void setName(const std::string& dogsName);
  void setWeight(int dogsWeight);

  virtual void print() const;

  void bark() const {
    std::cout << name << " barks!\n";
  }

  virtual ~Dog();
}

Dog::Dog() {
  std::cout << "A dog has been constructed\n";
}

void Dog::setName(const std::string& dogsName) {
  name = dogsName;
}

void Dog:setWeigth(int dogsWeight) {
  weight = dogsWeight;
}

void Dog::print() const {
  std::cout << "Dog is" << name << "and weigths"
}

Dog::~Dog() {
  std::cout << "Goodbye" << name << "\n";
}

int main() {
  Dog myDog;
  myDog.setName("Domie");
  myDog.setWeight(5);
  myDog.print();
  return 0;
}

// Inheritance

class OwnedDog: public Dog {
  public:
    void setOwner(const std::string& dogsOwner);

    void print() const override;

  private:
    std::string owner;
};

void OwnedDog::setOwner(const std::string& dogsOwner) {
  owner = dogsOwner;
}

void OwnedDog::print() const {
  Dog::print();
  std::cout << "Dog is owned by " << owner << "\n";
}

// Templates

template<Class T>
class Box {
  public:
    void insert(const T&) {...}
}

Box<int> intBox;
intBox.insert(123);

Box<Box<int>> boxOfBox;
boxOfBox.insert(intBox);

// Containers

#include <vector>

std::string val;
std::vector<string> myVector;

myVector.push_back(val);
myVector.push_back(val);

for (int i = 0; i < myVector.size(); i++) {
  std::cout << myVector[i] << "\n";
}

// Iterator
vector<string>::iterator it;
for (it = myVector.begin(); it != myVector.end(); ++it) {
  std:: cout << *it << "\n"
}

// Set

#include <set>

std::set<int> ST;
ST.insert(30);
ST.insert(10);
ST.insert(20);
ST.insert(30); // Doesn't add this one

ST.erase(20); // Remove the element with value 20

std::set<int>::iterator it;
for (it = ST.begin(); it != ST.end(); it++) {
  std::cout << *it << "\n";
}

ST.clear();
std::cout << ST.size();

// Maps

#include <map>
std::map<char, int> mymap;

mymap.insert(pair<char,int>("A", 1));
mymap.insert(pair<char,int>("Z", 26));

std::map<char, int>::iterator it;
for (it = mymap.begin(); it != mymap.end(); ++it) {
  std::cout << it->first << "->" << it->second << "\n";
}

it = mymap.find("Z");
std::cout << it->secod;

// lambdas
std::vector<pair<int, int> > tester;
tester.push_back(make_pair(3, 6));
tester.push_back(make_pair(1, 9));
tester.push_back(make_pair(5, 0));


std::sort(tester.begin(), tester.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
  return lhs.second < rhs.second;
});

// Range
int arr[] = {1,10,3};
for (int elem: arr) {
  cout << elem << endl;
}

for (auto elem: arr) {
  cout << elem << endl;
}

// Logical

true && true
true || false
!true

true and true
true or false
not true