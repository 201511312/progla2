#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		int id;
};

class student : public person{
	private:
		int books;
		int subjects;
		int tin;
		int sss;
		
	public:
		int stud1_num;
		
		int set_books(int books){
			books = num;
		};
		int get_books(){
			return books;
		};
};

int main(){
	student stud1;
	stud1.set_books(1);
	cout<< stud1.get_books;
}
