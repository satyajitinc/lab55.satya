//include the library
#include <iostream>
using namespace std;

//mention the function
int main()
{int n ;
	cout << "Please input your desired side length:" << endl; 
	//read the input value
	cin >> n;
	for(int i = 0; i < n ; i ++)
	{
		for (int j=0; j < n ; j++)
		{
			cout << "* " ;
		}
	cout << endl;
	}
	cout << "This is Square Star Pattern" << endl ;
	return 0;
}
