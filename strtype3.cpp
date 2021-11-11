#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[]) {
  char char1[20];
  char char2[20] = "jaguar";

  using namespace std;
  string s1;
  string s2 = "panther";


  //assignment for string objects and character arrays
  s1 = s2;
  strcpy(char1, char2);

  s1 += " paste";
  strcat(char1, " juice");

  int len1 = s1.size();
  int len2 = strlen(char1);

  std::cout << "The string " << s1 << " contains " << len1 << " characters "<< '\n';
  std::cout << "The string " << char1 << " contains " << len2 << " characters "<< '\n';
  return 0;
}
