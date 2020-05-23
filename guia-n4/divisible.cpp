#include "iostream"

using namespace std;

int main(void)
{
   int a,b,res;

   cout << "Digite el primer valor :";
   cin >> a;

   cout << "Digite el segundo valor :";
   cin >> b;

   res = a%b;
  
   if (res == 0) {
       cout << "Si es divisible";
   }
   else
   {
       cout << "No es divisible";
   }
 
   return 0;
}