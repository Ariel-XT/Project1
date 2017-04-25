#include <iostream>
#include <string>

using namespace std;

void countVowels(string str, int& aCt, int& eCt, int& iCt, int& oCt, int& uCt);

int main ()
{
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  string str;

  cout << "Please enter a string : " << endl;
  getline(cin,str);

  countVowels (str, a , e , i , o , u);

  cout << "The number of a's : " << a << "\nThe number of e's : " << e << "\nThe number of i's : " << i;
  cout << "\nThe number of o's : " << o << "\nThe number of u's : " << u << endl;
  return 0;
}

void countVowels(string str, int& aCt, int& eCt, int& iCt, int& oCt, int& uCt)
{
  for (int p = 0; p < str.size(); ++p)
  {
    if (str[p] == 'a')
    ++aCt;
    if (str[p] == 'e')
    ++eCt;
    if (str[p] == 'i')
    ++iCt;
    if (str[p] == 'o')
    ++oCt;
    if (str[p] == 'u')
    ++uCt;
  }
}
