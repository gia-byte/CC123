//Constuctors and Destuctors
//main.cpp

#include <iostream>
#include "CreateAndDestroy.h"
using namespace std; 

void create(void);

CreateAndDestroy first(1, "(global before main)");

int main(){
	cout << "\nMAIN() BEGINS" << endl;
	CreateAndDestroy second(2, "(local automatic in main)")
	static CreateAndDestroy third(3, "(local static in main)");
	
	create();
	cout << "\nMAIN() RESUMES" << endl;
	CreateAndDestroy fourth(4, "(local automatic in main)");
	cout << "\nMAIN() ENDS" << endl;
}

void create(void){
	cout << "\nCREATE BEGINS" << endl;
	CreateAndDestroy fifth(5, "(local automatic in create)");
	static CreateAndDestroy sixth(6, "(local static in create)");
	CreateAndDestroy seventh(7. "(local automatic in create)");
	cout << "\nCREATE() ENDS" << endl;
}
