    #include <iostream>
    using namespace std;
    void reverse(int x){
    	if ( x<10){
    	cout<<x;
    	}else{
    	cout<<x%10;
    	reverse(x/10);
    	}
    }
    int main() {
    	int p;
    	cout<<" enter the natural number\n";
    	cin>>p;
    	cout<<" reverse number is : ";
      	reverse(p);
    	return 0;
    }