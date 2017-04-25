#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  string lastName;
  string firstName;
  double currentSalary = 0;
  double increase = 0;
  double payIncrease = 0;
  double newSalary = 0;

  ifstream myFile("data.txt");
  ofstream myFileTwo("output_BenSimonAriel.dat");

  while(myFile >> lastName >> firstName >> currentSalary >> increase)
  {
    payIncrease = currentSalary * (increase / 100);
    newSalary = payIncrease + currentSalary;
    myFileTwo << setprecision(2) << fixed << firstName << " " << lastName;
    myFileTwo << " " << currentSalary << " " << setprecision(1) << increase << " ";
    myFileTwo << setprecision(3) <<newSalary << endl;
  }

  return 0;
}
