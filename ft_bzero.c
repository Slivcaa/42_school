void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main(void)
{
    char buffer[10];
    ft_bzero(buffer,10);
    for(int i = 0; i < 10; i++)
    {
        printf("%d", buffer[i]);
    }
    return(0);
}
