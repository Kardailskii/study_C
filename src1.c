//написать функцию возвращающую максимум из 4 входящих аргументов

int function_mg1(int a, int b, int c, int d) {
	int result = a;

	if (result < b) {
		result = b;
	}

	if (result < c) {
		result = c;
	}

	if (result < d) {
		result = d;
	}

	return result;
}