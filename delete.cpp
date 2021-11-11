// delete.cpp -- using the delete operator

#include <iostream>
#include <cstring>

char* getname();

int main(int argc, char const *argv[]) {
  char* name;
  name = getname();
  std::cout << name << " at " << (int*) name << '\n';
  delete[] name;

  name = getname();
  std::cout << name << " at " << (int*) name << '\n';
  delete[] name;
  return 0;
}

char* getname(){
  char temp[80];
  std::cout << "Enter last name: ";
  std::cin.get(temp, 20);
  std::cin.get();
  char* pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);
  return pn;
}
