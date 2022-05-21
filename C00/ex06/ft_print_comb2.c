#include <unistd.h>
void makeNum(int num, char *str)
{
    if (num < 10)
    {
        str[0] = '0';
        str[1] = num + '0';
    }
    else
    {
        str[0] = (num / 10) + '0';
        str[1] = (num % 10) + '0';
    }
}

void ft_print_comb2(void)
{
    char front[3];
    char rear[3];
    char s = ' ';
    char q[3] = ", ";
    int a = 0;
    int b = 1;

    while (a < 99)
    {
        makeNum(a, front);
        makeNum(b, rear);

        write(1, front, 3);
        write(1, &s, 1);
        write(1, rear, 3);
        if (a < 98)
            write(1, q, 3);

        b++;
        if (b == 100)
        {
            a++;
            b = a + 1;
        }
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}