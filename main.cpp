#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  // Check if enough arguments provided: program name + N*2 arguments (name age pairs)
  if (argc < N * 2 + 1) {
    cout << "Usage: " << argv[0] << " name1 age1 name2 age2 name3 age3" << endl;
    return 1;
  }

  student s1,s2;

 s1.set_name("Amy"); s1.set_age(20);
 s2.set_name("James");
 s2.set_age(17);
 if (s1.get_age() > s2.get_age()) {
   s1.print_name();
   cout << "is older" << endl;
 } else {
   s2.print_name();
   cout << "is older" << endl;
 }


  student a[N];
  // Set age and set name for all N ppl
  int i, age;
  string n;
   // 1. Ask for N names and N age using cin
  //  for(i = 0; i < N; i++) {
  //   cin >> n>> age;
  //   a[i].set_name(n);
  //   a[i].set_age(age);
  // }
  for(i = 0; i < N; i++) {
    a[i].set_name(argv[i*2 + 1]);
    a[i].set_age(atoi(argv[i*2 + 2]));
  }

  //2. Print name and age of all N ppl
  for(i = 0; i < N; i++) {
    a[i].print_name();
    cout << "Age: " << a[i].get_age() << endl;
  }
  
  
  
  //3. Print All name and age of 
  //the youngest person
  //Find what the age of the youngest person
  printf("The youngest person is: \n");
  int min_index = 0;
  for(i = 1; i < N; i++) {
    if(a[i].get_age() <= a[min_index].get_age()) {
      min_index = i;
    }
    a[min_index].print_name();
    cout << "Age: " << a[min_index].get_age() << endl;
  }
  

 
  
  // Print all info for the yougest person
 
  
  
  //4. Change input from cin to argv
  // for(i = 0; i < N*2; i++) {
  //   a[i].set_name(argv[i+1]);
  //   a[i].set_age(atoi(argv[i+2]));
  // }

  
 return 0;

    
  }
  
  


