#include "iostream"
#include "string"

using namespace std;

int main(void)
{   
  
 string palabra;
 char letra;

     cout << "Digite una palabra :";
     cin >> palabra;

     for (int i = 0; i < palabra.length(); i++) {
/*
      palabra.length() - 1   ( Utilizada para devolver el ultimo caracter)
       
*/
     }
    
         if (palabra[0] == palabra[palabra.length() - 1])
        {
            cout << "Es la misma letra";
        }
        else
        {
            cout << "No es la misma letra";
        }


       
     return 0;
}