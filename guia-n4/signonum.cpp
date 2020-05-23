#include "iostream"

using namespace std;

int main(void)
{
  int a;

  cout << "Digite el valor :";
  cin >> a;

if(a == 0)
{
  cout << " Es cero";
}

if (a > 0)
{
  cout << "Es positivo";
}
if (a < 0)
{
  cout << "Es negativo";
}

return 0;
}
