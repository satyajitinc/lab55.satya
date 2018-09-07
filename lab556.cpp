//include the library
#include<iostream>
using namespace std;

//include the function
	int main()
	{
	int n = 5, j, i;
	//printing the first line
	cout << "      *****" << endl;
	 for(int i = 0; i < 3 ; i ++)
	   {
           //looping structure to print spaces
           for (int j=1 ; j <= (n-i)  ; j++)
	   {
            cout << " ";
           }
	   //print required sequence of stars
	   {
            cout << "*   *" << endl;
	   }
         }
	//printing the end line
	 cout << "  *****" << endl;
	 cout << " This is Hollow Rhombus Star Pattern." << endl;
	return 0;         
	 } 
