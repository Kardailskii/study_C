extern int resolution;
extern float number;
int function_zzr() 
{
	float result;

	if(resolution == 1)
	{
		result = number * 99 / 100;
		return result;
	}
	return 0;
}