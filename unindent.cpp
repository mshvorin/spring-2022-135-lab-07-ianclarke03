//Task A. Removing indentation

#include <iostream>
#include <string>
#include <cctype>


std::string removeLeadingSpaces(std::string line)
{
  std::string newline;
  for (int i = 0; i < line.length(); i++)
    {
      if isspace(line[i])
      newline += "";
      else
      newline += line[i];
    }
  return newline;
}


int main()
{

  return 0;
}