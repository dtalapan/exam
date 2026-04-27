unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int div;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		div = a;
	else
		div = b;
	while (1)
	{
		if (div % a == 0 && div % b == 0)
			return (div);
		div++;
	}
}
