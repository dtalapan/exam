unsigned char   reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits = 0;
    while (i > 0)
    {
        bits = (bits << i) | (octet & 1);
        octet >>= 1;
        i--;
    }
    return (bits);
}