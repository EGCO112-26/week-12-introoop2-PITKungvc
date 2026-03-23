#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
  void set_name(string="Yme");
  void print_name();
  string get_name() const;

  void set_age(int);
  int get_age() const;

  //1. set age --> set ค่า age
  //2. get age --> return ค่า age
};

string student::get_name() const {
  return name;
}

int student::get_age() const {
  return age;
}

void student::set_age(int x){
  if(x>80) age=80;
  else if(x<13) age =13;
  else age=x;
}

void student::set_name(string n){
  name = n;
}

void student::print_name(){
  cout << "Name: " << name << endl;
}
