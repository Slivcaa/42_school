void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// int main(void)
// {
//     char buffer[10];

//     ft_memset(buffer, 'X', sizeof(buffer));

//     for (size_t i = 0; i < sizeof(buffer); i++)
//     {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
