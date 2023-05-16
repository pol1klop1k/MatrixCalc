#pragma once

class Matr {
private:
	int rows_count; // число строк 
	int columns_count; // число столбцов
	double** body; // тело матрицы
	bool isValid = true; //служебный атрибут для проверки валидности матрицы

	bool is_all_nuls(double* row, int len) {
		for (int i = 0; i < len; i++) {
			if (row[i] != 0) {
				return false;
			}
		}
		return true;
	}

	Matr alg(int i, int j) {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		Matr res{ r - 1, c - 1 }; //создаем матрицу на 1 размерность меньше
		int res_i = 0; //индекс строки минора, в которую добавляем элементы
		int res_j; //индекс столбца минора, в который добавляем элементы
		for (int k = 0; k < r; k++) {
			if (k == i) continue; //пропускаем, если индекс текущей строки равен индексу элемента
			res_j = 0;
			double* row = new double[c - 1]; //создаем строку для минора
			for (int v = 0; v < c; v++) {
				if (v != j) { //если текущий столбец не равен индексу элемента
					row[res_j] = this->get_row(k)[v]; //то добавляем его в строку
					res_j++;
				}
			}
			res.set_row(res_i, row); //добавляем строку в минор
			res_i++;
		}
		return res;
	}
public:
	Matr(int r, int c) {
		this->set_rows_count(r);
		this->set_columns_count(c);
		double** body = new double* [r];
		this->set_body(body);
	}

	~Matr() { }

	void set_rows_count(int x) { this->rows_count = x; }
	void set_columns_count(int x) { this->columns_count = x; }
	void set_body(double** x) { this->body = x; }
	void set_row(int i, double* row) { this->body[i] = row; }
	void set_status(bool s) { this->isValid = s; }

	double **get_body() { return this->body; }
	int get_rows_count() { return this->rows_count; }
	int get_columns_count() { return this->columns_count; }
	double* get_row(int i) { return this->body[i]; }
	bool get_status() { return this->isValid; }

	double determinant() {
		int len = this->get_rows_count();
		if (len == 1) return this->get_row(0)[0]; // если матрица 1х1, то вернуть значение элемента
		double sum = 0; // счетчик накопления алгоритмических дополнений
		for (int c = 0; c < len; c++) {
			int sign = (c) % 2 == 0 ? 1 : -1; // знак для алг. дополнения
			int number = this->get_row(c)[0];
			Matr minor = this->alg(c, 0); //ищем минор с помощью 
			sum += sign * number * minor.determinant(); // прибавляем к сумме алг. дополнение
		}
		return sum; // возвращаем накопленную сумму
	}

	Matr mult_num(double num) {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		Matr res{ r, c };
		for (int i = 0; i < r; i++) {
			double* row = new double[c];
			for (int j = 0; j < c; j++) {
				row[j] = (this->get_row(i))[j] * num;
			}
			res.set_row(i, row);
		}
		return res;
	}

	Matr add_matr(Matr matrix) {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		Matr res{ r, c };
		for (int i = 0; i < r; i++) {
			double* row = new double[c];
			for (int j = 0; j < c; j++) {
				row[j] = (this->get_row(i))[j] + (matrix.get_row(i))[j];
			}
			res.set_row(i, row);
		}
		return res;
	}

	Matr sub_matr(Matr matrix) {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		Matr res{ r, c };
		for (int i = 0; i < r; i++) {
			double* row = new double[c];
			for (int j = 0; j < c; j++) {
				row[j] = (this->get_row(i))[j] - (matrix.get_row(i))[j];
			}
			res.set_row(i, row);
		}
		return res;
	}

	Matr transpose() {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		Matr res{ c, r };
		for (int j = 0; j < c; j++) {
			double* row = new double[r];
			for (int i = 0; i < r; i++) {
				row[i] = (this->get_row(i))[j];
			}
			res.set_row(j, row);
		}
		return res;
	}
	
	Matr mult_matr(Matr matrix) {
		int q = this->get_columns_count();
		int r = this->get_rows_count();
		int c = matrix.get_columns_count();

		double sum;

		Matr res{ r, c };
		for (int i = 0; i < r; i++) {
			double *row = new double[c];
			for (int j = 0; j < c; j++) {
				sum = 0;
				for (int k = 0; k < q; k++) {
					sum += (this->get_row(i))[k] * (matrix.get_row(k))[j];
				}
				row[j] = sum;
			}
			res. set_row(i, row);
		}
		return res;
	}

	Matr pow(int p) {
		int r = this->get_rows_count();

		Matr res{ r, r };
		if (p == 0) {
			for (int i = 0; i < r; i++) {
				double *row = new double[r];
				for (int j = 0; j < r; j++) {
					row[j] = i == j ? 1 : 0;
				}
				res.set_row(i, row);
			}
			return res;
		}

		for (int i = 0; i < r; i++) {
			double* row = new double[r];
			for (int j = 0; j < r; j++) {
				row[j] = (this->get_row(i))[j];
			}
			res.set_row(i, row);
		}

		for (int i = 1; i < p; i++) {
			res = res.mult_matr(*this);
		}
		return res;
	}

	int rank() {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		double** res = new double* [r];
		for (int i = 0; i < r; i++) {
			double* buf_row = new double[c];
			res[i] = buf_row;
			for (int j = 0; j < c; j++) {
				buf_row[j] = double(this->get_row(i)[j]);
			}
		}

		int i = 0;
		for (int row1 = 0; row1 < r - 1; row1++) {
			if (is_all_nuls(res[row1], c)) continue;
			if (res[row1][i] == 0) {
				int k = row1 + 1;
				double* buffer = new double[c];
				while (res[row1][i] == 0) {
					buffer = res[row1];
					res[row1] = res[k];
					res[k] = buffer;
					k += 1;
					if (k == r) {
						i++;
						continue;
					}
				}
			}
			for (int row2 = row1 + 1; row2 < r; row2++) {
				if (is_all_nuls(res[row2], c)) continue;
				double x = -(res[row2][i]) / res[row1][i];
				for (int column = 0; column < c; column++) {
					res[row2][column] += x * res[row1][column];
				}
			}
			i++;
		}
		int result = 0;
		for (int i = 0; i < r; i++) {
			if (!(is_all_nuls(res[i], c))) result++;
		}
		return result;
	}
	
	Matr reversed_matr() {
		int r = this->get_rows_count();
		int c = this->get_columns_count();

		int det = this->determinant();
		Matr alg_dop{ r, c };
		for (int i = 0; i < r; i++) {
			double* row = new double[c];
			for (int j = 0; j < r; j++) {
				int sign = (i+j) % 2 == 0 ? 1 : -1;
				row[j] = sign * (this->alg(i, j)).determinant();
			}
			alg_dop.set_row(i, row);
		}
		Matr trans_alg_dop = alg_dop.transpose();
		Matr res = trans_alg_dop.mult_num(double(1) / double(det));
		return res;
	}
};
