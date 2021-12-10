
char	*ft_add_0x(char *bribe)
{
	char	*add_0x;

	add_0x = ft_strdup("0x");
	bribe = ft_strjoin(add_0x, bribe);
	return (bribe);
}