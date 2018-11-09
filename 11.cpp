/*Write a program to declare variables of all predefined sizes 
and declare corresponding pointers (of all predefined types). 
Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )*/
#include<iostream>
using namespace std;

int main()
{
    //declare variables of integer
    int x;
    int *p;//pointer
    //declare variables of character
    char y;
    char *q;//char pointer
    //declare variables of bool
    bool z;
    bool *r;//pointer
    //declare variables of float
    float a;
    float *s;//pointer
    //declare variables of double
    double b;
    double *t;//pointer
    //printing all the sizes
    cout<<"size of int:"<<sizeof(x)<<" "<<"and its pointer is"<<sizeof(p)<<endl;
    cout<<"size of char:"<<sizeof(y)<<" "<<"and its pointer is"<<sizeof(q)<<endl;
    cout<<"size of bool:"<<sizeof(z)<<" "<<"and its pointer is"<<sizeof(r)<<endl;
    cout<<"size of float:"<<sizeof(a)<<" "<<"and its pointer is"<<sizeof(s)<<endl;
    cout<<"size of double:"<<sizeof(b)<<" "<<"and its pointer is"<<sizeof(t)<<endl;
}

