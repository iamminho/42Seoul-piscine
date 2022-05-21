#include <unistd.h>
#include <stdio.h>
int length(int nb)
{
    int cnt = 0;
    while (nb > 0)
    {
        nb /= 10;
        cnt += 1;
    }
    return cnt;
}

void ft_putnbr(int nb)
{

    int len = length(nb);
    char result[len + 1];
    int ten = 10;
    int i = 0;
    while (len - 2 > 0)
    {
        int v = len - 2;
        while (v > 0)
        {
            ten *= 10;
            v--;
        }
        result[i] =
    }
}

int main()
{
    int num = 112;
    ft_putnbr(num);
    return 0;
}