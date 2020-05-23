#include "iostream"

using namespace std;

int main(void)
{
  int a,res;

  cout << "Digite el valor :";
  cin >> a;

  res = a%2;

  if(res == 0){

      cout << "Es par";
  }
  else
  {
    cout << "Es impar";
  }
  
  return 0;

}
