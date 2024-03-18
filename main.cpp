#include <iostream>
using namespace std;
#include <math.h>
int main(){

int feet ,inches ;
double d, angle ;
cout << "Enter distance from the tree in feet:";
cin >> feet;
cout << "Enter the inches remaining:";
cin >> inches ;
cout << "Enter the angle in degrees:";
cin >> angle ;

d= feet*12+inches;
double angleInRadians=angle*(3.14159/180.0);
double h=d*tan(angleInRadians);
cout << "The height of the tree is" <<h<<"feet."
<<endl;

return 0;

}
