#include<iostream>
using namespace std;
void main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tep = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tep;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i != 9)
			cout << arr[i] << ",";
		else cout << arr[i];
	}
}