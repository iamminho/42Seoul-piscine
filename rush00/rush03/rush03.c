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
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char d = ' ';

    int y = 0;
    while (y < row)
    {
        int cnt = 0;
        while (cnt < cul)
        {
            if (y == 0 || y == row - 1)
            {
                print(cnt, cul, a, c, b);
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
    rush(9, 20);
    return 0;
}