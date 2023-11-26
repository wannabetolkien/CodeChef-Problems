#include <iostream>
using namespace std;
// Just swapping the elements.
// Adjacent Elements are swapped except the last  one if total elements are odd.
string swapper(string a){
    
    if(a.length()%2==0)
    for(int i=0;i<a.length();i+=2){
        char temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    else{
        for(int i=0;i<a.length()-1;i+=2){
        char temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    
    return a;
}
// (122-(char%97)) allows you to convert a to z and vice-versa.
string encoder(string b){
    for(int i=0;i<b.length();i++){
        b[i]=122-(b[i]%97);
    }
    
    return b;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    cout<<encoder(swapper(s))<<endl;
	    
	}
	return 0;
}