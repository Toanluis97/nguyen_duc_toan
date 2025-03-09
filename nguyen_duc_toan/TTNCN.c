int ttncn(int tien_dong_thue)
{
	int vat=0;
	int bac;
	switch (bac)
	{
	case 1:
	{
		if (tien_dong_thue <= 5000000)
		{
			vat = 0.05 * tien_dong_thue;
		}
		else
			bac++;
	}break;

	default:
		break;
	}
	return vat;
}