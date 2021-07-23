//еще задачка...
//да давайте про тоже, пусть будет функция с 4мя аргументами
//верните мне разницу(по модулю) между максимальным и минимальным значением
extern int a, b, c, d;
int minres;//minres(минимальный результат)
int maxres;//maxres(максимальный результат)
int raz1;//raz(разница)
int raz2;
int function_dmc() 
{
	minres = a;
	maxres = a;
	
	if (minres > b) 
		{
		minres = b;
		}
	
	if (minres > c)
		{
		minres = c;
		}
	
	if (minres > d)
		{
		minres = d;
		}// вычислили минимальное число
	
	if (maxres < b)
		{
		maxres = b;
		}
	
	if (maxres < c)
		{
		maxres = c;
		}
	
	if (maxres < d)
		{
		maxres = d;
		}// вычислили максимальное число
	raz1 = maxres - minres;
	raz2 = minres - maxres;
	if (raz1 < raz2) 
	{
		return raz2;
	}
	else if (raz1 == raz2) {
		return 0;
	}
}