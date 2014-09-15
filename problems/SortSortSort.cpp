#include <iostream>
#include <cstdio>
using namespace std;
void merge(int arr[], int l, int m, int r, int mod){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
    	if (L[i]%mod == R[j]%mod){
    		if (L[i] >= R[j]){
    			if(((L[i] & 1) && (R[j] & 1)) || ((L[i] & 1) && !(R[j] & 1))){
    				arr[k]=L[i];
    				i++;
    			} else if((!(L[i] & 1) && !(R[j] & 1)) || (!(L[i] & 1) && (R[j] & 1))){
    				arr[k]=R[j];
    				j++;
    			}
	        } else{
	        	if(((L[i] & 1) && (R[j] & 1)) || (!(L[i] & 1) && (R[j] & 1))){
    				arr[k]=R[j];
    				j++;
    			} else if((!(L[i] & 1) && !(R[j] & 1)) || ((L[i] & 1) && !(R[j] & 1))){
    				arr[k]=L[i];
    				i++;
    			}
	        }
    	} else if (L[i]%mod < R[j]%mod){
            arr[k] = L[i];
            i++;
        } else if (L[i]%mod > R[j]%mod){
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r,int mod){
    if (l < r){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m, mod);
        mergeSort(arr, m+1, r, mod);
        merge(arr, l, m, r, mod);
    }
}
int main(){
	int  m,n;

	while(scanf("%d%d",&m,&n) && m!=0 && n!=0){
		int  v[m];
		for(int i=0;i<m;i++) cin>>v[i];

		mergeSort(v, 0, m - 1,n);
		cout<<m<<" "<<n<<endl;
		for(int j=0;j<m;j++) cout<<v[j]<<endl;
	}
	cout<<"0 0"<<endl;
}
