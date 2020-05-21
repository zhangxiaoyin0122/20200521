#include <iostream>
using namespace std;

class Student {
public:
	void display() {

	}
	void SetId(int id) {
		this->_id = id;
	}
	void SetNumber(int number) {
		this->_number = number;
	}

private:
	int _id;
	int _number;
	char name[10];
	char major[10];
};

class classname {

};

class Person {
public:
	void PrintPersonInfo();
private:
	char name[10];
	char gender[10];
	int _age;
};

void Person::PrintPersonInfo() {
	cout << name << " "<<gender <<" "<< _age << endl;
}

class A {
	int _a;
};

class B {
	int _b;
	void fun1() {
		int a = 1;
		int b = 2;
		int c = 3;
	}
};

class C {
	void fun1() {
		int a = 1;
		int b = 2;
		int c = 3;
	}
};

class D {
	//¿ÕÀà
};