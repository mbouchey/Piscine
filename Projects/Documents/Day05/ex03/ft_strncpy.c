char	*ft_strcpy(char *dest, char *src)
{
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
