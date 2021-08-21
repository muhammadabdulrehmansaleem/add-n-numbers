#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enetr a number and will dispaly you the sum of all its previous number including this one ";
	cin >> num;
	int sum = 0;
	for (int count = 1; count <= num; count++) {
		sum += count;
	}
	cout << "The sum is " << sum << endl;
}