#include <unistd.h>

void print(int cnt, int cul, char a, char b, char c)
{
    if (cnt == 0)
        write(1, &a, 1);
    else if (cnt == cul - 1)
        write(1, &b, 1);
    else
        write(1, &c, 1);
}

void rush(int cul, int row)
{
    char s = '\n';
    char a = 'o';
    char b = '|';
    char c = '-';
    char d = ' ';

    int y = 0;
    while (y < row)
    {
        int cnt = 0;
        while (cnt < cul)
        {
            if (y == 0)
            {
                print(cnt, cul, a, a, c);
            }
            else if (y == row - 1)
            {
                print(cnt, cul, a, a, c);
            }
            else
            {
                print(cnt, cul, b, b, d);
            }
            cnt++;
        }
        write(1, &s, 1);
        y++;
    }
}

int main()
{
    rush(123, 42);
    return 0;
}