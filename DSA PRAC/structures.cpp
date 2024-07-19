
//DSA-1 IMPLEMENTATION OF NEXTED STRUCTURE 

#include<iostream>
using namespace std;
struct address
{
  int doorNo;
  char strName;
}addr;
struct student
{
  char name[10];
  int age;
  struct  address addr;

}s;
int main(){
  cout<<"Enter name: "<<endl;
  cin>>s.name;
  cout<<"Enter age: "<<endl;
  cin>>s.age;
  cout<<"Enter door no: "<<endl;
  cin>>s.addr.doorNo;
  cout<<"Enter Street Name: "<<endl;
  cin>>s.addr.doorNo;
  cout<<"NAME: "<<s.name<<endl;
  cout<<"AGE: "<<s.age<<endl; 
  cout<<"DOOR NO: "<<s.addr.doorNo<<endl; 
  cout<<"STREET NAME: "<<s.addr.strName<<endl; 
}
