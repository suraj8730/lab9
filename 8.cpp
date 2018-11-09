// Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
#include <iostream>
#include <string>
using namespace std;
int myStrLen(char*string)
	{
	int l = 0;
	//in a string the last character is always the \0 so we are using loop to count the number of element after which the \0 come 
	 while (*string != '\0') 
		{
	    l++;
	    string++;
	  }
	  return l;
}
int main()
	{
	int n;
	cout<<"enter the maximum size of the string "<<endl;
	cin>>n;
	char string[n];
	cout<<"enter a string "<<endl;
	cin>>string;
	myStrLen(string);
	cout<<"length of the the given string is"<<myStrLen(string)<<endl;
return 0;
}


