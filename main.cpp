#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<< endl << "Enter a marks of student!" ;
    cin>> marks;
    if(marks>=75)
    {
        cout<< endl << "distinction" ;
    }
    else if(marks>=60)
    {
        cout<< endl << "good" ;
    }
    else if(marks>=50)
    {
        cout<< endl << "pass" ;
    }
    else if(marks>=39)
    {
        cout<< endl << "only pass" ;
    }
    else
    {
        cout<< endl << "fail" ;

    }
    return 0;
}
