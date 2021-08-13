#include <iostream>
#include <string>
using namespace std;

int main() {
    string tesla[4] = {"Tesla Model S", "Tesla Model 3", "Tesla Model X", "Tesla Model Y"};
    int numbers [4] = {10, 15, 19, 99};

		cout << "Sorted strings\n";
    for (int i = 0; i < 4; i++){
        cout << i << ": " << tesla[i] << "\n";
	}

		cout << "\nSorted strings\n";
    for (int j = 0; j < 4; j++){
        cout << j << ": " << numbers[j] << "\n";
    }
    
    return 0;
}
