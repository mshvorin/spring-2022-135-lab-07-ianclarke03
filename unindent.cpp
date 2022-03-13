//Task A. Removing indentation

#include <iostream>
#include <string>
#include <cctype>


std::string removeLeadingSpaces(std::string line)
{
  std::string newline;
  for (int i = 0; i < line.length(); i++)
    {
      if (isspace(line[i]))
      newline += "";
      else
      newline += line[i];
    }
  return newline;
}


int main()
{
  std::cout << removeLeadingSpaces("                int main(){
           // Hi, I'm a program!
int x = 1; 
    for(int i = 0; i < 10; i++) {
cout << i;
          cout << endl;
 }
    }");

  return 0;
}