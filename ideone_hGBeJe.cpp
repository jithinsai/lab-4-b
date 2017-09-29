#include <iostream>
using namespace std;
int even_numbers ( int a, int b,int c){
	cout<<" all even numbers in the range a to b are:\n";
	if ( a%2==0 && b%2==0 && c<b){
	 c=a;
	 cout<<c<<endl;
	even_numbers( a+2,b,c);
	} else if (a%2==0 && b%2!=0 && c<(b-1)){
	c=a;
	cout<<c<<endl;
	even_numbers( a+2,b,c);
	}else if (a%2!=0 && b%2!=0 && c<(b-1)){
	c=a+1;
	 cout<<c<<endl;
	 even_numbers(a+3,b,c);
	}else if (a%2!=0 && b%2==0 && c<b){
	c=a+1;
	cout<<c<<endl;
	even_numbers(a+3,b,c);
	}
		
}
int odd_numbers( int a,int b, int c){
	cout<<"all odd numbers in the range a to b are: \n";
	if(a%2==0 && b%2==0 && c<(b-1)){
	c=a+1;
	cout<<c<<endl;
	odd_numbers( a+3,b,c);
	} else if (a%2==0 && b%2!=0 && c<b){
	c=a+1;
	cout<<c<<endl;
	odd_numbers(a+3,b,c);
	}else if(a%2!=0 && b%2!=0 && c<b){
	c=a;
	cout<<c<<endl;
	odd_numbers(a+2,b,c);
	}else if (a%2!=0 && b%2==0 && c<(b-1)){
	c=a;
	cout<<c<<endl;
	odd_numbers(a+2,b,c);
	}
}
int main() {
	int a,b,c;
	cout<<"enter the range of natural numbers a to b\n";
	cin>>a>>b;
	even_numbers(a,b,c);
	odd_numbers(a,b,c);
	return 0;
}