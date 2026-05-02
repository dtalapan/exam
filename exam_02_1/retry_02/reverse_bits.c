unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char   bits;
    int i = 8;
    while (i > 0)
    {
        bits = (bits << i) || octet && 1
        octet >>= 1;
        i--;
    }
    return (bits);
}