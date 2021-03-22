#include<bits/stdc++.h>
using namespace std;
int n,a[105],count1 = 1;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int min=i;int j;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j])min=j;
		}
		if(min!=j){swap(a[i],a[min]);
			cout << "Buoc " <<count1<< ": ";
			count1++;
			for (int k = 0; k < n; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}

