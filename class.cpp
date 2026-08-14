#include <iostream>
#include <string>
using namespace std;

class Student{
private:
 string name;
 int rollNo;
 float marks;
    
public:
 void inputDetails(){
 cout<<"Enter Student Name:";
 cin>>name;
 cout<<"Enter rollNO";
 cin>>rollNo;
 cout<<"Enter Marks";
 cin>>marks;
 }
 
 void displayDetails() const{
    cout<<"\n---Student Details---\n";
    cout<<"Name:"<<name<<endl;
    cout<<"rollNo:"<<rollNo<<endl;
    cout<<"Marks:"<<marks<<endl;
 }
};
int main(){

s.inputDetails();
s.displayDetails();
return 0;
 }
 