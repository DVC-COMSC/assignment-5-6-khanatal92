
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j) {
			if ((i+j)>(N-2))
			{
			cout << i << ", " << j << endl;
		}
	}

	return 0;
}
