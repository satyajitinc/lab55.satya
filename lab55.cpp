//include the library
#include <iostream>
using namespace std;

//mention the function
int main()
{	
	int size ;
	cout << "Please input your desired side length:" << endl; 
	//read the input value
	cin >> size;
	for(int i = 0; i < size ; i ++)
	{
		for (int j=0; j < size ; j++)
		{
			if (i== 0 || i== size-1 || j== 0 || j== size-1)	
			cout << "* " ;
			else
			cout << "  " ;
		}
	cout << endl;
	}
//end the program
return 0;
}
