#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
        cout << "xp ( >0 <1 ) = "; cin >> x_p;
        cout << "xk ( >0 <1 ) = "; cin >> x_k;
        cout << "dx ( >0 <1 ) = "; cin >> dx;
        cout << "eps          = "; cin >> e;
        cout << endl;
        x = x_p;
        cout << "-----------------------------------------" << endl;
        cout << "|" << setw(5) << "x" << "   |"
            << setw(10) << "Arth x " << " |"
            << setw(7) << "S" << "    |"
            << setw(5) << "n" << " |"
            << endl;
        cout << "-----------------------------------------" << endl;
        while (x <= x_k) {
            sum(); // виклик процедури обчислення суми
           
            if (abs(x_k) < 1 && abs(x_p) < 1) {
                
                    cout << "|" << setw(7) << setprecision(2) << x << " |"
                        << setw(10) << setprecision(5) <<  (1.0 / 2 * log((1 + x) / (1 - x))) << " |"
                        << setw(10) << setprecision(5) << s << " |"
                        << setw(5) << n << " |"
                        << endl;
                    x += dx;
                
                cout << "----------------------------------------" << endl;
            }
            else
                cout << "error";
            x += dx;
        }
        cin.get();
            
        return 0;
}


 
