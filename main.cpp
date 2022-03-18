#include <iostream>
#include "unindent.h"
#include <fstream>
#include <string>
#include <cctype>
  
int main()
{
  std::ifstream if_file;
  std::string str;
  if_file.open("bad-code.cpp");
  
  while(getline(if_file, str)){
    std::cout << removeLeadingSpaces(str);
  }

  if_file.close();
  

  return 0;
}
