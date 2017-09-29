    #include <iostream>
    using namespace std;
    int naturalnumbers ( int i, int n){
    	cout<<" the natural number between 1 and "<<n<<" is : "<<i<<endl;
    	i++;
    	if  (i<n){
    	naturalnumbers(i,n);
    	}
    }
    int main() {
    	int a,n;
    	cout<<" enter the value(natural number) of n\n ";
    	cin>>n;
    	a=2;
    	naturalnumbers(a,n);
    	return 0;
    }