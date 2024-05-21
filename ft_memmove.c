void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;
    
    i = 0;
    d = (char *)dest;
    s = (char *)src;

    if(d == s)
    return (dest);
    if(d < s) 
    {
        size_t i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++;

        } 
    }
    else
    {
        size_t i = n;
        while(i > 0)
        {
            d[i] = s[i];
            i--;

        } 
    }
    return (dest);
}

int main(void)
{
    int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dest[10];

    ft_memmove(dest,src,sizeof(int) * 10);
    for(int i = 0; i < 10; i++)
    printf("%d", i, dest[i]);
    return (0);
}
