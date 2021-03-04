/* power: raise base to n-th power; n >= 0
          (old-style version) */
power (base, n)
int base, n;
{
	int p = 1;
	for (int i = 1; i <= n; ++i)
		p *= base;
	return p;
}
