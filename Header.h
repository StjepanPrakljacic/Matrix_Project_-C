typedef struct {
	int row;
	int column;
	int** data;
} Matrix;

Matrix* Matrix_Alcoation();
void Matrix_delete(Matrix* M);
void Matrix_Fill(Matrix* M);
void Matrix_print(Matrix* M);