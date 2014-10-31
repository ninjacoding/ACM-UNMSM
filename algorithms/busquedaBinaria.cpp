#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int> A, int target){
	int lo = 0, hi = A.size(),mid;
	while (lo <= hi){
		mid = lo + (hi-lo)/2;
		if(A[mid] == target)
			return mid;
		else if(A[mid] < target)
			lo = mid+1;
      	else
         	hi = mid-1;
 	}
}

int main(){
	vector<int> v;

	v.push_back(3);
	v.push_back(10);
	v.push_back(5);
	v.push_back(8);

	sort(v.begin(),v.end());

	int pos;
	pos=binary_search(v,5);
	
	cout<<pos<<endl;
	
	return 0;
}
