size_t    ft_strlcpy(char *dst, char *src, size_t size)
{
    size_t i;
    size_t len;

    len = ft_strlen(src);
    if (size < 1)
        return (len);
    while (src[i] != '\0' && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
