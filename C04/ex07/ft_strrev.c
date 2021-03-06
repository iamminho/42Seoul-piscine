void ft_swap_char(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char *ft_strrev(char *str)
{
    int index;
    int size;

    size = 0;
    while (str[size])
        size++;
    index = 0;
    while (index < size / 2)
    {
        ft_swap_char(&str[index], &str[size - 1 - index]);
        index++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char *string;
    char str[100] = "abcdefg hijklmn";
    string = ft_strrev(str);
    printf("%s\n", string);
}