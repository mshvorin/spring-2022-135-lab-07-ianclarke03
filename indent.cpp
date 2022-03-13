#include <iostream>
#include <string>
#include <cctype>


int countChar(std::string line, char c)
{
  int count = 0;
  for (int i = 0; i < line.length(); i++)
    {
    if (line[i] == c)
      count += 1;
      }
  return count;
}
//if c == '}'  count-= 1










int main()
{
  std::cout << countChar("hello{ world}{{{ ! ian}}}", '{') << "\n";

  return 0;
}