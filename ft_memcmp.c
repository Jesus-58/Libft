int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char *frase1;
	unsigned char *frase2;

	frase1 = (unsigned char *)s1;
	frase2 = (unsigned char *)s2;
	while (n--)
	{
		if (*frase1 != *frase2)
			return ((int)(*frase1 - *frase2));
		frase1++;
		frase2++;
	}
	return (0);
}
