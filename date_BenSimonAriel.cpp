#include <iostream>

using namespace std;

int main()
{
  bool leap = 0;
  int month = 0;
  int day = 0;
  int year = 0;
  char dash = '-';
  char yes1 = 'Y';
  char yes2 = 'y';
  char no1 = 'N';
  char no2 = 'n';
  char Ans = yes1;


  while (Ans == 'y' || Ans == 'Y')
  {
  cout << "Enter the date in the form : month-day-year: ";
  cin >> month >> dash >> day >> dash >> year;

  if (year % 4 == 0 && year % 100 != 0)
  {
    leap = true;
  }

  if (month == 2)

    day += 31;

  else if (month == 3)

    day += 59;

  else if (month == 4)

    day += 90;

  else if (month == 5)

    day += 120;

  else if (month == 6)

    day += 151;

  else if (month == 7)

    day += 181;

  else if (month == 8)

    day += 212;

  else if (month == 9)

    day += 243;

  else if (month ==10)

    day += 273;

  else if (month == 11)

    day += 304;

  else if (month == 12)

    day += 334;

  if (leap == true)
  {
    ++day;
  }

  cout << "This is day number : " << day << " of the year : " << year << endl;
  cout << "\nDo you wish to continue? (Y/N) || (y/n) : ";
  cin >> Ans;
  cout << endl;

    while (Ans != yes1 && Ans != yes2 && Ans != no1 && Ans != no2)
    {
      cout << "Do you wish to continue? (Y/N) || (y/n) : ";
      cin >> Ans;
      cout << endl;
    }
  }
  cout << "Good bye!\n";
  return 0;
}
