/*Write a piece of code which prints the characters in a cstring in a reverse order.

char s[10] = "abcde";
char* cptr;

// WRITE YOUR CODE HERE
*/

#include <iostream>
#include<cstring>
using namespace std;


int main()
    {
        char s[10]="abcde";
        char* cptr;
        
        cout<<s<<endl;
        for (cptr = s; *cptr != '\0'; cptr++)
              {
                 
        }
// going back one step in the char string
        cptr--;
//using s to stop the code for futher going back
        while (cptr >= s)
                {
                        cout << *cptr--;
        }
cout<<'\0'<<endl;//use to end the har string
return 0;
}
