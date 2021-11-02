unsigned int	ft_min(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	output;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	output = len_src + (ft_min(size, len_dest));
	if (len_src == 0 || size == 0)
		return (output);
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (output);
}
