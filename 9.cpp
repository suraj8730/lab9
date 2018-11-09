// Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include <iostream>
using namespace std;
char* contains(char* string, char x)
	{
	  while (*string != '\0') //checking if the string contains that character 
		{
	   	 if (*string == x)
	      		return string;
	    	else
	     		 string++;//going to next character
	  }
	return NULL;
	}
int main()
	{
   	int n;
	char c;
	cout<<"enter the maximum size of the string "<<endl;
	cin>>n;
	char string[n];
	cout<<"enter a string "<<endl;
	cin>>string;
	cout<<"enter the character parameter you want to check"<<endl;
	cin>>c;
	contains(string,c);
	cout<<*contains(string,c)<<endl;
	if(*contains(string,c)==c)
		cout<<"your character is present in the string"<<endl;
	else
		cout<<"your character is not present in the string"<<endl;
return 0;
}
