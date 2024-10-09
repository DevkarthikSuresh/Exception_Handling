/*
Name:Devkarthik Suresh
PRN:23070123045
Aim: Exception to check for age below 18.
#include <iostream>
  */
using namespace std;
int main() {
float age;

    cout << "Enter your age: ";
    cin >>age;
    try{
        if(age<18){
            throw age;}
        else{
            cout << "Accepted";
        }
    }
catch(float age){
    cout<<"\n You are below 18"<<endl;
}
    return 0;
}
/*Output
Enter your age: 10

You are below 18
*/
