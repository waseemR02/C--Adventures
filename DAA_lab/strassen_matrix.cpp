#include <bits/stdc++.h>
using namespace std;

#define ROW_1 4
#define COL_1 4

#define ROW_2 4
#define COL_2 4

void print(string display, vector<vector<int> > matrix,
		int start_row, int start_column, int end_row,
		int end_column)
{
	cout << endl << display << " =>" << endl;
	for (int i = start_row; i <= end_row; i++) {
		for (int j = start_column; j <= end_column; j++) {
			cout << setw(10);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
	return;
}

void add_matrix(vector<vector<int> > matrix_A,
				vector<vector<int> > matrix_B,
				vector<vector<int> >& matrix_C,
				int split_index)
{
	for (auto i = 0; i < split_index; i++)
		for (auto j = 0; j < split_index; j++)
			matrix_C[i][j]
				= matrix_A[i][j] + matrix_B[i][j];
}

vector<vector<int> >
multiply_matrix(vector<vector<int> > matrix_A,
				vector<vector<int> > matrix_B)
{
	int col_1 = matrix_A[0].size();
	int row_1 = matrix_A.size();
	int col_2 = matrix_B[0].size();
	int row_2 = matrix_B.size();

	if (col_1 != row_2) {
		cout << "\nError: The number of columns in Matrix "
				"A must be equal to the number of rows in "
				"Matrix B\n";
		return {};
	}

	vector<int> result_matrix_row(col_2, 0);
	vector<vector<int> > result_matrix(row_1,
									result_matrix_row);

	if (col_1 == 1)
		result_matrix[0][0]
			= matrix_A[0][0] * matrix_B[0][0];
	else {
		int split_index = col_1 / 2;

		vector<int> row_vector(split_index, 0);
		vector<vector<int> > result_matrix_00(split_index,
											row_vector);
		vector<vector<int> > result_matrix_01(split_index,
											row_vector);
		vector<vector<int> > result_matrix_10(split_index,
											row_vector);
		vector<vector<int> > result_matrix_11(split_index,
											row_vector);

		vector<vector<int> > a00(split_index, row_vector);
		vector<vector<int> > a01(split_index, row_vector);
		vector<vector<int> > a10(split_index, row_vector);
		vector<vector<int> > a11(split_index, row_vector);
		vector<vector<int> > b00(split_index, row_vector);
		vector<vector<int> > b01(split_index, row_vector);
		vector<vector<int> > b10(split_index, row_vector);
		vector<vector<int> > b11(split_index, row_vector);

		for (auto i = 0; i < split_index; i++)
			for (auto j = 0; j < split_index; j++) {
				a00[i][j] = matrix_A[i][j];
				a01[i][j] = matrix_A[i][j + split_index];
				a10[i][j] = matrix_A[split_index + i][j];
				a11[i][j] = matrix_A[i + split_index]
									[j + split_index];
				b00[i][j] = matrix_B[i][j];
				b01[i][j] = matrix_B[i][j + split_index];
				b10[i][j] = matrix_B[split_index + i][j];
				b11[i][j] = matrix_B[i + split_index]
									[j + split_index];
			}

		add_matrix(multiply_matrix(a00, b00),
				multiply_matrix(a01, b10),
				result_matrix_00, split_index);
		add_matrix(multiply_matrix(a00, b01),
				multiply_matrix(a01, b11),
				result_matrix_01, split_index);
		add_matrix(multiply_matrix(a10, b00),
				multiply_matrix(a11, b10),
				result_matrix_10, split_index);
		add_matrix(multiply_matrix(a10, b01),
				multiply_matrix(a11, b11),
				result_matrix_11, split_index);

		for (auto i = 0; i < split_index; i++)
			for (auto j = 0; j < split_index; j++) {
				result_matrix[i][j]
					= result_matrix_00[i][j];
				result_matrix[i][j + split_index]
					= result_matrix_01[i][j];
				result_matrix[split_index + i][j]
					= result_matrix_10[i][j];
				result_matrix[i + split_index]
							[j + split_index]
					= result_matrix_11[i][j];
			}

		result_matrix_00.clear();
		result_matrix_01.clear();
		result_matrix_10.clear();
		result_matrix_11.clear();
		a00.clear();
		a01.clear();
		a10.clear();
		a11.clear();
		b00.clear();
		b01.clear();
		b10.clear();
		b11.clear();
	}
	return result_matrix;
}

int main()
{
	vector<vector<int> > matrix_A = { { 1, 1, 1, 1 },
									{ 2, 2, 2, 2 },
									{ 3, 3, 3, 3 },
									{ 2, 2, 2, 2 } };

	print("Array A", matrix_A, 0, 0, ROW_1 - 1, COL_1 - 1);

	vector<vector<int> > matrix_B = { { 1, 1, 1, 1 },
									{ 2, 2, 2, 2 },
									{ 3, 3, 3, 3 },
									{ 2, 2, 2, 2 } };

	print("Array B", matrix_B, 0, 0, ROW_2 - 1, COL_2 - 1);

	vector<vector<int> > result_matrix(
		multiply_matrix(matrix_A, matrix_B));

	print("Result Array", result_matrix, 0, 0, ROW_1 - 1,
		COL_2 - 1);
}

// algorithm for strassen's matrix 
// multiplication
// 1. Divide the matrices into four sub-matrices of
// equal size.
// 2. Calculate the following 7 expressions using the 
// sub-matrices:
// S1 = B12 - B22
// S2 = A11 + A12
// S3 = A21 + A22
// S4 = B21 - B11
// S5 = A11 + A22
// S6 = B11 + B22
// S7 = A12 - A22
// S8 = B21 + B22
// S9 = A11 - A21
// S10 = B11 + B12
// 3. Calculate P1 to P7 using the S1 to S10
// expressions:
// P1 = A11 * S1
// P2 = S2 * B22
// P3 = S3 * B11
// P4 = A22 * S4
// P5 = S5 * S6
// P6 = S7 * S8
// P7 = S9 * S10
// 4. Calculate the 4 sub-matrices of the final matrix
// C using the P1 to P7 expressions:
// C11 = P5 + P4 - P2 + P6
// C12 = P1 + P2
// C21 = P3 + P4
// C22 = P5 + P1 - P3 - P7
// 5. Join the 4 sub-matrices into a single matrix
// by combining them horizontally and vertically.
// 6. The resultant matrix is the Strassen's matrix
// multiplication of the two given matrices.
// 7. Repeat the above steps for the sub-matrices
// until the size of the matrices becomes 1x1.
// 8. Then, perform the matrix multiplication
// operation on the 1x1 matrices.
// 9. Return the resultant matrix.
// 10. Exit.
// Time Complexity: O(n^2.8074)
// Space Complexity: O(n^2)
// where n is the size of the matrix
