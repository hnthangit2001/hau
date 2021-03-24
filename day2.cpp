#include <bits/stdc++.h>
using namespace std;

int res[20][20];

void triangle(int n, int arr[]) {
    int row = n - 1;
    while (row > 0) {
        for (int i = 1; i <= row; i++){
            arr[i] = arr[i] + arr[i+1];
        	res[row][i]=arr[i];
    
    	}
    	row--;
    }
}

void printContinue(int n) {
    int row = 1;
    while (row < n) {
        cout << "[";
        for (int i = 1; i <= row; i++)
            if (i == row)
                cout << res[row][i];
            else 
                cout << res[row][i] << " ";

        cout << "]" << " ";
        row++;
    }
}


int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n+1], arr_dup[n+1];
        for (int i = 1; i <= n; i++){
            cin >> arr[i];
            arr_dup[i]=arr[i];
        }
        
        triangle(n, arr);
        printContinue(n);
        cout<<"[";
        for(int i=1;i<n;i++){
        	cout<<arr_dup[i]<<" ";
		}
		cout<<arr_dup[n]<<"]"<<endl;
    }
    return 0;
}
