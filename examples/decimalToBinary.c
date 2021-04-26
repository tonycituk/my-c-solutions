#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary, int position)
{
    if (binary >= 1)
    {
        int decimal = 0;
        if (binary % 10 == 1) decimal = pow(2, position);
        decimal = decimal + binaryToDecimal(binary/10, ++position);
        return decimal;
    }
    return 0;
}

int main()
{
    int binario = 1111;
    printf("%d", binaryToDecimal(binario, 0));
    return 0;
}


/*
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary, int position)
{
    if (binary >= 1)
    {
        return pow(2, position) * (binary%10) + binaryToDecimal(binary / 10, ++position);
    }
    return 0;
}

int main()
{
    printf("%d", binaryToDecimal(101010, 0));
    return 0;
}*/