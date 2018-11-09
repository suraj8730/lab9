//*Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array. */
#include <iostream>
using namespace std;
int evenno(int* arr,int a)
    {
        int x=0;
        for(int i=0;i<a;i++)
            {
            if(*arr %2 ==0)//ccheking if the number is even
                {
                    x++;
            }
            arr++;//jumpingto next element
        }
    return x;
}
int main()
	{
    int n;
	cout<<"enter the number of element you want to put in the arrays"<<endl;
	cin>>n;//inputting no of element
	int arr[n];//declaring a array
	cout<<"enter the elements of the array"<<endl;
	//repeating a loop so that it takes input equals to the number of elements in the array
	for(int a=0;a<n;a++)
		{
		cin>>arr[a];
	}
    evenno(arr,n);
    cout << "There are " <<evenno(arr,n)<< " even numbers"<<endl;
    return 0;
}
