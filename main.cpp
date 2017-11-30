/** Computer Programming
 *  Electrical Resistance of a Wire
 *  C00187998
 *  Gerard Murphy
 *  25/09/17
 */
#include <iostream>
#include<cmath>/**< preprocessor directives */

using namespace std;

double resistance(double radius, double length, double rho);/**< function prototypes */

int main()/**< main() function */
{
    cout << "Electrical Resistance of a Wire" << endl;/**< Title */


double radius=0, length=0, rho=0, res;/**< variable declarations */

	while (radius<=0)/**< while loop to ensure values entered are greater than 0 */
    {
        cout<<"Enter positive value for radius: ";
        cin>>radius;
    }

    while (length<=0)
    {
        cout<<"Enter positive value for length: ";
        cin>>length;
    }

    while (rho<=0)
    {
        cout<<"Enter positive value for rho: ";
        cin>>rho;
    }

    res = resistance (radius, length, rho);/**< call resistance function and display result */

    cout<<"The Electrical Resistance of the Wire= " <<res <<endl;

    return 0;
}
double resistance(double radius, double length, double rho)/**< resistance function */

{
	double area, res;/**< variable declaration in res function */

	area = M_PI * pow(radius, 2);/**< calculating area and resistance */
	res = rho * length / area;

	return res;
}

