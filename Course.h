#ifndef COURSE_H_
#define COURSE_H_
#include <string>

using namespace std;

class Course{

 public :
	Course ();

	Course ( double , double , double);

	void calculate ();

	void set_weightMT () ;
	void set_weightHW ();
	void set_weightFIN ();
	void set_name(string );
	void set_letterGrade();

	void get_gradeMT (int);
	void get_gradeHW (int);
	void get_gradeFIN (int);
	void get_results();

private :

	int mtG , hwG , finG;
	double mtW , hwW , finW;
	string name , letterGrade;
	

};


#endif
