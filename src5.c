//��� �������...
//�� ������� ��� ����, ����� ����� ������� � 4�� �����������
//������� ��� �������(�� ������) ����� ������������ � ����������� ���������
extern int a, b, c, d;
int minres;//minres(����������� ���������)
int maxres;//maxres(������������ ���������)
int raz1;//raz(�������)
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
		}// ��������� ����������� �����
	
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
		}// ��������� ������������ �����
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