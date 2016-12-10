 #include<iostream>
using namespace std;
int main()
{	
	int a;
	for (int a=1;a<101;a++)
		if(a%3 == 0 && a%5 == 1 )
		cout<<"Pogi"<<endl;
		else if(a%5 == 0 && a%3 == 1 )
		cout<<"Ed"<<endl;
		else if( a% 5 == 0 && a%3 == 0)
		cout<<"Ed Pogi"<<endl;
		else
		cout << a<<endl;
	return 0;	
}
