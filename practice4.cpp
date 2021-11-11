#include <iostream>
#include <cstring>
#include <string>

void print_info();
void full_name();
void string_full_name();
void print_candy();
void print_pizza();
void point_pizza();
void array_candy();

struct CandyBar{
    char name[20];
    double weight;
    int kaluli;
};

struct Pizza{
  std::string name;
  int inch;
  double weight;
};


int main(int argc, char const *argv[]) {
  array_candy();
  return 0;
}

void array_candy(){
  CandyBar*  bar = new CandyBar[3];
  strcpy(bar[0].name, "Mocha");
  bar[0].weight = 2.3;
  bar[0].kaluli = 3;
  bar[1] = bar[0];
  bar[2] = bar[1];
  std::cout << "CandyBar-bar[0] : name = " << bar[0].name << ", weight = " << bar[0].weight << ", kaluli = " << bar[0].kaluli<< '\n';
  std::cout << "CandyBar-bar[1] : name = " << bar[1].name << ", weight = " << bar[1].weight << ", kaluli = " << bar[1].kaluli<< '\n';
  std::cout << "CandyBar-bar[2] : name = " << bar[2].name << ", weight = " << bar[2].weight << ", kaluli = " << bar[2].kaluli<< '\n';
}

void point_pizza(){
  Pizza* pizza = new Pizza;

  std::cout << "Enter Pizaa's name: ";
  std::cin >> pizza->name;
  std::cin.get();
  std::cout << "Enter Pizaa's inch: ";
  std::cin >> pizza->inch;
  std::cin.get();
  std::cout << "Enter Pizaa's weight: ";
  std::cin >> pizza->weight;
  std::cin.get();

  std::cout << "Pizza's Info  name = " << pizza->name << ", inch = " << pizza->inch << ", weight = " << pizza->weight << '\n';

}

void print_pizza(){
  Pizza pizza;
  std::cout << "Enter Pizaa's name: ";
  std::cin >> pizza.name;
  std::cin.get();
  std::cout << "Enter Pizaa's inch: ";
  std::cin >> pizza.inch;
  std::cin.get();
  std::cout << "Enter Pizaa's weight: ";
  std::cin >> pizza.weight;
  std::cin.get();

  std::cout << "Pizza's Info  name = " << pizza.name << ", inch = " << pizza.inch << ", weight = " << pizza.weight << '\n';
}

void print_candy(){
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  std::cout << "CandyBar-snack : name = " << snack.name << ", weight = " << snack.weight << ", kaluli = " << snack.kaluli<< '\n';
}

void string_full_name(){
  using namespace std;
  std::cout << "Enter your first name: ";
  string first_name;
  std::cin >> first_name;
  std::cout << "Enter your last name: ";
  string last_name;
  std::cin >> last_name;
  string name = first_name + last_name;
  std::cout << "Here's the information in a single string: " << name << '\n';
}

void full_name(){
  std::cout << "Enter your first name: ";
  char first_name[20];
  std::cin.get(first_name, 20);
  std::cin.get();
  std::cout << "Enter your last name: ";
  char last_name[20];
  std::cin.get(last_name, 20);
  std::cin.get();
  char name[strlen(first_name) + strlen(last_name) + 1];
  strcpy(name, first_name);
  strcat(name, last_name);
  std::cout << "Here's the information in a single string: " << name << '\n';
}

void print_info(){
  std::cout << "What is your first name? ";
  char name[20];
  std::cin.get(name, 20);
  std::cin.get();
  std::cout << name << '\n';
  std::cout << "What is your last name";
  char lname[20];
  std::cin.get(lname, 20);
  std::cin.get();
  std::cout << lname << '\n';

  std::cout << "What letter grade do you deserve? ";
  char letter;
  std::cin >> letter;
  std::cout << letter << '\n';

  std::cout << "What is your age? ";
  int age;
  std::cin >> age;
  std::cout << age << '\n';

  std::cout << "Name: " << lname << ", " << name << '\n';
  letter = letter + 1;
  std::cout << "Grade: " << letter << '\n';
  std::cout << "Age: " << age << '\n';
}
