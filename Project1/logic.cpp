#include <iostream>
#include <string>

#define N 7

using namespace std;

void spiral_matrix(int matrix[N][N]) {

	int n = N;
	int num = 1;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			matrix[i][j] = num;
			num++;
		}
		for (int j = i + 1; j < n; j++) {
			matrix[j][n - 1] = num;
			num++;
		}
		--n;
		for (int j = n - 1; j >= i; j--) {
			matrix[n][j] = num;
			num++;
		}
		for (int j = n - 1; j >= i + 1; j--) {
			matrix[j][i] = num;
			num++;
		}
	}
}

string convert_matrix_to_string(int matrix[N][N]) {

	string msg = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			msg += to_string(matrix[i][j]) + '\t';
		}
		msg += "\n";
	}

	return msg;
}