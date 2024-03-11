#include <iostream>
using namespace std;

int printRightBottomTriangleIndices(int rows, int columns) {
    int totalCells = rows * columns; 
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
                cout << i << ", " << j << endl;
                ++count;
        }
    }
    return count;
}

int main()
 {
	int N;
	cin >> N;

    int rows = N;
    int columns = N;
    printRightBottomTriangleIndices(rows, columns);
    return 0;
 }
