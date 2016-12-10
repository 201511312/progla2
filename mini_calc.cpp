#include<iostream>
using namespace std;



int get_sum(int n1, int n2){
	return n1+n2;
}


int get_difference(int n1, int n2){
	return n1-n2;
}

int get_product(int n1, int n2){
	return n1*n2;
}


int get_quotient(int n1, int n2){
	return n1/n2;
}



int main(){
	int n1, n2;
	
	cout<<"Enter num 1:";
	cin>>n1;
	cout<<"Enter num 2:";
	cin>>n2;
	
	cout<<"Sum is: "<<get_sum(n1, n2)<<endl;
	cout<<"Difference is: "<<get_difference(n1,n2)<<endl;
	cout<<"Product is: "<<get_product(n1,n2)<<endl;
	cout<<"Quotient is: "<<get_quotient( n1,  n2);
	
	
}
