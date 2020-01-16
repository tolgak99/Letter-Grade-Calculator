#include "Course.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Course::Course(){

	 mtW=0.30;
	 hwW=0.20;
	 finW=0.50;

}

Course::Course (double b1 , double b2, double b3){
	
	mtW=b1;
	hwW=b2;
	finW=b3;
	
}
void Course::calculate() {

 int des;
 

 des= (0.30 * mtG) + ( 0.20 * hwG) + (0.50 * finG) ;

 if( des <= 34)
	 letterGrade= "FF" ;
 else if ( des <44 && des>35)
	 letterGrade= "FD";
 else if ( des < 49 && des >= 45)
	 letterGrade="DD";
 else if ( des <59 && des >=50)
	 letterGrade="DC";
 else if ( des<69 && des >= 60)
	 letterGrade="CC";
 else if ( des<79 && des>= 70)
	 letterGrade="CB";
 else if ( des< 84 && des>= 80)
	 letterGrade="BB";
 else if ( des<89 && des>= 85)
	 letterGrade="BA";
 else if ( des<= 100 && des>=90)
	 letterGrade="AA";




}
void Course::set_weightMT (){
}
void Course::set_weightHW (){
}
void Course::set_weightFIN (){
}
void Course::set_name(string na){
	name=na;
}
void Course::get_gradeMT(int g1){
	   mtG=g1;
}
void Course::get_gradeHW(int g2){
	hwG=g2;
}
void Course::get_gradeFIN(int g3){
	   finG=g3;
}

void Course::get_results () {

	
	cout << left<<setw(15) << name << setw(15) << mtG << setw(15) << hwG << setw (15) << finG << setw(15) << letterGrade << endl;

}
