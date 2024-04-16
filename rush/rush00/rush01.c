void ft_putchar(char c);

void rush01(int x, int y)
{
    int numx;
    int numy;

    numx = 1;
    numy = 1;
    while(numy <= y)
    {
        while(numx <= x)
        {
            if (( numx ==1 || numx == x) && numy==y)
            {
                ft_putchar('/');
            }
            else if( numx==x && (numy == 1 || numx ==y))
            {
                ft_putchar('\\');
            }
            else if((numx==1 || numx==x || numy == 1 || numx ==y))
            {
                ft_putchar('*');
            }
            else
            {
                ft_putchar(' ');
            }
            numx++;
        }
        ft_putchar('\n');
        numy++;
        numx = 1;    
    }
}