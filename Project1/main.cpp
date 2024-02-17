#include <iostream>

#define N 7

using namespace std;

void spiral_matrix(int matrix[N][N]);
string convert_matrix_to_string(int matrix[N][N]);

int main() {

	int matrix[N][N] = {};

	spiral_matrix(matrix);

	string strMatrix = convert_matrix_to_string(matrix);

	cout << strMatrix;

	return 0;
}