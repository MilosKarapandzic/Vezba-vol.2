/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;
double rek_niz(int n)
{
 if(n==0) return 1;
 return 2*rek_niz(n-1)+(double)(n*(n-1.0))/3.0;
}

double iter_niz(int n)
{
   double m = 1;
   for(int i=1; i<=n; i++ )
   {
      m = 2*m+(double)(i*(i-1))/3.0;
   }
   return m;
}

int main()
{
  int n;
  fstream milos;
  milos.open("text.txt");
  if(milos.is_open())
  {
    std::cout << "File je otvoren." << std::endl;
    milos>> n;
    double iter_ni;
    double rek_ni;
    double ne_Rek=iter_niz(n);
    double rek = rek_niz(n);
    cout<<"Iterativnom metodom dobili smo resenje: " << ne_Rek << endl;
    cout<<"Rekurzivnom metodom dobili smo resenje resenje: " << rek; 
    milos.close();
  }
  else
  {
      std::cout << "File nije otvoren." << std::endl;
  }

}