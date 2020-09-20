void rush(int a, int b)
{
	int extra = a;
	int bextra = b;

	while (b-- >= 0)
	{
		while (a -- >= 0)
		{
			if ((b == bextra || b == 0) && (a == 0 || a == extra)) // corner 
				write o
			elif ((b != bextra && b != 0) && (a == 0 || a == extra)) // sides
				write |
			elif ((b == bextra || b = 0) && (a != 0 || a != extra)) // top bottom
				write -
			else    // inside
				write ' '
			if (a==0)   // right side
				write '\n'
		}
		a = extra
	}
}
