//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.

#include <iostream>
using namespace std;
void revString(char* ptr)
{
  // Use two pointers -- one starting from the beginning and going forward,
  // and another starting from the last char and going backward.
  char *begin, *end;
  begin = ptr;
  end = ptr + (strlen(ptr) - 1);

  // As long as the two pointers don't cross,
  while (begin < end) {
    // Swap the two chars pointed by begin and end.
    char temp = *begin;
    *begin = *end;
    *end = temp;

    // Then increment begin and decrement end.
    begin++;
    end--;
  }
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
	 revString(string;
}

