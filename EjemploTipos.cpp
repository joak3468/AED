#include <cassert>
#include <string>
#include <math.h>
//#DEFINE NDBUG

using namespace std;

int main(int argc, char** argv) {
	
	//BOOL
	assert ( true and true );
	assert ( false == false );
	assert ( true != false );
	assert ( not false );
	assert ( (true or false) == true );
	
	//CHAR
	assert('h' == 'h');
	
	assert('h' != 'o');
	
	assert(64 <= 'h');
		

	//UNSIGNED
	
	assert( 1 == 1 );
	
	assert( 1 != 2 );
	
	assert( 1 <= 2 );
	
	assert( 2 >= 2 );
	
	assert( 1 < 2 );
	
	assert( 2 > 1 );
	
	assert( 1+1 == 2 );
	
	assert( 1-1 == 0 );
	
	assert( 1*1 == 1 );
	
	assert( 1/1 == 1 );

	assert( 5%2 == 1 );	
	
	//INT
	
	assert( -1 == -1 );
	
	assert( 1 != 2 );
	
	assert( 1 <= 2 );
	
	assert( 2 >= 2 );
	
	assert( 1 < 2 );
	
	assert( 2 > 1 );
	
	assert( 1+1 == 2 );
	
	assert( 1-2 == -1 );
	
	assert( 1*1 == 1 );
	
	assert( 1/1 == 1 );

	assert( 5%2 == 1 );	
	
	//DOUBLE
	
	assert( 1.123456789 == 1.123456789 );
	
	assert( 1.123456789 != 2.123456789 );
	
	assert( 1.123456789 <= 2.123456789 );
	
	assert( 2.123456789 >= 2.123456789 );
	
	assert( 1.123456789 < 2.123456789 );
	
	assert( 2.123456789 > 1.123456789 );
	
	assert( 1.123456789 + 1.123456789 == 2.246913578 );
	
	assert( 1.123456789-1.123456789 == 0.0 );
	
	assert( 1.123456789*1 == 1.123456789 );
	
	assert( 1.123456789/1.123456789 == 1 );
	
	
	//STRING
	
	assert("hola" == "hola");
	
	assert("hol" != "hola");
	
	assert("ho" < "hola");
	
	assert(string("hola").length() <= 4);
	
	assert(string("ho") + string("la") == "hola");

	return 0;
}
