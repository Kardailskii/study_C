//���� 4 ���������� ���������� ����������� ��������� ����������������...
//�������� ������� ������������ 1 ���� ��� ������� 3 ��������������� ���� 2000 ������ � ����, � 0 � ��������� ������
extern int metr1, metr2, metr3, metr4;
int function_mg2() {
	int result = 0;

	if (metr1 >= 2000)
	{
		result++;
	}

	if (metr2 >= 2000)
	{
		result++;
	}
	if (metr3 >= 2000)
	{
		result++;
	}
	if (metr4 >= 2000)
	{
		result++;
	}

	return result > 2;
}