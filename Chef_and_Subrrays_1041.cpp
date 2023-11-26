/* 
   Probelem-Find the number of subarrays that have the sum of elements and the products
            equal.

   Approach-Iterate over the array and keep on checking if the sum and products
            give equal value.
*/

#include <iostream>
using namespace std;

void solution(int arr[],int size){

        int count=0; // Count of the Sub-Arrays

	    // First loop to iterate over the elements/
	    for(int i=0;i<size;i++){
	        
	        int sum=0;
	        int product=1;
	        
            // Second Loop that starts from the ith element that we haven't checked yet.
            // We have to check if the sum and product are equal after every element get
            // traversed.
	        for(int j=i;j<size;j++){
	            sum+=arr[j];
	            product*=arr[j];

	            // Comparing if the sum and product are equal.
	            if(sum==product){
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
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }

        solution(arr,n);
	}
	return 0;
}
