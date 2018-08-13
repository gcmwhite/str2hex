/*

string or char to hex

like 'a' -> 10
	 'b' -> 11

*/


int str2Hex( const QByteArray &text)
{
    int ans(0);
    QByteArray temp { text };
    if( text.isEmpty() )
    {
        return 0;
    }
    const int size = temp.size();
    int num;
    for (int i = 0;i < size;i++)
    {
        ans = ans << 4;
        if (temp.at(i) >= '0' && temp.at(i) <= '9')
        {
            num = temp.at(i) - 48;
        } else if (temp.at(i) >= 'a' && temp.at(i) <= 'f')
        {
            num = temp.at(i) - 'a' + 10;
        } else if (temp.at(i) >= 'A' && temp.at(i) <= 'F')
        {
            num = temp.at(i) - 'A' + 10;
        } else {
            return 0;
        }
        ans = ans + num;
    }
    return ans;
}