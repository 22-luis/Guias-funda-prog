#include "iostream"
#include "string"

using namespace std;

int main(void)
{
   string p;

   cout << "Digite una palabra :";
   cin >> p;
if(p.length() > 10 )
{
   cout << "Es mayor de 10 caracteres";
}
   else
   {
       cout << "No es mayor de 10 caracteres";
   }
if(p.length()%2 == 0 ) 
{
    cout << " Y es par";
}      
else
{
    cout << " Y es impar";
}

 return 0;

}