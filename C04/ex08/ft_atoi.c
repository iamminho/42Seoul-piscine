#include <stdbool.h>
int is_whitespace(char c)
{
    if (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == '\n')
        return 1;
    else
        return 0;
}
int is_minus(char c)
{
    if (c == '-')
        return 1;
    else
        return 0;
}
bool is_number(char c)
{
    return ('0' <= c && c <= '9');
}

int ft_atoi(const char *str)
{
    int result;
    int minus;

    minus = 1;
    while (is_whitespace(*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (is_minus(*str))
        {
            minus *= -1;
        }
        str++;
    }

    result = 0;
    while (is_number(*str))
    {
        result *= 10;
        result += *str - '0';
        str++;
    }
    return (result * minus);
}
#include <stdio.h>
int main(void)
{
    char str[100] = "   +1098234";
    int num = ft_atoi(str);
    printf("%d\n", num);
}