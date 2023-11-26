/*
    Problem- There exists a string, you are allowed to remove a substring if all the
             character in the substring occurs even number of times.

             You have to tell if it is possible to delete such a string completely.
*/

/*
    Approach- If all the characters in the string are even number of times then the 
              deletion of such a string is possible.
*/

void solution(string s){

    vector<int> a;
	     
	     for(int i=0;i<s.length();i++){
	         
	         int count=1;
	         
	         for(int j=0;j<s.length();j++){
	             if(s[i]==s[j] && i!=j){

                    // I have changed the character itself to remmove the addition of 
                    // of the count again and again.
	                 s[j]=i;
	                 count++;
	             }
	         }

             // At last, I have changed the initial element as well.
	         s[i]=i;
	         a.push_back(count);
	     }
	     
	     
	     int p=0;
	     
	     for(int i=0;i<a.size();i++){
	         if(a[i]%2==0){
	             p++;
	         }
	     }
	     if(p==a.size())
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;
	     

}

#include <iostream>
#include<vector>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--){
	     int n;
	     cin>>n;
	     
	     string s;
	     cin>>s;

         solution(s);
	 }
	return 0;
}
