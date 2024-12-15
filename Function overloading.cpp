#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int product ( int  , int  );
int product ( int  , int  , int  );
main()
{
	int x = 2;
	int y = 3;
	int z = 4;
	
	cout<<product ( x , y )<<endl;
	cout<<product ( x , y , z );
}

int product ( int x , int y )
{
	return x * y ; 
}

int product ( int x , int y , int z )
{
	return x * y * z ;
}
