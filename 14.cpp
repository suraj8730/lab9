//STRING] Create a string and store your name in it.Use a loop to print string character by characterusing the normal index method as well as the pointer method.
#include <iostream>
using namespace std;
int main()
{
    char string[100];
    cout<<"enter your name:";
    cin>>string;
    //using the normal index method
     for(int i=0; i<100; i++) 
    { 
        cout<<str[i]; 
    } 
    
    //using pointer
    char *p;
    p = str; 
	while( *p != '\0')
    {
        cout<<*p; 
        p++; 
    }
    return 0;
}
