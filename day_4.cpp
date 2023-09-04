// Task
// Write a Person class with an instance variable, , and a constructor that takes an integer, , as a parameter. The constructor must assign  to  after confirming the argument passed as  is not negative; if a negative argument is passed as , the constructor should set  to  and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:
// yearPasses() should increase the  instance variable by .
// amIOld() should perform the following conditional actions:
// If , print You are young..
// If  and , print You are a teenager..
// Otherwise, print You are old..

// Input Format
// Input is handled for you by the stub code in the editor.
// The first line contains an integer,  (the number of test cases), and the  subsequent lines each contain an integer denoting the  of a Person instance.
  
// Output Format
// Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print  or  lines (depending on whether or not a valid  was passed to the constructor).

using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge < 0)
        {
            cout << "Age is not valid, setting age to 0."<<endl;
            age=0;
        }
        else{
            age = initialAge;
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if(age<13){
            cout << "You are young." << endl;
        }
        else if(age>=13 && age < 18){
            cout << "You are a teenager." << endl;
        }
        else{
            cout <<"You are old."<<endl;
        }

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
