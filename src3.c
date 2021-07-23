int function_year(int years) {
	int vis = 0;

	//Şëèàíñêèé 
	if (years >= 1700 && years <= 1917)
	{
		if (!(years % 4))
			vis = 1;
	}
	//ãğåãîğèàíñêèé
	else if (years >= 1919 && years <= 2700)
	{
		if (!(years % 400) || (!(years % 100) && !(years % 4)))
			vis = 1;
	}
	else if (years == 1918)
	{
		return 26;
	}
	else
	{
		return -1;
	}

	if (vis)
		return 12;
	else
		return 13;

}