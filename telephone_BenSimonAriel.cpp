#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isGood (const string&);

int main()
{
  string number;
  int valid = 0;

  ifstream myFile("number.dat");
  if (!myFile)
  throw -1;

  myFile >> number;

  while (valid == 0)
  {
      if (number[0] == '0')
        {
          cout << number << " ";
          cout << "Sorry! The first number cannot be a zero!" << endl;
          cout << "Please enter a valid number in the form of DDD-DDD-DDDD : ";
          getline(cin, number);
        }
      else if ((number[0] != '0') && (number[3] == '-') && (number[7] == '-') && (isGood(number)))
        {
          ++valid;
          cout << number << " : Valid" << endl;
        }
      else if ((number[0] == '0') || (number[3] != '-') || (number[7] != '-') || (!isGood(number)))
        {
          cout << number << " : Not Valid" << endl;
          cout << "Please enter a valid number in the form of DDD-DDD-DDDD : ";
          getline(cin, number);
        }
    }

  return 0;
}

bool isGood (const string &number)
{
  for (size_t i = 0; i < number.size(); ++i)
  {
    if ((number[i] != '0') && (number[i] != '1') && (number[i] != '2') && (number[i] != '3') && (number[i] != '4')
      && (number[i] != '5') && (number[i] != '6') && (number[i] != '7')
      && (number[i] != '8') && (number[i] != '9') && (number[i] != '-'))
      {
      return false;
      }
   }
   return true;
}
