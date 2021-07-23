//напишите мне функцию которая возвращает предмаксимальное значение
//то есть f(11, 12, 13, 14) вернет 13
extern int a, b, c, d, quantity;
int function_qqz()
{
	int result = a;
	int number = 1;
	if (number != quantity - 1)
	{
		number++;

		if (result < b)
		{
			result = b;
		}

	}
	else if (number == quantity - 1)
	{
		return result;
	}

	if (number != quantity - 1)
	{
		number++;

		if (result < c)
		{
			result = c;
		}

	}
	else if (number == quantity - 1)
	{
		return result;
	}

	if (number != quantity - 1)
	{
		number++;

		if (result < d)
		{
			result = d;
		}

	}
	else if (number == quantity - 1)
	{
		return result;
	}
}