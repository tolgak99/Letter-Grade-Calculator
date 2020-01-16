#include  <iostream>
#include <string>
#include "Course.h"
#include <iomanip>

using namespace std;




int main(){

	double b1,b2,b3;
	int g1,g2,g3,i=5;
	string name;


	cout << "Enter weights midterm , homework , final for first course: " << endl;
	cin >> b1 >> b2 >> b3;
    Course a1(b1,b2,b3);
	cout<< "Enter first course name: "<<endl;
	cin >> name;
	a1.set_name (name);
	cout<< "Enter first course grades: "<<endl;
	cin >> g1 >> g2 >> g3;
	a1.get_gradeMT(g1);
	a1.get_gradeHW(g2);
	a1.get_gradeFIN(g3);
	a1.calculate();
	cout << "Enter weights  midterm , homework , final for second course: " << endl;
	cin >> b1 >> b2 >> b3;
    Course a2(b1,b2,b3);
	a2.set_weightMT();
	a2.set_weightHW();
	a2.set_weightFIN();
	cout<< "Enter second course name: "<<endl;
	cin >> name;
	a2.set_name(name);
	cout<< "Enter second course grades: "<<endl;
	cin >> g1 >> g2 >> g3;
	a2.get_gradeMT(g1);
	a2.get_gradeHW(g2);
	a2.get_gradeFIN(g3);
	a2.calculate();
	cout << left << setw(15) << "Course" << setw(15) << "Midterm" << setw(15) << "Homework" << setw (15) << "Final" << setw(15) << "Letter" << endl;
	a1.get_results (); 
	a2.get_results ();
  

	return(0);
}
