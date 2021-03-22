#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[105];
int dem = 1;
void sortchon() {
	int i, j, min;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		
			swap(a[i], a[min]);
			cout << "Buoc " << dem << ": ";
			dem++;
			for (int k = 0; k < n; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sortchon();

	return 0;
}
