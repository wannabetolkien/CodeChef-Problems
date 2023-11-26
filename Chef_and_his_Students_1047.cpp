/*
    Probelm-You have to check the order of the elements in Strings basically.
            Originally the students will be >< but after teachers coming it will
            become <>.
    Approach-Just check the arrangement of the String and you will find the numbers
             of students that will get punished.

*/

#include <iostream>
using namespace std;

void solution(string a){
    
    for(int i=0;i<a.length();i++){

	        if(a[i]=='<'){
	            a[i]='>';
	        }
	        else if(a[i]=='>'){
	            a[i]='<';
	        }
	    }
	    
	    int count=0;
	    
	    for(int i=0;i<a.length()-1;i++){
	        if(a[i]=='>'){
	            if(a[i+1]=='<'){
	                count++;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	}


int main() {
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    
	    solution(a);
	return 0;
}
}