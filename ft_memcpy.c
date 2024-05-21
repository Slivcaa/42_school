void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;
    
    i = 0;
    d = (char *)dest;
    s = (char *)src;

    while(i < n)
    {
        d[i] = s[i];
        i++;

    }
    return (dest);
}

int main(void)
{
    char src[] = "Hello World";
    char dest[10];

    ft_memcpy(dest,src,sizeof(src));
    printf("%s", dest);
    return (0);
}
