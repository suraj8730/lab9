//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
#include <iostream>
using namespace std;
double* maximum(double* a, int size)
    {
  if (size == 0)
    return NULL;//If the array is empty, return NULL.
  else {
    double *maxvalue;// pointer 
    double *element;  // another pointer 
    maxvalue = a; // maxvalue is  the first element
    element = a+1;   //element pointer is the next element
    for (int i = 0; i < (size-1); i++) {
      /* If the element pointed by the pointer is
      larger than the prvious  element the max value will be the max one*/
      if (*element > *maxvalue)
        maxvalue = element;

      //incrementing the element pointer
      element++;
    }
    return maxvalue;
  }
}
int main()
        {
        int n;
        cout<<"enter the number of element you want to put in the arrays"<<endl;
        cin>>n;//inputting no of element
        double arr[n];//declaring a array
        cout<<"enter the elements of the array"<<endl;
        //repeating a loop so that it takes input equals to the number of elements in the array
        for(int a=0;a<n;a++)
            {
            cin>>arr[a];
        }
        maximum(arr,n);//calling of function
        cout<<"the maximum of all the elements in the pointer is "<<*maximum(arr,n)<<endl;
        return 0;
}